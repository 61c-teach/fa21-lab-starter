CC=gcc
CFLAGS= -std=gnu99 -c -fopenmp
LDFLAGS=-fopenmp
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLES=hello v_add dotp

.PHONY: all clean

all: $(EXECUTABLES)

hello: hello.o
dotp: dotp.o omp_apps.o
v_add: v_add.o omp_apps.o

$(EXECUTABLES):
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES) *.o
