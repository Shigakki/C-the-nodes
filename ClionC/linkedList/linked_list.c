//
// Created by 18314 on 2023/3/6.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

//typedef struct _node{
//    int value;
//    struct _node* next;
//} Node;

typedef struct _list{
    Node* head;
    Node* tail;
} List;

void add(List* list, int number);
void printLinkedList(List* list);
void searchLinkedList(List* pList, int target);
void deleteOne(List* pList, int target);
void freeAll(List* pList);

int main(){
    List list;
    list.head = NULL;
    int number;
    //  链表读入数据
    do {
        scanf("%d", &number);
        if (number != -1){
            add(&list,number);
        }
    } while (number != -1);

    // 数据输出函数
    printLinkedList(&list);

    printf("Please enter the number you wanna find:\n");
    int target;
    scanf("%d",&target);
    // 进行数据的对应字删除
    // 首先进行链表的搜索
    searchLinkedList(&list, target);

    // 进行删除的一个很重要的方式是得有前面的单元
    deleteOne (&list, target);
    printLinkedList(&list);

    // 整个链表的清除
    freeAll(&list);
    return 0;
}

void add(List* pList, int number){
    // add to the linked-list
    Node* p = (Node*) malloc(sizeof (Node));
    p->value = number;
    p->next = NULL;
    // 因为要拼接起来，还得找到最末端的那一个
    // 然后再接上去
    Node* last = pList->head;
    if (last){
        while (last->next){
            last = last->next;
        }
        // 拼接上去
        last->next = p;
    } else {
        pList->head = p;
    }
}

void printLinkedList(List* list){
    Node* p;
    for(p = list->head; p; p = p->next){
        printf("%d\n",p->value);
    }
}

void searchLinkedList(List* pList, int target){
    Node* p =NULL;
    int isFound = 0;
    for (p = pList->head; p; p = p->next){
        if(p->value == target){
            printf("We find the number %d \n",target);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("悲！我们没有找到你要找的东西。\n");
    }
}

void deleteOne(List* pList, int target){
    Node* p =NULL;
    Node* q =NULL;
    int isFound = 0;
    for (p = pList->head; p; q=p, p = p->next){
        if(p->value == target){
            isFound = 1;
            if (q){
                // 在这种情况下没有检查q是否为空的语句，因为p已经由for循环的条件保证了其在NULL的
                // 时候是有检查的
                q->next = p->next;
            } else {
                pList->head = p->next;
            }
            free(p);
            printf("%d 这个数已经删除力！ \n",target);
            break;
        }
    }
    if(!isFound){
        printf("悲！我们没有找到你要找的东西。\n");
    }
}

void freeAll(List* pList){
    Node* p = pList->head;
    Node* q = NULL;
//    while (p->next != NULL){
//        q = p->next;
//        free(p);
//        p = q;
//    }
    for(p = pList->head; p; p = q){
        q = p->next;
        free(p);
    }
}