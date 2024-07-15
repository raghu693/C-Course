#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    /*

    snake = 1
    gun = 0
    water = 2

    */

    srand(time(0));

    int comp_number = rand() % 2 + 1;
    printf("%d\n", comp_number);

    int player_choice, totalWin = 0, totalLose = 0, totalTie = 0;
    printf("Welcome to Snake Water Gun!!\n");
    printf("Here are some rules:-\n");
    printf("1. choose 0 for gun\n");
    printf("2. choose 1 for snake\n");
    printf("3. choose 2 for water\n");
    printf("4. Enter 6 for quit\n");

    while (1)
    {
        /* code */

        printf("Enter your Choice: ");
        scanf("%d", &player_choice);

        if (player_choice == comp_number)
        {
            /* code */
            printf("It was a Tie beacause you chose %d and computer also chose %d\n", player_choice, comp_number);
            totalTie++;
        }
        else if (player_choice == 0 && comp_number == 1)
        {
            printf("You Win, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalWin++;
        }
        else if (player_choice == 0 && comp_number == 2)
        {
            printf("You Lose, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalLose++;
        }
        else if (player_choice == 1 && comp_number == 0)
        {
            printf("You Lose, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalLose++;
        }
        else if (player_choice == 1 && comp_number == 2)
        {
            printf("You Win, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalWin++;
        }
        else if (player_choice == 2 && comp_number == 0)
        {
            printf("You Win, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalWin++;
        }
        else if (player_choice == 2 && comp_number == 1)
        {
            printf("You Lose, beacause you chose %d and computer chose %d\n", player_choice, comp_number);
            totalLose++;
        }
        else if (player_choice == 6)
        {
            break;
        }
        else
        {
            printf("Wrong Choice");
        }
        comp_number = rand() % 2 + 1;
    }

    printf("\nYou have Won %d matches\nYou have Lose %d matches\nYou have Tied %d matches\n", totalWin, totalLose, totalTie);
    printf("Thank You For playing our Game\n");

    return 0;
}