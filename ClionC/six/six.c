//
// Created by 18314 on 2023/2/27.
//
#include <stdio.h>

void sizeOfS(){
    printf("������:\n");
    printf("int is:%llu\n",sizeof (int));
    printf("char is:%llu\n",sizeof (char ));
    printf("short is:%llu\n",sizeof (short ));
    printf("long is:%llu\n",sizeof (long ));
    printf("long long is:%llu\n",sizeof (long long));

    printf("������:\n");
    printf("float is:%llu\n",sizeof (float ));
    printf("double is:%llu\n",sizeof (double ));
}

void floatJingdu(){
    float a,b,c;
    a = 1.234f;
    b = 1.432f;
    c = a+b;
    if (c==2.666){
        printf("equal.");
    } else {
        printf("don't equal.\n");
        printf("c=%.10f, ��%f\n",c,c);
    }
}

int main(){
//    sizeOfS();

    floatJingdu();

    return  0;
}