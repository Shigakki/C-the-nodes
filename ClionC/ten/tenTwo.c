//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "";
    char str2[100] = "";

    printf("sizeof str1 %llu\n",sizeof (str1));

    if (str1[0] == '\0' ){
        printf("str1 is %s\n",str1);
    }
    if (str2[0] == '\0'){
        printf("str2 is %s\n",str2);
    }
    if (str2[0] == 0){
        printf("str2 is %s\n",str2);
    }

    return 0;
}