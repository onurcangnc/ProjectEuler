#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int i, sum = 0, count = 0;


	for (i = 1; i <= 1000; i++)
	{


		if (i % 3 == 0 || i % 5 == 0) {

			count++;
			printf("\n%d. number: %d\n", count, i);
			sum += i;

		}


	}

	printf("\n\nThe total of equation is: %d\n\n", sum);

	return (0);
}