/* write a program to create to three by three matrix and multiplication of matrix.
date:18-02-2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a1[3][3],a2[3][3],mul[3][3],i,j;
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
	printf("\n multiplication of two matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=a1[i][j]*a2[i][j]+a1[i+1][j]*a2[i][j]+a1[i+2][j]*a2[i][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}
