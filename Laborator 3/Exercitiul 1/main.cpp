#include <iostream>
#include <stdio.h>
#include "Math.h"

int main()
{

	printf("%i\n", Math::Add(4, 7));
	printf("%i\n", Math::Add(4, 5, 6));
	printf("%i\n", Math::Add(1.5, 1.5));
	printf("%i\n", Math::Add(1.5, 1.5, 1.5));
	printf("%i\n", Math::Mul(4, 7));
	printf("%i\n", Math::Mul(4, 5, 6));
	printf("%i\n", Math::Mul(1.5, 1.5));
	printf("%i\n", Math::Mul(1.5, 1.5, 1.5));
	printf("%i\n", Math::Add(4, 45, 67, 89, 66));
	char* result = Math::Add("Mihai", "Marius");
	printf("%s", result);
	free(result);
	return 0;
}