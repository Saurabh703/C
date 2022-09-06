#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, rem;
    int revs; 
    printf("Enter number of elements\n");
    scanf("%d\n", &n);
    int *ptr = (int *) malloc(n * sizeof(int));
    scanf("%d ", *(&ptr));
    
    for (int i=0; i<n/2; i++) {
        revs = ptr[i];
        ptr[i] = ptr[n-i];
        ptr[n-i] = revs;
    }
    printf("%d \n", (ptr));
    return 0;
}
