#include <stdio.h>

void print1(){ // 関数printを定義
    printf("print1の中です！\n");
}

void print2(int a){ // 数字を受け取って変数aに代入する
    printf("print2の中です！aは%dです！\n",a);
}

int add(int a, int b){// 計算結果を返すことも可能
    return a+b; 
}

void main(){// mainも関数
    print1();
    print2(124);
    printf("add(1,3)=%d\n", add(1,3));
}