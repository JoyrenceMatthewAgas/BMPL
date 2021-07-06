#include <stdlib.h>

static void get_memory(size_t size) {
    malloc(size);
}

static void free_memory(void *ptr) {
    free(ptr);
}
