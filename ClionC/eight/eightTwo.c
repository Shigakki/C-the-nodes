//
// Created by 18314 on 2023/2/28.
//
#include <stdio.h>

//void test(int a[10]){
//    int length = sizeof(a)/sizeof(a[1]);
//    printf("in the function||a's length is :%d",length);
//}

int isPrime(int x){
    int flag = 1;
    if ( x%2 == 0 || x==1 ){
        if (x==2){
            printf("%d is a prime",x);
            return 1;
        } else {
            printf("%d is not a prime",x);
            return 0;
        }
    } else {
        for (int i = 3; i < x ; i+=2){
            if (x%i == 0){
                printf("%d is not a prime",x);
                return 0;
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%d is a prime",x);
            return 1;
        }
    }
}

int isPrimePro(int x, const int knownPrime[], int numberOfKnownPrimes){
    int ret = 1;
    for (int i = 0; i < numberOfKnownPrimes; i++){
        if ( x % knownPrime[i] == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}

void primeTable(int x ){
    int maxNumber = x;
    int isPrime[maxNumber];
    int i;
    int y;
    for (i = 0; i < maxNumber; i++){
        isPrime[i] = 1;
    }
    for ( y = 2; y < maxNumber; y++){
        if (isPrime[y]){
            // 这里就是把prime（即isPrime为1就是素数的数）的倍数的isPrime置为0
            for (i = 2; i*y < maxNumber; i++){
                isPrime[i*y] = 0;
            }
        }
    }
    for (i = 2; i < maxNumber; i++){
        if(isPrime[i]){
            printf("%d\t",i);
        }
    }
    printf("\n");
}
int main(){

//    int a[10] = {0};
//    int length = sizeof(a)/sizeof(a[1]);
//    printf("outer||a's length is :%d\n",length);
//    test(a);

//    int x;
//    scanf("%d",&x);
//    isPrime(x);

//    const int number = 100;
//    int prime[number];
//    prime[0] = 2;
//    int count = 1, i = 3;
//    while (count < number){
//        if ( isPrimePro(i,prime,count) ){
//            prime[count++] = i;
//        }
//        i++;
//    }
//    for( i = 0; i < number; i++){
//        printf("%d ",prime[i]);
//        if ( (i+1) % 5 ){
//            printf("\t");
//        } else {
//            printf("\n");
//        }
//
//    }

    int x;
    scanf("%d",&x);

    primeTable(x);

    return 0;
}