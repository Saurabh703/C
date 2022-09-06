#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    if ((char1 == char2))
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
       
}

int main()
{ 
    char input[] ={'r','p','s'};
    char playerChar, compChar, name[34];
    int playerScore = 0, compScore = 0, temp;
    printf("Welcome to Rock, Paper, & Scissors Game\nEnter the name of Player 1:\n");
    scanf("%s", &name);
    printf("Player 1 is %s.\n", name);
    printf("Player 2 is Computer.\n\n");

    printf("You will get 3 chance to completed the game\n");
    // scanf("%d", &n);

    for (int i = 0; i < 3; i++)
    {
        //Player's Input
        printf("Player 1's Turn: \n");
        printf("Enter your choice:\n1.Rock\n2.Paper\n3.Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = input[temp - 1];
        printf("You choose %c\n\n", playerChar);

        //Computer input
        printf("Player 2's Turn: \n");
        printf("Enter your choice:\n1.Rock\n2.Paper\n3.Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = input[temp - 1];
        printf("CPU choose %c\n", compChar);

        //Compare the score
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU Got it!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a Draw!\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!\n\n");
        }
        printf("You: %d\nCPU: %d\n", playerScore, compScore);
        
    }
    
    if (playerScore > compScore)
    {
        printf("You win the game.");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game.");
    }
    else
    {
        playerScore += 1;
    }
    
    
    
    return 0;
}




// if (n == 1 && r = 3 || n == 3 && r = 1)
        // {
        //     return printf("Rock Wins");
        // } else if (n == 2 && r == 3 || n == 3 && r == 2)
        // {
        //    return  printf("Scissor Wins");
        // } else if (n == 2 && r == 1 || n == 1 && r == 2)
        // {
        //     return printf("Paper Wins");
        // } else if (n == r)
        // {
        //     return printf("Equal")
        // }
