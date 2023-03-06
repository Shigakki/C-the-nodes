//
// Created by 18314 on 2023/2/26.
//
#include <stdio.h>
int main(){
//    int i;	scanf("%d", &i);	i %= 4;
//    printf("%d",i);
//    printf("%f\n",(double)(10/4*4));
//
//    int i,x,y;
//    i=x=y=0;
//    do {
//        ++i;
//        if ( i%2 )
//            x+=i,
//                    i++;
//        y +=i++;
//    } while ( i<=7 );
//    printf("%d %d %d", i, x, y);

//    int x;
//    scanf("%d",&x);
//    int y;
//    scanf("%d",&y);
//
//    int a = (x&&1) ;
//    int b = (x==1);
//    int c = (y||0);
//
//    printf("y is %d\n",c);
//
//    printf("x is %d, the latter is %d, the last is %d.",x,a,b);




    int x=0, y=0, z=0;
    // 这里是短路了！
    z = (x==1) && (y=2);
    printf("%d \n", y);

    return 0;
}