#include <stdio.h>

#include<stdlib.h>
int main() {
    char c[20];
    printf("Who are you?\n");
    scanf("%s",c);
    printf("Hello, %s!\n",c);
    int random;
    int hcount=0;
    int tcount=0;
    printf("Tossing a coin...\n");
    for(int i=0;i<3;i++)
    {
        printf("Round %d: ",i+1);
        random=rand()%2;
        if(random==0){
        printf("Heads\n");
        hcount++;}
        else{
        printf("Tails\n");
        tcount++;}
    }
    printf("Heads: %d, Tails: %d",hcount,tcount);
    return 0;
}
