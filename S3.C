/* write a program to create to three by three matrix and it is a daigonal matrix.
date:18-02-2022*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,d;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j;a[i][j]!=0)
			d=1;
			break;
		}
	}
	if(d=1)
	{
		printf("\n it is a diagonal matrix.");
	}
	else
	{
		printf("\n it is not a diagonal matrix.");
	}
	getch();
}