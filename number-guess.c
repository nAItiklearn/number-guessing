#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));  //current time for random generator
    int r;
    int x;
    int attempts=0;
    printf("welcome to number guessing game\n");
    printf(" press 0 to exit at any point\n");

    r= rand() % 10+1;
    printf("enter your guess:\n");
    while(1){
        
        scanf("%d", &x);
        if(x==0)
        {
            printf("game exited!\n");
            break;
            
        }
        if(r==x){
        printf("you guessed it damn\n");
        break;
        }
        else{
            if(r>x){
                printf("too low! guess hiigher\n");
            }
            else{
                printf("too high! guess lower\n");
            }
            attempts++;
        }
    }
    printf("you took %d attempts", attempts);
    
}