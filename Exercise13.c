#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char * operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // printf("Operation is %s\n", operation);
    // printf("Num1 is %d\n", num1);
    // printf("Num2 is %d\n", num2);
    
    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    } 
      else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    } 
      else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    } 
      else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }
    
    
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// int sum(int a, int b)
// {
//     return a + b;
// }

// void greet(int (*fptr)(int, int))
// {
//     printf("Hello world \n");
//     printf("The sum is %d\n", fptr(3,8));
// }

// void greetGm(int (*fptr)(int, int))
// {
//     printf("Good Morning world \n");
//     printf("The sum is %d\n", fptr(7,4));
// }

// int main()
// {
//     int (*fPtr) (int, int);
//     fPtr = &sum;
//     greetGm(fPtr);
//     return 0;
// }