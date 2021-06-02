#include<stdio.h>
#include<math.h>

void main()
{	
	int i,l,k,n,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			for(k=j+1;k<=n;k++)
			{
				for(l=k+1;l<=n;l++)
				{
					if(i+j+k==l)
					{
						printf("%d %d %d %d\n",i,j,k,l);
					}
				}
			}
		}
	}
	getch();
}
