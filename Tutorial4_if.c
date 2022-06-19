#include <stdio.h>

void main(){
    int i=4;

    if(i>0){ // iが0より大きければ
        printf("iは0より大きい！\n");
    }

    printf("iは0より小さいですか\n");
    if(i<0){ // iが0より小さければ
        printf("その通り！\n");
    }
    else{ //そうでなければ
        printf("そんなことない！\n");
    }

    if(i>5){
        printf("iは5より大きい\n");
    }
    else if(i>0){ // else if　でつなげることもできる
        printf("iは0より大きい\n");
    }
    else{
        printf("iは0より小さい\n");
    }
}