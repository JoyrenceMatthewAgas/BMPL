#include <stdlib.h>

static void *get_memory(size_t size) {
    return malloc(size);
}

static void free_memory(void *ptr) {
    return (free(ptr));
}
