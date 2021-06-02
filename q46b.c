#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n)
	{
		i=1;
		while(i<=n-x)
		{
			printf(" ");
			i++;
		}
		i=i-(n-x);
		while(i<=x)
		{
			printf("*");
			i++;
		}
		printf("\n");
		x=x+1;
	}
	getch();

}
