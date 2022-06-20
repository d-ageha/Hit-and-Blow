#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    char numbers[5]; //bufferと同じ形にする
    char buffer[256];
    srand(time(NULL));

    numbers[0]=rand()%10 + '0'; // +'0'で文字に変換できる！
    numbers[1]=rand()%10 + '0';
    numbers[2]=rand()%10 + '0';
    numbers[3]=rand()%10 + '0';
    numbers[4]='\0'; //文字列おしまいマーク　これが無いとprintfの%sがバグる

    printf("ランダムな4桁の数字！%s\n", numbers);
    
    printf("同じ数字を入力してみよう\n");
    fgets(buffer,256,stdin);
    printf("%s\n", buffer);

    if(buffer[0] == numbers[0]){
        printf("最初の数字が一緒です！\n");
    }
    else{
        printf("最初の数字が違います\n");
    }
    
}    