#include <mimalloc.h>

void* __libc_malloc(size_t sz) {
    return mi_malloc(sz);
}

void* __libc_calloc(size_t n, size_t sz) {
    return mi_calloc(n, sz);
}

void* __libc_realloc(void* p, size_t sz) {
    return mi_realloc(p, sz);
}

void __libc_free(void *p) {
    mi_free(p);
}
