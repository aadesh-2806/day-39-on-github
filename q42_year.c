#include<stdio.h>
#include<math.h>

void main()
{	
	int i,l,k,n,j;
	printf("hello\nenter year=");
	scanf("%d",&n);
	
	i=n-1990;
	j=i/4;
	j=j*5;
	k=i%4;
	j=j+k;
	j=j%7;
	switch(j)
	{
		case 1:
			printf("tuesday");
			break;
		case 2:
			printf("wednesay");
			break;
		case 3:
			printf("thrusday");
			break;
		case 4:
			printf("friday");
			break;
		case 5:
			printf("saturday");
			break;
		case 6:
			printf("sunday");
			break;
		default:
			printf("monday");
	}
	
	getch();
}
