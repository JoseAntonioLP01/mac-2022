#include <stdio.h>
#include <stdlib.h>

int j, k;
int *ptr;

int main(int argc, char const *argv[])
{
    j = 1;
    k = 2;
    ptr = &k;
    
    printf("\n");
    printf("j Value: %d Address: %p\n", j, (void *) &j);
    printf("k Value: %d Address: %p\n", k, (void *) &k);
    printf("ptr Value: %p Address: %p\n", ptr, (void *) &ptr);
    printf("The value of the integrer pointed to by ptr is: %d\n", *ptr);
    
    return 0;
}