/* write a program to create to three by three matrix and sum of matrix.
date:19-02-2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a1[3][3],a2[3][3],sum[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a1[%d][%d]:",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a2[%d][%d]:",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	printf("\n sum of two matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a1[i][j]+a2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}

