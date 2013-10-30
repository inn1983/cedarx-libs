
CC  = gcc
CPP = g++
AR  = ar

#DATA_SRC=file

#A10 A13 A20 A23 A31
CEDARX_CHIP_VERSION=A20

SRCDIRS     := . \
			  ./vdecoder/build 
			
ifeq ($(DATA_SRC), file)
SRCDIRS+=./file_parser
else
SRCDIRS+=./stream_parser 
endif
			  
INCLUDES := $(foreach dir,$(SRCDIRS),-I$(dir))
INCLUDES := $(INCLUDES) -I./vdecoder/build 
SRCCS    = $(foreach dir,$(SRCDIRS),$(wildcard $(dir)/*.c))
OBJ  	 := $(SRCCS:%.c=%.o)

CFLAGS = -Wall -O0 -g
ifeq ($(DATA_SRC), file)
CFLAGS += -DFILE_PARSER -D__CHIP_VERSION_$(CEDARX_CHIP_VERSION)
else
CFLAGS += -DSTREAM_PARSER -D__CHIP_VERSION_$(CEDARX_CHIP_VERSION) 
endif

CFLAGS := $(CFLAGS) $(INCLUDES) -march=armv7-a -ldl
LIBS += -lpthread ./vdecoder/libve/libvecore.so

TARGET = ve

all: $(TARGET)
CPP=gcc
$(TARGET): $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^ $(LIBS)


clean:
	@rm -f $(TARGET)
	@rm -f $(OBJ)
