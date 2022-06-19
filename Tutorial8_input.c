#include <stdio.h>

void main(){
    char buffer[256]; // char型の配列
    fgets(buffer,256,stdin); // bufferにstdin(入力するところ)から最大256文字読み込む
    printf("%s\n", buffer); // 文字列を表示するときは%sを使う
    printf("sizeof buffer:%d\n", sizeof(buffer)); //おまけ：sizeof演算子を使うと配列の大きさがわかる
}