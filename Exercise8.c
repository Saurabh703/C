#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    char * ptr;
    int n;
    printf("EId of 3 Employees \n");

    for (char i = 1; i < 4; i++)
     {
         printf("Employee %d:\nEnter the number of char of employee id \n", i);
         scanf("%d", &n);
         ptr = (char*) calloc(n, sizeof(char)); 
         printf("Enter the characters of EId \n");
         scanf("%d", &ptr);
         printf("The eId is of Employee %d is %d\n", i, ptr);
     }

   
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int chars, i = 0;
//     char a, b;
//     char *ptr;
//     while (i < 3)
//     {
//         printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
//         scanf("%d", &chars);
//         getchar();
//         printf("Enter the value of a\n");
//         scanf("%c", &a);
//         getchar();
//         printf("Enter the value of b\n");
//         scanf("%c", &b);
//         ptr = (char *) malloc((chars+1)*sizeof(char));
//         printf("Enter your Employee Id\n");
//         scanf("%s", ptr);
//         printf("Your Employee Id is %s\n",ptr );
//         free(ptr);
//         i = i + 1;
//     }

//     return 0;
// }