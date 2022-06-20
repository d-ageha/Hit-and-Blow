#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    char numbers[5];
    char buffer[256];
    int i = 0;
    int j = 0;
    int hit = 0;
    int blow = 0;
    srand(time(NULL));

    for(i=0; i< 4; i++){ //別の形のループ！ i++ は i=i+1と(ほとんど)一緒
        numbers[i] = rand()%10 + '0';
    }
    numbers[4]='\0'; //文字列おしまいマーク

    printf("ランダムな4桁の数字！%s\n", numbers);
    
    printf("数字を入力してください\n");
    fgets(buffer,256,stdin);
    printf("%s\n", buffer);

    for(i=0; i<4; i++){ 
        if(buffer[i] == numbers[i]){
            printf("%d番目の数字が一緒です！\n",i);
            hit++; //Hitカウント
        }
        if(buffer[i] == numbers[0]){
            blow++;
        }
        if(buffer[i] == numbers[1]){
            blow++;
        }
        if(buffer[i] == numbers[2]){
            blow++;
        }
        if(buffer[i] == numbers[3]){
            blow++;
        }
    }

    printf("%dH%dB …かな？", hit, blow);
}    