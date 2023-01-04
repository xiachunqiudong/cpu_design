

# 一.组会记录

## 2023年1月

### 1月1日

1. 项目不知道怎么展示
   - 支持指令条数 种类 RV64IM
   - 冒险
   - 验证测试
2. 不是科班
3. 没有实习经历
4. 本科学校不行



# 二.CPU模块设计

## 1. INSTR FETCH

## 2. INSTR DECODE



**id_opcode_info**

指令类型

|     SIGNAL     | POSITION |
| :------------: | :------: |
|  `OP_ALU_IMM`  |    11    |
| `OP_ALU_IMM_W` |    10    |
|    `OP_ALU`    |    9     |
|   `OP_ALU_W`   |    8     |
|  `OP_BRANCH`   |    7     |
|    `OP_JAL`    |    6     |
|   `OP_JALR`    |    5     |
|   `OP_LOAD`    |    4     |
|   `OP_STORE`   |    3     |
|    `OP_LUI`    |    2     |
|   `OP_AUIPC`   |    1     |
|  `OP_SYSTEM`   |    0     |

```verilog
    // OP INFO
    assign id_opcode_info_o = {
                              rv64_alu_imm,
                              rv64_alu_imm_w,
                              rv64_alu,
                              rv64_alu_w,
                              rv64_branch,
                              rv64_jal,
                              rv64_jalr,
                              rv64_load,
                              rv64_store,
                              rv64_lui,
                              rv64_auipc,
                              rv64_system
                              };
```



## 3. EXECUTION

## 4. MEMORY

## 5. WRITE BACK
