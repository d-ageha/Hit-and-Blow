#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){
    int number = 1245;
    printf("4桁の数字! %d \n", number);

    printf("ランダムな数字を作るよ\n");
    srand(time(NULL)); // シードは現在時刻(1970年1月1日から何秒経過したか)に設定
    number = rand(); // ランダムな数字をnumberに代入
    printf("numberは%dです\n",number);    

    if(number > 1245){
        printf("number(%d)は1245より大きい\n", number);
    }
    else{
        printf("number(%d)は1245より小さい\n", number);
    }
}