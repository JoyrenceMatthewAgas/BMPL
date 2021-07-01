#include <stdlib.h>

void *get_memory(size_t size) {
    return malloc(size);
}

void free_memory(void *ptr) {
    return (free(ptr));
}
