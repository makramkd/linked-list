TARGET    = linked-list
MAIN_SRCS = $(wildcard src/*.c) $(wildcard src/*/*.c)
MAIN_OBJS = $(MAIN_SRCS:.c=.o)

CC		  = gcc
CFLAGS    = -I. -Iinclude
DEBUG_FLAGS = -I. -Iinclude -g
LDFLAGS   =

all: $(MAIN_OBJS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(MAIN_OBJS) $(LDFLAGS)

debug: $(MAIN_OBJS)
	@$(CC) $(DEBUG_FLAGS) -o $(TARGET) $(MAIN_OBJS) $(LDFLAGS)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f src/*.o $(TARGET)
