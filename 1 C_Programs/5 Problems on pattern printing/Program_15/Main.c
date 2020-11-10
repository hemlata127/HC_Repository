/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output :
 A A A A A
 B B B B B
 C C C C C
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	char ch = 'A';
	
	//updater for negative row or column
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
		ch++;
	}
}

int main()
{
	int iRow = 0;
	int iCol = 0;
	
	printf("Enter number of rows:\n");
	scanf("%d",&iRow);
	
	printf("Enter number of columns:\n");
	scanf("%d",&iCol);
	
	DisplayPattern(iRow,iCol);
	
	return 0;
} 