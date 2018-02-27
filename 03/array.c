#include <stdio.h>

int main(){
	int array[4] = {1,2,3,4};
	printf("%d\n", array);
	printf("%d\n", *array);
	printf("%d\n", array[1]);
	printf("%d\n", array + 1);
	printf("%d\n", *(array + 1));
}