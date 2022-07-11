



// even or not using goto statement


#include <stdio.h>
void checkEvenOrNot(int num);

int main() {
	int num ;
    printf("number to check:");
    scanf("%d",num);
	checkEvenOrNot(num);
	return 0;
}


// function to check even or not
void checkEvenOrNot(int num)
{
	if (num % 2 == 0)
		// jump to even
		goto even;
	else
		// jump to odd
		goto odd;

even:
	printf("%d is even", num);
	// return if even
	return;
odd:
	printf("%d is odd", num);
}

