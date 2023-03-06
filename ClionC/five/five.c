//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>

int jieCheng(int a){
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact *= i;
    }
    return fact;
}

void iJiaJia(){
    printf("\na: ");
    for (int i = 0; i < 10; i++){
        printf("%d ",i);
    }
    printf("\nb: ");
    for (int i = 0; i < 10; ++i){
        printf("%d ",i);
    }
    printf("\nc: ");
    for (int i = 0; i++ < 10; ){
        printf("%d ",i);
    }
    printf("\nd: ");
    for (int i = 0; ++i < 10; ){
        printf("%d ",i);
    }
    printf("\ne: ");
    for (int i = 0; i < 10; ){
        printf("%d ",i++);
    }
}

void judgeSushu(int a){
    int judge = 1;
    for(int i = 2; i< a; i++){
        if(a%i == 0){
            judge = 0;
        }
    }

    if(judge == 1){
        printf("%d是素数。",a);
    } else {
        printf("%d不是素数。",a);
    }
}

void shuchuSushu(int a){
    printf("1 is not a prime number!\n");
    int flag = 1;
    for (int i = 2; i <= a; i++){
        for(int j = 2; j < i; j++){
            if ( i%j == 0){
                flag = 0;
                break;
            }
        }
        if ( flag == 1){
            printf("%d ",i);
        } else {
            flag = 1;
        }
    }
}

void firstNsushu(int a){
    int flag = 1, count = 1;
    for (int i = 2; count <= a; i++){
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("the %dth prime number is  %d\n",count,i);
            count++;
        } else{
            flag = 1;
        }
    }
}

//使用1角2角5角凑出x元；就是10x可以由1、2、5构成的组合
void xYuan(int x){
    int one, two, five;
    int sum = x*10;
    for (five = 0; five <= sum/5; five++){
        for(two = 0; two <= sum/2; two++){
            for(one =0; one <= sum; one++){
                if(one+two*2+five*5 == sum){
                    printf("there can be %d one jiao, %d two jiao and %d five jiao consist %d yuan.\n",
                           one, two, five, x);
                }
            }
        }
    }
    printf("Is over!\n");
}
void xYuanOne(int x){
    int one, two, five;
    int sum = x*10;
    for (five = 0; five <= sum/5; five++){
        for(two = 0; two <= sum/2; two++){
            for(one =0; one <= sum; one++){
                if(one+two*2+five*5 == sum){
                    printf("there can be %d one jiao, %d two jiao and %d five jiao consist %d yuan.\n",
                           one, two, five, x);
                    goto out;
                }
            }
        }
    }
    out:
//    printf("Is over!\n");
}

int main(){
//    jieCheng
    int input;
    scanf("%d",&input);
//    int result = jieCheng(input);
//    printf("%d",result);

//      iJiaJia();

//    judgeSushu(input);

//    shuchuSushu(input);

//    firstNsushu(input);
    xYuan(input);

    xYuanOne(input);
}
