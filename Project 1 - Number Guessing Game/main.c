#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int comp_number = rand() % 100 + 1, user_number, user_guesses = 1;
    // printf("%d\n", comp_number); // Just for Debuging
    printf("Enter The Number: ");
    scanf("%d", &user_number);
    while (user_number != comp_number){
        if (user_number > comp_number){
            /* code */
            printf("Try Again, The Number you Entered is Bigger\n");
            printf("Enter The Number: ");
            scanf("%d", &user_number);
            user_guesses++;
        }else if(user_number < comp_number){
            /* code */
            printf("Try Again, The Number you Entered is Smaller\n");
            printf("Enter The Number: ");
            scanf("%d", &user_number);
            user_guesses++;
        }else if(user_number > 100){
            /* code */
            printf("Try Again, The Number Should be not be Greater than 100\n");
            printf("Enter The Number: ");
            scanf("%d", &user_number);
            user_guesses++;
        }else if(user_number < 0){
            /* code */
            printf("Try Again, The Number Should not be Lesser than 0\n");
            printf("Enter The Number: ");
            scanf("%d", &user_number);
            user_guesses++;
        }else if (user_number == comp_number){
            /* code */
            // user_guesses++;
            break;
        }
        
        
        
    }
    printf("Congratulations, Youe have Guesses the Right Number: %d in %d Guesses", comp_number, user_guesses);

    return 0;
}