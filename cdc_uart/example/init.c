extern int __bss;
extern int __bss_end;
extern int __data;
extern int __data_end;
extern int __data_load;

#define NULL 0

typedef unsigned char uint8_t;
typedef unsigned int uint32_t;

void __data_init(void)
{
    uint32_t i;

    uint8_t* mem = (uint8_t*)&__data;
    uint32_t mem_size = (uint32_t)(&__data_end - &__data)*4;

    uint8_t* mem_load = (uint8_t*)&__data_load;

    if(mem_load == NULL) return;

    for(i = 0; i < mem_size; i++, mem++, mem_load++) *mem = *mem_load;
}

void __bss_init(void)
{
    uint32_t i;
    uint8_t* mem = (uint8_t*)&__bss;
    uint32_t mem_size = (uint32_t)(&__bss_end - &__bss)*4;

    for(i = 0; i < mem_size; i++, mem++) *mem = 0;
}

void int_reset(void)
{
    __bss_init();
    __data_init();
    main();
}

void exit(int r)
{
    while(1);
}

