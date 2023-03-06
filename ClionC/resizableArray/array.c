//
// Created by 18314 on 2023/3/5.
//
#include <stdio.h>
#include <stdlib.h>j
#include "array.h"

const int BLOCK_SIZE = 2;

//typedef struct {
//    int* array;
//    int size;
//} Array;

Array array_create(int init_size){
    Array a;
    a.size = init_size;
    a.array = (int*) malloc(sizeof(int)*a.size);
    return a;
}

// 针对create这个有很多的说法也是说返回指针
// 但是 a==NULL 或者 a以前也指向别的数组，这都会很不方便
Array* array_create_pointer(Array* a, int init_size){
    a->size = init_size;
    a->array = (int*) malloc(sizeof(int)*a->size);
    return a;
}

void array_free(Array* a){
    free(a->array);
    a->size = 0;
    // 因为free 0 和 free null 是无害的
    a->array =0;
}
// 封装，因为后来可能不能直接访问a.size
int array_size(const Array* a){
    return a->size;
}
int* array_at(Array* a,int index){
    // 增长函数放在添加里面
    if (index >= a->size){
        // 意思就是不是简单的加一个BLOCK_SIZE，而是让他增长至BLOCK_SIZE的倍数
        array_inflate(a, (index/BLOCK_SIZE +1 )*BLOCK_SIZE - a->size);

    }
    return &(a->array[index]);
}

int array_get(const Array* a, int index){
    return a->array[index];
}

int array_set(Array* a, int index, int value){
    a->array[index] = value;
}

void array_inflate(Array* a, int more_size){
    int* p = (int*) malloc (sizeof(int) * (a->size + more_size) );
    int i;
    for (i = 0; i < a->size; i++){
        p[i] = a->array[i];
    }
    for (i = a->size; i < a->size+more_size; i++){
        p[i] = 0;
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

void printfArray (Array* a){
    printf(" 开始输出数组内容。\n");
    for(int i = 0; i < a->size; i++){
        printf("%d ",a->array[i]);
    }
    printf("\n数组内容输出完毕。\n");
}

int main(){
    Array a = array_create(2);
//    printf("%d\n", array_size(&a));
//    *array_at(&a, 0) = 10;
//    printf("%d\n",*array_at(&a,0));

    int number = 0;
    int cnt = 0;

    while (number != -1){
        printf("\n请输入要添加的数字:");
        scanf("%d",&number);
        if (number != -1){
            *array_at(&a,cnt++) = number;
        }
        printf("当前%d轮次， 数组的size是%d\n",cnt,array_size(&a));
        printfArray(&a);
    }

    array_free(&a);
    return 0;
}






