//
// Created by 18314 on 2023/3/5.
//

#ifndef CLIONC_ARRAY_H
#define CLIONC_ARRAY_H

typedef struct {
    int* array;
    int size;
} Array;

Array array_create(int init_size);
void array_free(Array* a);
int array_size(const Array* a);
int* array_at(Array* a,int index);
void array_inflate(Array* a, int more_size);

int array_get(const Array* a, int index);
int array_set(Array* a, int index, int value);
#endif //CLIONC_ARRAY_H
