#include <stdio.h>
int recur(int a);
int recur(int a)
{
	if (a > 10)
		return a;
	recur(a + 1);
}
void main (void)
{
	int b = ;
	int c = recur(b);
	printf("%d\n", c);
}
