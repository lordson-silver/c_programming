#include <stdio.h>

double getAverage(int arr[], int size);

/**
 * main - C main function
 * @score: integer array _ initialized by a for loop with values >= 60
 * @avg: floating point var
 * @i: integer var
 *
 * return: always 0
 */


int main (void)
{
	int score[5]; /* = {70, 75, 63, 88, 101}; */
	double avg;
	int i;

	for (i = 0; i < 5; i++)
	{
		score[i] = 60 + (i*5);
	}

	avg = getAverage(score, 5);

	printf("Average value is: %f\n", avg);

	return (0);
}

/**
 * getAverage - function that gets the average of an array
 * @arr: integer array prop
 * @size: integer var prop
 * @i: integer var
 * @avg: floating point var
 * @sum: floatint point var container, initially set to 0
 *
 * return: avg.
 */
double getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	avg = sum / size;

	return avg;
}
