/*WAP to input 5 dtring and print no of vowel and  which one is vowel
Date:23/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[5][10];
	int i,j,l=0;
	clrscr();
	// Logic: To input 5 string
	for(i=0;i<5;i++)
	{
		printf("\n Enter name %d:",i+1);
		flushall();
		gets(s[i]);
	}
	// Logic: To print 5 string
	clrscr();
	printf("\n PRINT 5 STRING");
	printf("\n----------------------------\n");
	for(i=0;i<5;i++)
		printf("NAME %d:%s\n",i+1,s[i]);
	printf("\n-----------------------------\n");
	// Logic: To check how many vowel are their in string array and which one
	printf("\n VOWEL\n");
	printf("\n==================\n");
	for(i=0;i<5;i++)
	{
		l=0;
		for(j=0;j<9;j++)
		{
			if(s[i][j]=='A'|| s[i][j]=='a'||s[i][j]=='E'||s[i][j]=='e'||s[i][j]=='I'||s[i][j]=='i'||s[i][j]=='O'||s[i][j]=='o'||s[i][j]=='U'||s[i][j]=='u')
			{
				l=l+1;
				printf(" %s: %c: %d ",s[i],s[i][j],l);
			}
		}
	printf("\n");

	}
	getch();
}