#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0, rem;
    int originalNumber = num;
    while (num != 0)
    {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }

    printf("The reversed number is %d\n", reversed);            
    
    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(){
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else{
        printf("This number is not a palindrome\n");
    }

    return 0;
}