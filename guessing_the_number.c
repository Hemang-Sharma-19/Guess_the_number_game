#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){


int guess,random;
int no_of_attempts = 0;
srand(time(NULL));

printf("welcome to the guessing world\n");
random = rand() % 100 + 1;

do{


    printf("guess any number between 0 to 100\n");
    scanf("%d",&guess);
    no_of_attempts++;

        if(guess<random){
            printf("wrong guess,choose bigger number. \n");
        }
            else if( guess>random){
                printf("wrong guess,choose smaller number. \n");
            }
                else{
                    printf("Correct guess , guessed the correct number in %d attempts\n", no_of_attempts);
                }


            }
while(guess!=random);

printf("thanks for playing\n");
printf("code with hemang");

return 0;
}