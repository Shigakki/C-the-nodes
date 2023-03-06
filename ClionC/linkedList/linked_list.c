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
    //  �����������
    do {
        scanf("%d", &number);
        if (number != -1){
            add(&list,number);
        }
    } while (number != -1);

    // �����������
    printLinkedList(&list);

    printf("Please enter the number you wanna find:\n");
    int target;
    scanf("%d",&target);
    // �������ݵĶ�Ӧ��ɾ��
    // ���Ƚ������������
    searchLinkedList(&list, target);

    // ����ɾ����һ������Ҫ�ķ�ʽ�ǵ���ǰ��ĵ�Ԫ
    deleteOne (&list, target);
    printLinkedList(&list);

    // ������������
    freeAll(&list);
    return 0;
}

void add(List* pList, int number){
    // add to the linked-list
    Node* p = (Node*) malloc(sizeof (Node));
    p->value = number;
    p->next = NULL;
    // ��ΪҪƴ�������������ҵ���ĩ�˵���һ��
    // Ȼ���ٽ���ȥ
    Node* last = pList->head;
    if (last){
        while (last->next){
            last = last->next;
        }
        // ƴ����ȥ
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
        printf("��������û���ҵ���Ҫ�ҵĶ�����\n");
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
                // �����������û�м��q�Ƿ�Ϊ�յ���䣬��Ϊp�Ѿ���forѭ����������֤������NULL��
                // ʱ�����м���
                q->next = p->next;
            } else {
                pList->head = p->next;
            }
            free(p);
            printf("%d ������Ѿ�ɾ������ \n",target);
            break;
        }
    }
    if(!isFound){
        printf("��������û���ҵ���Ҫ�ҵĶ�����\n");
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