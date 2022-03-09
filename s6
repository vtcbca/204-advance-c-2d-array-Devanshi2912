/* Sorting The Available String
program 6 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10],temp[10];
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter string name=");
		gets(name[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	//after sorting
	for(i=0;i<5;i++)
	{
		puts(name[i]);
	}
	getch();
}
