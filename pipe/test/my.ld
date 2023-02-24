OUTPUT_ARCH("riscv")

ENTRY(_start)

MEMORY
{
    ram(rxa!w) : ORIGIN = 0, LENGTH = 8K
}


SECTIONS
{   
    .text : 
    {
        *(.text)
    } >ram
    
    .data : 
    {   
        *(.data)
    } >ram
    
}