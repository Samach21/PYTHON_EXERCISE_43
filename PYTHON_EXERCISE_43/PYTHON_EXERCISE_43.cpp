#include<stdio.h>

int check_1(int, int);
int check_2(int, int);
void process(int, int ,int);

int main()
{
	int a[3], m1, m2;
	int *n[3];
	for (int i = 0; i < 3; i++)
	{
        if (scanf_s("%d", &a[i]) != 1) {
            printf("ERROR");
            return 1;
        }
		n[i] = &a[i];
	}
	m1 = check_1(*n[0], *n[1]);
	if (m1 == 1)
	{
		printf("No mathematical definition");
		return 0;
	}
	else if (m1 == 2)
	{
		printf("The 2nd number is zero and it cannot be a denorminator");
		return 0;
	}
	m2 = check_2(*n[0], *n[2]);
	if (m2 == 1)
	{
		printf("No mathematical definition");
		return 0;
	}
	else if (m2 == 2)
	{
		printf("The 3rd number is zero and it cannot be a denorminator");
		return 0;
	}
	process(*n[0], *n[1], *n[2]);
	return 0;
}

int check_1(int a, int b)
{
	if (a == 0 && b == 0)
	{
		return 1;
	}
	else if (b == 0 && a != 0)
	{
		return 2;
	}
	return 0;
}

int check_2(int a, int c)
{
	if (a == 0 && c == 0)
	{
		return 1;
	}
	else if (c == 0 && a != 0)
	{
		return 2;
	}
	return 0;
}

void process(int a, int b, int c)
{
	if (a % b == 0 && a % c == 0)
	{
		printf("a can be divided by b and c");
	}
	else
	{
		printf("a can't be divided by b and c");
	}
}