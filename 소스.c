#include <stdio.h>

void func1();
int func2(int str[]);


int main()
{
	func1();

	return 0;
}

void func1()
{
	int str[20];
	int i, j=0, k, l=0;

	for (i = 0; i < 100; i++)
	{
		printf("%3d   ", i+1);
		for (k = 1; k < i + 2; k++)
		{
			if ((i + 1) % k == 0)
			{
				str[l] = k;
				printf("%3d", str[l]);
				l++;
			}
		}
		 //printf("  %d", l);
		 l = 0;
		 printf("     %d   ", func2(str));
		printf("\n");
	}
	
}

int func2(int str[])
{
	int z,x=0;
	for (z = 0; z < 20; z++)
	{
		if (str[z] == NULL)
		{
			break;
		}
		x++;

	}
	return x;	
}