//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>

//前n项求和
void nPlus(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    printf("%d\n",sum);
}
void nFenzhiyi(int n){
    double sum = 0;
    for (int i = 1; i<=n; i++){
        // 注意1.0，会自动改为浮点数
        sum += 1.0/i;
    }
    printf("%lf\n",sum);
}
void nFenzhiyiYoufushu(int n){
    double sum = 0;
    double sign = 1.0;
    for (int i = 1; i<=n; i++){
        // 注意1.0，会自动改为浮点数
        sum += sign/i;
        sign = -sign;
    }
    printf("%lf\n",sum);
}
int main(){

    int input;
    scanf("%d",&input);

    nPlus(input);
    nFenzhiyi(input);

    return 0;
}