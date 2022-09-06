#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    //Input value of martix 1
    printf("Enter the your first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The element of matrix 1 of row %d & column %d\n", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("Enter the your second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("The element of matrix 1 of row %d & column %d\n", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //Calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }

    //Print resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}

// {
//     int *ptr = (int *) malloc(7* sizeof(int));
//     ptr[0] = 34;
//     ptr[1] = 54;
//     ptr[2] = 34;
//     ptr[3] = 25;
//     return 0;
// }  

// int* functionDangling()
// {
//     int a, b, sum;
//     a =34;
//     b = 364;
//     sum = a + b;
//     return ∑
// }

// int * danPtr = functionDangling();
// int * dangPtr3;
// {
//     int a= 15;
//     dangPtr3 = &a;
// }






// printf("Enter the number of rows of matrix 1\n");
//     scanf("&%d", &a);
//     printf("Enter the number of columns of matrix 1\n");
//     scanf("&%d", &b);
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             scanf("%d\n", &arr1[i][j]);
//         }
        
//     }
//     for (int m = 0; m < a*b; m++)
//     {
//             printf("The element of matrix 1 of row %d & column %d is %d\n", i, j, arr1[i][j]);
//     }
    

//     //Input value of matrix 2
//     printf("Enter the number of rows of matrix 2\n");
//     scanf("&%d", &p);
//     printf("Enter the number of columns of matrix 2\n");
//     scanf("&%d", &q);


//     if (arr1[j] == aar2[i])
//     {
//         return 
//     }