#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    char numbers[5];
    char buffer[256];
    int i = 0;
    srand(time(NULL));

    while(i<4){ // ループ！
        numbers[i] = rand()%10 + '0';
        i = i+1;
    }
    numbers[4]='\0'; //文字列おしまいマーク

    printf("ランダムな4桁の数字！%s\n", numbers);
    
    printf("同じ数字を入力してみよう\n");
    fgets(buffer,256,stdin);
    printf("%s\n", buffer);

    i=0;
    while(i<4){ // 全部の数字チェック！
        if(buffer[i] == numbers[i]){
            printf("%d番目の数字が一緒です！\n",i);
        }
        else{
            printf("%d番目の数字が違います！\n",i);
        }
        i = i+1;
    }
} 