OUTPUT_FORMAT ("elf32-littlearm", "elf32-bigarm", "elf32-littlearm")
SEARCH_DIR(.)

MEMORY
{
    ram (rwx) : ORIGIN = 0x10000200, LENGTH =  4K
    rom (rx) : ORIGIN = 0x00000000, LENGTH =  64K
}

ENTRY(vt)

SECTIONS
{
    .text :
    {
        vectors.o(.data)
        init.o(.text)
        *(.text)
        __data_load = .;
    } >rom

    .bss (NOLOAD):
    {
    __bss = .;
    __bss_start__ = .;
        *(.bss)
    __bss_end = .;
    __bss_end__ = .;
    } >ram

    .data :
    {
        __data = .;
        *(.data)
        __data_end = .;
    } >ram AT>rom

    __stack = 0x10000000;
}
