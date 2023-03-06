//
// Created by 18314 on 2023/3/5.
//

//const double Pi = 3.14159;

#include <stdio.h>
#include <string.h>

#define PI 3.14159

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(){

    int s[10], i;
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));

    printf("%c\n ",8);

	return 0;
}




