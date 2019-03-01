#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*command[4])(int,int) = {plus,minus,multiply,divided};

int main()
{
	int a, c,op;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	if(b == '+') op = 0;
	else if(b == '-') op = 1;
	else if(b == '*') op = 2;
	else if(b == '/') op = 3;
	printf("%d %c %d = %d\n",a,b,c,command[op](a,c));
}
