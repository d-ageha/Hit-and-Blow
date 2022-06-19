#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_DIGITS 4
#define BUFFER_SIZE 256

int countHit(char input[], char guess[]){
    int i;
    int hit=0;
    for(i=0;i<NUM_DIGITS;i++){
        if(input[i]==guess[i]){
            hit++;
        }
    }
    return hit;
}

int countBlow(char input[], char guess[]){
    int i;
    int j;
    int blow=0;
    for(i=0;i<NUM_DIGITS;i++){
        for(j=0;j<NUM_DIGITS;j++){
            if(input[i]==guess[j]){
                blow++;
            }
        }
    }
    return blow;
}

int Check(char input[], char guess[]){
    int H=0;    
    int B=0;
    H=countHit(input,guess);
    B=countBlow(input,guess);
    B=B-H;
    if(H==NUM_DIGITS){
        return 1;
    }
    else if(H==0 && B==0){
        printf("NO HIT!\n");
    }
    else if(H==0){
        printf("%dB\n",B);
    }
    else if(B==0){
        printf("%dH\n",H);
    }
    else{
        printf("%dH%dB\n",H,B);
    }
    return 0;
}

void main(){
    char input[NUM_DIGITS+1];
    char guess[BUFFER_SIZE];
    int i;
    int j;
    int flug=0;
    int try=0;
    printf("Generating the numbers...\n");
    srand(time(0));
    for(i=0;i<NUM_DIGITS;i++){
        while(1){
            flug=0;            
            input[i]=(rand()%10)+'0';
            for(j=0;j<i;j++){
                if(input[i]==input[j]){
                    flug=1;
                }
            }
            if(flug==0){
                break;
            }
        }
    }
    input[NUM_DIGITS+1]='\0';
    printf("THE ANSWER IS %s\n", input);

    while(1){
        try++;
        printf("Guess the numbers:");
        if(!fgets(guess,sizeof(guess),stdin))
            return; // ERROR
        guess[NUM_DIGITS]='\0';
        if(Check(input, guess)){
            break;
        }
    }
    printf("Great! The answer was :%s It took you %d tries.\n", input, try);
}
