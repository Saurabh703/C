// #include <stdio.h>
// #include <time.h>
// int generateRandomNumber(int n)
// {
// 	srand(time(NULL));
// 	return rand()% n;
// } 

// int compare(char num1, char num2){
// 	if (num1 == num2)
// 	{
// 		return -1;
// 	}
// 	else if (num1 == 'a' & num2 == 'b')
// 	{
// 		return 1;
// 	}
// 	else if (num1 == 'b' & num2 == 'a')
// 	{
// 		return 0;
// 	}else if (num1 == 'b' & num2 == 'c')
// 	{
// 		return 1;
// 	}else if (num1 == 'c' & num2 == 'b')
// 	{
// 		return 0;
// 	}else if (num1 == 'c' & num2 == 'a')
// 	{
// 		return 1;
// 	}else if (num1 == 'a' & num2 == 'c')
// 	{
// 		return 0;
// 	}
	
// }

// int main(){
// 	int temp, x, comp;
// 	int playSco = 0;
// 	int compSco = 0;
// 	char num;
// 	char arraynum[] = {'a', 'b', 'c'};
// 	printf(" a. Rock\n b. Scissors\n c. Paper\n");
// 	printf("Player 1 is You.\nChoose any one of three:\n ");
// 	scanf("%c", &num);
// 	getchar();
// 	temp = arraynum[num - 1];

// 	printf("Player 2 is computer & it chooses:\n");
// 	num = generateRandomNumber(3) + 1;
// 	comp = arraynum[num - 1];
// 	printf("%c\n", comp);

// 	//compare the score
	

// 	return 0;
// }
#include<stdio.h>
 #include<string.h>
  int main()
 {
     char str1[20] = "Hello", str2[20] = "World";
     printf("%s", strcpy(str2, strcat(str1, str2)));
     return 0;
 }