TOOLCHAIN?=arm-none-eabi-
CC:=$(TOOLCHAIN)gcc
LD:=$(TOOLCHAIN)gcc
ECHO:=echo
RM:=rm -f

CFLAGS:= -mcpu=cortex-m0 \
		 -mthumb \
		 -Iinc \
		 -Os \
         -I../../board_lib/inc \
         -I../../chip_11uxx_lib/inc \
         -I../../chip_11uxx_lib/inc/usbd \
		 -I/usr/include \
	     -DCORE_M0
LDFLAGS:= -L../../chip_11uxx_lib \
		  -L../../chip_11uxx_lib/libs \
          -L../../board_lib \
		  -lboard \
		  -lchip \
		  -lusbd_11uxx_lib \
		  -T lpc11u12.ld
		  --specs=nosys.specs

TARGET:=usb_cdc_uart.elf

SOURCES:=$(wildcard ./src/*.c) vectors.o init.o
OBJECTS:=$(SOURCES:%.c=%.o)

.PHONY: all clean

all: $(TARGET)

clean:
	@$(ECHO) "RM $(OBJECTS) $(TARGET)"
	@$(RM) -f $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	@$(ECHO) "LD $^"
	@$(LD) $^ $(LDFLAGS) -o $@

%.o:%.c
	@$(ECHO) "CC $^"
	@$(CC) $(CFLAGS) -c $^ -o $@

