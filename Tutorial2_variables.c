#include <stdio.h>

void main(){
    int i=0; // 整数型(integer)の変数iを定義して　0を代入する
    printf("i=%d\n", i); // printfの機能：文字列の一部を変数で置き換える　int型の変数で置き換えたいなら%dと書く
    i=2; // iに2を代入
    printf("i=%d\n", i);
    printf("i+1=%d\n",i+1); // i+1は3
    printf("i=%d\n", i); //... iは2のまま。
    i=i+1; // iに1を足したものをiに代入
    printf("i=%d\n", i); // iは3になる。
    
    //計算方法
    printf("3+4=%d\n", 3+4); //足し算 3+4=7
    printf("2*3=%d\n", 2*3); //掛け算 2×3=6
    printf("6/3=%d\n", 6/3); //割り算 6÷3=2
    printf("5\%3=%d\n", 5%3); //あまり 5÷3=1...2 printfで%を表示したい場合\%と入力
}