#include <stdio.h>

int main(void)
{
	unsigned int num;
	int fact = 1;
	printf("Enter the Number: ");
	scanf("%ud",&num);
	for(int i = 1;i<num+1;i++){
		fact *= i;
	}
	printf("Factorial: %d\n",fact);
	return 0;
}
