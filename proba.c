#include <stdio.h>

int* f()
{
	return (int*)12;
}

void print(int* p_v)
{
	printf("value=%d\n", *p_v);
}

int main()
{
	print(f());
}

