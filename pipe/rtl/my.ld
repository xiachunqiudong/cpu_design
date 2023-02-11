OUTPUT_ARCH("riscv")

ENTRY(_start)

MEMORY
{
    iram(rxa!w) : ORIGIN = 0,      LENGTH = 4k
    dram(rxa!w) : ORIGIN = 4096,   LENGTH = 4K
}


SECTIONS
{   
    .text : 
    {
        *(.text)
    } >iram

    .data : 
    {   
        *(.data)
    } >dram
    
}