#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    int numbers[4];
    char buffer[256];
    srand(time(NULL));

    numbers[0] = rand()%10;
    numbers[1] = rand()%10;
    numbers[2] = rand()%10;
    numbers[3] = rand()%10;

    printf("ランダムな4桁の数字！%d%d%d%d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("同じ数字を入力してみよう\n");
    fgets(buffer,256,stdin);
    printf("入力された数字は%sです\n", buffer);        
    
    if(buffer[0] == numbers[0]){ //　文字と数字を比較してる
        printf("最初の数字が一緒です！\n");
    }
    else{
        printf("最初の数字が違います\n"); 
    }

}    