#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j <= i; j++)
       {
            printf("*");
       }
        printf("\n");
    }
    
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < rows - i; j++)
       {
            printf("*");
       }
        printf("\n");
    }
    
}

int main()
{
    int rows, type;
    printf("Choose for pattern type:\n 1. Triangular star pattern\n 2. Reverse Triangular star pttern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 1:
        printf("Triangular star pattern\n");
        starPattern(rows);   
        break;

    case 2:
       reverseStarPattern(rows);
        break;
    
    default:
         printf("Its default\n");
        break;
    }
    return 0;
}