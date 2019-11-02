#include <stdio.h>

main()
{
	float celsius, fahrenheit;
	int lower, step, upper;

	lower = 0;
	step  = 20;
	upper = 300;

	printf(" \u00b0C    \u00b0F\n");

	fahrenheit = lower;
	while (fahrenheit <= upper) {
		celsius = (5.0/9.0)*(fahrenheit-32.0);
		printf(" %3.0f %6.1f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
}
