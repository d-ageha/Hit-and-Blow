#include <stdio.h>
#include <stdlib.h> // ランダム機能
#include <time.h> // 時間の機能

void main(){        //                                　　　　　　　 0  1  2  3
    int numbers[4]; // こっちも1桁ずつにする　numbersは4つの変数の連結[ ][ ][ ][ ]
    char buffer[256];
    srand(time(NULL));

    numbers[0] = rand()%10; // 10で割ったあまりは絶対0~9になる
    numbers[1] = rand()%10;
    numbers[2] = rand()%10;
    numbers[3] = rand()%10;

    printf("ランダムな4桁の数字！%d%d%d%d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("数字を入力してもらおう！\n");
    fgets(buffer,256,stdin);
    printf("入力された数字は%sです\n", buffer);
}    