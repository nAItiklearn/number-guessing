#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));  //current time for random generator
    int r;
    int x;
    printf("welcome to number guessing game\n");
    r= rand() % 10;
    printf("computer has decided his no");
    while(1){
        printf("enter your guess dude:  ");
        scanf("%d", &x);
        if(r==x){
        printf("you guessed it damn\n");
        break;
        }
        else{
        printf("noob guess again\n");
        }

    }
    
}