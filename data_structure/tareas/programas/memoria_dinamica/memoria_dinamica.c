#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *iptr;
	iptr = (int *)malloc(sizeof(int));
	if (iptr == NULL)
	{
		return -1;
	}
	printf("%d, %p", *iptr, iptr);
	free (iptr);
}