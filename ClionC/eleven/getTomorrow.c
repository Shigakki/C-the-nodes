//
// Created by 18314 on 2023/3/3.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct date{
    int year;
    int month;
    int day;
};


bool isLeap(struct date date){
    int year = date.year;
    if (year % 400 == 0){
        printf("喜！%i 是闰年！\n",year);
        return true;
    } else if (year % 4 == 0 && year % 100 !=0){
        printf("喜！%i 是闰年！\n",year);
        return true;
    } else{
        printf("悲！ %i 不是闰年！\n",year);
        return false;
    }
}

int theLastDay(struct date date){
    int daysOfMonth;
    const int days[] = {0, 31, 28, 31, 30,
                               31, 30, 31, 31,
                               30, 31,30,31};
    if ( date.month == 2 && isLeap(date) ){
        daysOfMonth = 29;
    } else {
        daysOfMonth = days[date.month];
    }
    return daysOfMonth;
}

struct date getTomorrow(struct date date){
    int days = theLastDay(date);

    if (date.day == days){
        date.day = 1;
        if (date.month == 12){
            date.month = 1;
            date.year++;
        } else {
            date.month++;
        }
    } else {
        date.day++;
    }
    return date;
}

int main(){

    struct date date1 = {2023,2,28};
    struct date date2 = {2024,12,31};

    printf("%i\n", theLastDay(date1));
    printf("%i\n", theLastDay(date2));

    printf("today is %d-%d-%d\n",
           date1.year,date1.month,date1.day);
    printf("today is %d-%d-%d\n",
           date2.year,date2.month,date2.day);

    date1 = getTomorrow(date1);
    date2 = getTomorrow(date2);
    printf("today is %d-%d-%d\n",
           date1.year,date1.month,date1.day);
    printf("today is %d-%d-%d\n",
           date2.year,date2.month,date2.day);

    return 0;
}