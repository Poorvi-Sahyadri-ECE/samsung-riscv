# RISC-V Instructions Set Breakdown

## 1. **addi sp, sp, -32**
Opcode (ADDI): `0010011`  
Immediate: `-32`  
Registers: `sp (rd)`, `sp (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 11111110000 | 00010 | 000    | 00010 | 0010011 |

---

## 2. **sd ra, 24(sp)**
Opcode (SD): `0100111`  
Immediate: `24`  
Registers: `ra (rs2)`, `sp (rs1)`  

| imm[11:5] | rs2   | rs1   | funct3 | imm[4:0] | opcode  |
|-----------|-------|-------|--------|----------|---------|
| 0000000   | 00001 | 00010 | 011    | 11000    | 0100111 |

---

## 3. **jal ra, 10448**
Opcode (JAL): `1101111`  
Immediate: `10448`  
Register: `ra (rd)`  

| imm[20] | imm[10:1] | imm[11] | imm[19:12] | rd    | opcode  |
|---------|-----------|---------|------------|-------|---------|
| 0       | 0010100000| 0       | 10100000   | 00001 | 1101111 |

---

## 4. **ld ra, 24(sp)**
Opcode (LD): `0000011`  
Immediate: `24`  
Registers: `ra (rd)`, `sp (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000001100 | 00010 | 011    | 00001 | 0000011 |

---

## 5. **lw a1, 8(sp)**
Opcode (LW): `0000011`  
Immediate: `8`  
Registers: `a1 (rd)`, `sp (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000000100 | 00010 | 010    | 01011 | 0000011 |

---

## 6. **li a0, 0**
Opcode (ADDI): `0010011`  
Immediate: `0`  
Registers: `a0 (rd)`, `x0 (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000000000 | 00000 | 000    | 01010 | 0010011 |

---

## 7. **jalr x0, 0(ra)**
Opcode (JALR): `1100111`  
Immediate: `0`  
Registers: `x0 (rd)`, `ra (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000000000 | 00001 | 000    | 00000 | 1100111 |

---

## 8. **addi a0, a0, -920**
Opcode (ADDI): `0010011`  
Immediate: `-920`  
Registers: `a0 (rd)`, `a0 (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 11000110100 | 01010 | 000    | 01010 | 0010011 |

---

## 9. **sd s0, 16(sp)**
Opcode (SD): `0100111`  
Immediate: `16`  
Registers: `s0 (rs2)`, `sp (rs1)`  

| imm[11:5] | rs2   | rs1   | funct3 | imm[4:0] | opcode  |
|-----------|-------|-------|--------|----------|---------|
| 0000000   | 01000 | 00010 | 011    | 10000    | 0100111 |

---

## 10. **lw a5, 12(sp)**
Opcode (LW): `0000011`  
Immediate: `12`  
Registers: `a5 (rd)`, `sp (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000001100 | 00010 | 010    | 01000 | 0000011 |

---

## 11. **add a1, a1, a5**
Opcode (ADD): `0110011`  
Registers: `a1 (rd)`, `a1 (rs1)`, `a5 (rs2)`  

| funct7   | rs2   | rs1   | funct3 | rd    | opcode  |
|----------|-------|-------|--------|-------|---------|
| 0000000  | 01000 | 01011 | 000    | 01011 | 0110011 |

---

## 12. **add a0, a1, a5**
Opcode (ADD): `0110011`  
Registers: `a0 (rd)`, `a1 (rs1)`, `a5 (rs2)`  

| funct7   | rs2   | rs1   | funct3 | rd    | opcode  |
|----------|-------|-------|--------|-------|---------|
| 0000000  | 01000 | 01011 | 000    | 01010 | 0110011 |

---

## 13. **addw a1, a1, a5**
Opcode (ADDW): `0111011`  
Registers: `a1 (rd)`, `a1 (rs1)`, `a5 (rs2)`  

| funct7   | rs2   | rs1   | funct3 | rd    | opcode  |
|----------|-------|-------|--------|-------|---------|
| 0000000  | 01000 | 01011 | 000    | 01011 | 0111011 |

---

## 14. **lui a0, 0x2b**
Opcode (LUI): `0110111`  
Immediate: `0x2b` (Shifted left 12 bits)  
Register: `a0 (rd)`  

| imm[31:12]      | rd    | opcode  |
|------------------|-------|---------|
| 000000000101011  | 01010 | 0110111 |

---

## 15. **li a0, 0**
Opcode (ADDI): `0010011`  
Immediate: `0`  
Registers: `a0 (rd)`, `x0 (rs1)`  

| imm[11:0]   | rs1   | funct3 | rd    | opcode  |
|-------------|-------|--------|-------|---------|
| 00000000000 | 00000 | 000    | 01010 | 0010011 |

---
