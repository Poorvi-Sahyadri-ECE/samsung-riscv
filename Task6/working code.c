#include <ch32v00x.h>

#define LED_PIN GPIO_Pin_0  // PD0 for LED

// Proper Delay Function (Without __asm__)
void Delay_ms(uint32_t ms) {
    volatile uint32_t count;
    while (ms--) {
        for (count = 0; count < 4800; count++) {
            // Just an empty loop to create delay (NO assembly)
        }
    }
}

// Function to blink LED for a given duration
void blink(int duration) {
    GPIO_WriteBit(GPIOD, LED_PIN, Bit_SET);
    Delay_ms(duration);
    GPIO_WriteBit(GPIOD, LED_PIN, Bit_RESET);
    Delay_ms(200);  // Short pause between blinks
}

void setup() {
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = LED_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}

void loop() {
    while (1) {
        // S = · · · (3 short blinks)
        blink(200);
        blink(200);
        blink(200);

        Delay_ms(400); // Pause between S and O

        // O = — — — (3 long blinks)
        blink(600);
        blink(600);
        blink(600);

        Delay_ms(400); // Pause between O and S

        // S = · · · (3 short blinks)
        blink(200);
        blink(200);
        blink(200);

        // Longer Pause before repeating
        Delay_ms(2000);
    }
}

// Ensure main() is correctly defined
int main(void) {
    setup();
    loop();
    return 0;
}
