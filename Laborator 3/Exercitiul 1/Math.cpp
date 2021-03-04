#include "Math.h"
#include <cstdarg>
#include <string.h>
#include <intrin.h>

int Math::Add(int a, int b)
{
	return (a+b);
}

int Math::Add(int a, int b, int c)
{
	return(a + b + c);
}

int Math::Add(double a, double b) 
{
	return(a + b);
}

int Math::Add(double a, double b,double c)
{
	return(a + b+c);
}

int Math::Mul(int a, int b) 
{
	return(a * b);
}

int Math::Mul(int a, int b, int c)
{
	return(a * b * c);
}

int Math::Mul(double a, double b)
{
	return(a * b);
}

int Math::Mul(double a, double b, double c)
{
	return(a * b * c);
}

int Math::Add(int count, ...)
{
	int result = 0;
	std::va_list args;
	va_start(args, count);
	for (int i = 0; i < count; ++i) {
		result += va_arg(args, int);
	}
	va_end(args);
	return result;
}

char* Math::Add(const char* s1, const char* s2)
{  
	if (s1 == nullptr || s2 == nullptr) {
		return nullptr;
	}
	const size_t len1 = strlen(s1);
	const size_t len2 = strlen(s2);
	char* result = (char*)malloc( len1 + len2 + 1); // +1 for the null-terminator
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2 + 1); // +1 to copy the null-terminator
    return result;
}

