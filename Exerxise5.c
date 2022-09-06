#include <stdio.h>
#include <string.h>

void arrayRev(int arr[])
{
  int revs;
  for (int i = 0; i <= 6/2; i++)
  {
    //swap item arr[i] with arr[6-i]
      revs = arr[i];
      arr[i] = arr[6-i];
      arr[6-i] = revs;
  }
}

void arrayPri(int arr[])
{
  for (int i = 0; i <= 6; i++)
  {
      printf("Value of Elem %d is %d\n", i, arr[i]);
  }
}
int main()
{
    int s2[] = {1,2,3,4,5,6,78};
    // printf("The length of s2 is %d\n", strcat(s1, s2));
    printf("Before reversing the array\n");
    arrayPri(s2);
    arrayRev(s2);
    printf("After reversing the array\n");
    arrayPri(s2);
    return 0;
}