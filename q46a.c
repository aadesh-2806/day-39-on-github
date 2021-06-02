#include<stdio.h>

int main()
{
	int i,n,x;
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n)
	{
		i=x;
		while(i>=1)
		{
			printf("*");
			i--;
		}
		printf("\n");
		x=x+1;
	}
	getch();
}
