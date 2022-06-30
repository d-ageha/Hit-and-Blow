#include <stdio.h>

void main(){
    int i=0;
     printf("whileループ\n");
    while(i<10){ // iが10より小さいあいだループ
        printf("%d\n",i);
        i+=1; // i=i+1と同じ
    }
    printf("forループ\n");
    for(i=0;i<10;i++){ // for(初期値;ループを続ける条件;ループごとの処理) iに0を代入;iが10より小さい間ループ;iに1を足す
        printf("%d\n", i);
    }
}