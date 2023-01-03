



## 异常处理

发生Trap时cpu需要做的事情

1. 将mstatues中的MIE保存到MPIE中，清除mstatus中的MIE标志位，中断被禁止
2. 保存发生异常指令的PC到mepc中，设置PC为mtvec
3. 根据trap的类型设置mcause以及mtval
4. 将trap发生之前的权限模式保存在mstatus的mpp中，再把hart的权限改成Machine，无论什么模式除法trap都会首先切换到Machine模式

退出Trap: mret

1. 将当前Hart的权限级别设置为mstatus中的MPP
2. mstatus.MIE = mstatus.MPIE
3. mstatus.MPIE = 1
4. pc = mepc

