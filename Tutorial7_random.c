#include <stdio.h> //入力・出力に関する機能が入ったファイル
#include <stdlib.h> // いろんな機能が入ったファイル　ランダム機能も含まれる
#include <time.h> // 時間の機能が入ったファイル

void main(){
    //rand():ランダムに数字を生成する
    printf("%d\n",rand()); 
    printf("%d\n",rand()); 
    printf("%d\n",rand());
    printf("↑は何回起動しても同じになるはず\n");
    // 起動するたびに違う値を出すには、シード値を設定する
    srand(time(NULL)); // srand():rand()で使うシードの設定　time(NULL):現在時刻(正確には1970年1月1日から何秒経過したか)
    printf("%d\n",rand()); 
    printf("%d\n",rand()); 
    printf("%d\n",rand());
    printf("↑は起動するたび違う値なはず\n");

    // 0から9までの数字が欲しいときは　あまりを使う
    printf("%d\n", rand()%10);
    printf("%d\n", rand()%10);
    printf("%d\n", rand()%10);
    printf("↑は0から9までになるはず\n");    
}