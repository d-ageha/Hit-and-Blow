#include <stdio.h>

void main(){
    int i=0;
    int i0=0;
    int i1=1;
    int i2=2; // ...たくさん変数を作ると面倒

    int hairetsu[5]={0,1,2,3,4}; // int型の配列(変数があつまったもの)　[]の中はいくつ変数を作るか 
    hairetsu[0]=1; // hairetsuの中の0番目の変数を1にする
    for(i=0; i<5; i++){ //配列はループの中で使うと便利
        printf("%d\n",hairetsu[i]);
    }
}