TOOLCHAIN?=arm-none-eabi-
CC:=$(TOOLCHAIN)gcc
AR:=$(TOOLCHAIN)ar
ECHO:=echo
RM:=rm -f

CFLAGS:= -mcpu=cortex-m0 \
		 -mthumb \
         -Iinc \
		 -I../chip_11uxx_lib/inc \
	     -DCORE_M0
LDFLAGS:=

TARGET:=libboard.a

SOURCES:=$(wildcard ./src/*.c)
OBJECTS:=$(SOURCES:%.c=%.o)

.PHONY: all clean

all: $(TARGET)

clean: $(OBJECTS)
	@$(ECHO) "RM $(OBJECTS) $(TARGET)"
	@$(RM) -f $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	@$(ECHO) "AR $^"
	@$(AR) rcs $@ $^ 

%.o:%.c
	@$(ECHO) "CC $^"
	@$(CC) $(CFLAGS) -c $^ -o $@

