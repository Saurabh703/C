// #include <stdio.h>

// void changeValue(int* address)
// {  
//     *address = 345;
// }

// int main()
// {
//     int a = 34, b = 56;
//     printf("The value of a now is %d\n", a);
//     changeValue(&a);
//     printf("The value of a now is %d\n", a);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, *arr, i, revs;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    for (int i = 0; i <= num/2; i++) {
        revs = arr[num-i-1];
        arr[num - i-1] = arr[i];
        arr[i] = revs;
    }
    printf("%d", num);/* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}


/*#include <stdio.h>
int main()
{
    int str
    return 0;
}*/