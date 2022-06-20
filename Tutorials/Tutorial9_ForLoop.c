#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    char numbers[5];
    char buffer[256];
    int i = 0;
    srand(time(NULL));

    for(i=0; i< 4; i++){ //別の形のループ！ i++ は i=i+1と(ほとんど)一緒
        numbers[i] = rand()%10 + '0';
    }
    numbers[4]='\0'; //文字列おしまいマーク

    printf("ランダムな4桁の数字！%s\n", numbers);
    
    printf("同じ数字を入力してみよう\n");
    fgets(buffer,256,stdin);
    printf("%s\n", buffer);

    for(i=0; i<4; i++){ // 全部の数字チェック！
        if(buffer[i] == numbers[i]){
            printf("%d番目の数字が一緒です！\n",i);
        }
        else{
            printf("%d番目の数字が違います！\n",i);
        }
    }
}    