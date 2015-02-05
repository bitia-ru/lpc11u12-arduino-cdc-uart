extern int __stack;

void __attribute__((weak)) int_reset(void) { while(1); }
void __attribute__((weak)) int_nmi(void) { while(1); }
void __attribute__((weak)) int_hardfault(void) { while(1); }
void __attribute__((weak)) int_svcall(void) { while(1); }
void __attribute__((weak)) int_pendsv(void) { while(1); }
void __attribute__((weak)) int_systick(void) { while(1); }
void __attribute__((weak)) int_pin_int0(void) { while(1); }
void __attribute__((weak)) int_pin_int1(void) { while(1); }
void __attribute__((weak)) int_pin_int2(void) { while(1); }
void __attribute__((weak)) int_pin_int3(void) { while(1); }
void __attribute__((weak)) int_pin_int4(void) { while(1); }
void __attribute__((weak)) int_pin_int5(void) { while(1); }
void __attribute__((weak)) int_pin_int6(void) { while(1); }
void __attribute__((weak)) int_pin_int7(void) { while(1); }
void __attribute__((weak)) int_gint0(void) { while(1); }
void __attribute__((weak)) int_gint1(void) { while(1); }
void __attribute__((weak)) int_ssp1(void) { while(1); }
void __attribute__((weak)) int_i2c(void) { while(1); }
void __attribute__((weak)) int_ct16b0(void) { while(1); }
void __attribute__((weak)) int_ct16b1(void) { while(1); }
void __attribute__((weak)) int_ct32b0(void) { while(1); }
void __attribute__((weak)) int_ct32b1(void) { while(1); }
void __attribute__((weak)) int_ssp0(void) { while(1); }
void __attribute__((weak)) int_usart(void) { while(1); }
void __attribute__((weak)) int_usb_irq(void) { while(1); }
void __attribute__((weak)) int_usb_fiq(void) { while(1); }
void __attribute__((weak)) int_adc(void) { while(1); }
void __attribute__((weak)) int_wwdt(void) { while(1); }
void __attribute__((weak)) int_bod(void) { while(1); }
void __attribute__((weak)) int_flash(void) { while(1); }
void __attribute__((weak)) int_usb_wakeup(void) { while(1); }
void __attribute__((weak)) int_ioh(void) { while(1); }

typedef void (*int_handler_func) (void);

const int_handler_func* vt[] =
{
    (int_handler_func*)&__stack,
    (int_handler_func*)&int_reset,
    (int_handler_func*)&int_nmi,
    (int_handler_func*)&int_hardfault,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (int_handler_func*)&int_svcall,
    0,
    0,
    (int_handler_func*)&int_pendsv,
    (int_handler_func*)&int_systick,
    (int_handler_func*)&int_pin_int0,
    (int_handler_func*)&int_pin_int1,
    (int_handler_func*)&int_pin_int2,
    (int_handler_func*)&int_pin_int3,
    (int_handler_func*)&int_pin_int4,
    (int_handler_func*)&int_pin_int5,
    (int_handler_func*)&int_pin_int6,
    (int_handler_func*)&int_pin_int7,
    (int_handler_func*)&int_gint0,
    (int_handler_func*)&int_gint1,
    (int_handler_func*)&int_ssp1,
    (int_handler_func*)&int_i2c,
    (int_handler_func*)&int_ct16b0,
    (int_handler_func*)&int_ct16b1,
    (int_handler_func*)&int_ct32b0,
    (int_handler_func*)&int_ct32b1,
    (int_handler_func*)&int_ssp0,
    (int_handler_func*)&int_usart,
    (int_handler_func*)&int_usb_irq,
    (int_handler_func*)&int_usb_fiq,
    (int_handler_func*)&int_adc,
    (int_handler_func*)&int_wwdt,
    (int_handler_func*)&int_bod,
    (int_handler_func*)&int_flash,
    0,
    0,
    (int_handler_func*)&int_usb_wakeup,
    (int_handler_func*)&int_ioh
};

