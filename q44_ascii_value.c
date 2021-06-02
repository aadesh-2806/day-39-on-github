#include<stdio.h>

void main()
{	
	int i;
	
	i=1;
	while(i<=255)
	{
		printf("%d=%c ",i,i);
		i++;
	}
	getch();
}
