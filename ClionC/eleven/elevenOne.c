//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int main(){

    struct date today = {2023, 12, 23};
    struct date yesterday;
    struct date*  day = NULL;
    int* a = NULL;

    day = &today;
    printf("%d\n", (*day).year);
    printf("%d\n", day->year);

    /**
     * C语言中 %d 与 %i 的区别 和注意事项
     * 在 printf 格式串中使用时， 没有区别
     * 在 scanf 格式串中使用时， 有点区别，
     * 如下： ——在scanf格式中，%d 只与十进制形式的 整数 相匹配。
     * ——而%i 则可以匹配八进制、十进制、十六进制表示的 整数 。
     * */
    printf("today is %d-%d-%d\n",
           today.year,today.month,today.day);
    yesterday = today;
    printf("yesterday is %d-%d-%d\n",
           yesterday.year, yesterday.month, yesterday.day);
    return 0;
}