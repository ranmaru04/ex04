#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i;
    int count1=0,count2=0;
    double num;
    srand(time(NULL));
    printf("Tossing a coin\n");
    for(i=1;i<4;i++){
        //char t[6];
        num=(double)rand()/RAND_MAX;
        char* t;
        if(num>0.5){
             t = "Tails"; 
             count1++;
        }
        else{
             t = "Heads";
             count2++;    
        }
        printf("Round %d:%s\n",i,t);
    }
    printf("Heads: %d, Tails:%d\n",count2,count1);
    if(count2>count1)printf("You won\n");
    else printf("You lost\n");
    return 0;
}