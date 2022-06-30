#include <stdio.h> // stdio.hというファイルを読み込む　このファイルはどっかにあるが勝手に探してくれる
#define MAXNUM 10 // MAXNUMを10で置き換える

void main(){ // この中の処理が自動実行される
    printf("Hello, World\n");  // printf(文字列を表示する機能)の起動　printfはstdio.hに書いてある
    printf("I am "); //改行されない 
    printf("John"); 
    printf("\n"); // \nは改行
    printf("Hello!\n");

    printf("数字%dも出せるよ\n",120); //printfの機能：文字列の一部を置き換える　%dが120で置き換えられる
    printf("MAXNUM is %d", MAXNUM); //MAXNUMは10として扱われる
}