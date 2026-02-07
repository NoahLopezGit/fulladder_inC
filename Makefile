CC := gcc
CFLAGS := -Wall -Wextra -std=c11

TARGETS := full_adder full_adder2

.PHONY: all clean

all: $(TARGETS)

full_adder: full_adder.c
	$(CC) $(CFLAGS) -o $@ $<

full_adder2: full_adder2.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)
