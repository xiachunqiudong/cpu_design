OUTPUT_ARCH("riscv")

ENTRY(_start)


SECTIONS
{   
    . = 0x0;
    .text : 
    {
        *(.text)
    }
    
    . = 0x2000;
    .data : 
    {   
        *(.data)
    }
    
}
