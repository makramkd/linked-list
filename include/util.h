#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>
#include <stdio.h>

void *mymalloc(size_t size) {
  void *ptr = malloc(size);
  if (!ptr) {
    fprintf(stderr, "not enough memory\n");
    exit(1);
  }
  return ptr;
}

#endif
