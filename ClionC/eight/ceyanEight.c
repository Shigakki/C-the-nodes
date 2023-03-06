//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

int main(){
    int m[][3] = {1,4,7,2,5,8,3,6,9,};
    int i,j,k=2;
    for ( i=0; i<3; i++ ) {
        printf("%d", m[k][i]);
    }

    printf("\nThe size of the array is: %llu \n", sizeof (int));


    printf("The size of the array is: %llu \n", sizeof (m));

    int n[][3] = {1,4,7,2,5,8,3,6,9,10,};
    printf("The size of the array is: %llu \n", sizeof (n));
}