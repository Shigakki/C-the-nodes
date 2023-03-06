//
// Created by 18314 on 2023/3/2.
//
#include <stdio.h>
/**
 * 返回值为
 * -1：平局
 * 1：1赢
 * 0：0赢
 * */
int tic_tac_toe(int a[][3], int size){
    int numOf0 = 0, numOf1 = 0;
    // hang
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size ; j++){
            if (a[i][j] == 0){
                numOf0++;
            } else if (a[j][i] == 1) {
                numOf1++;
            }
        }
        if(numOf0 == size){
            return 0;
        } else if (numOf1 == size){
            return 1;
        }
        numOf0 = numOf1 = 0;
    }

    for(int i = 0; i < size; i++){
        for (int j = 0; j < size ; j++){
            if (a[j][i] == 0){
                numOf0++;
            } else if (a[j][i] == 1){
                numOf1++;
            }
        }
        if(numOf0 == size){
            return 0;
        } else if (numOf1 == size){
            return 1;
        }
        numOf0 = numOf1 = 0;
    }

    for(int i = 0; i < size; i++){
        if (a[i][i] == 0){
            numOf0++;
        } else if (a[i][i] == 1) {
            numOf1++;
        }
        if(numOf0 == size){
            return 0;
        } else if (numOf1 == size){
            return 1;
        }
    }
    for(int i = 0; i < size; i++){
        if (a[i][size-1-i] == 0){
            numOf0++;
        } else if (a[i][size-1-i] == 1){
            numOf1++;
        }
        if(numOf0 == size){
            return 0;
        } else if (numOf1 == size){
            return 1;
        }
    }
    return -1;
}


int main(){
    const int size = 3;
    int board[size][size];
    for (int i = 0; i < size; i++){
        for (int j =0; j < size; j++){
            scanf("%d",&board[i][j]);
        }
    }

    int result = tic_tac_toe(board, size);


    if (result == 0){
        printf("\n0 wins.\n");
    } else if (result == 1){
        printf("1 wins.\n");
    } else if (result == -1){
        printf("no one wins.\n");
    }

}