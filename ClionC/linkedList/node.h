//
// Created by 18314 on 2023/3/6.
//

#ifndef CLIONC_NODE_H
#define CLIONC_NODE_H
// 就是数值+指向同类型的一个指针
typedef struct _node{
    int value;
    struct _node* next;
} Node;

#endif //CLIONC_NODE_H
