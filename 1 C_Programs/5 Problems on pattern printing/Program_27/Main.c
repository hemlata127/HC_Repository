/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4 
Output :
 1 2 3 4
 1 * * 4
 1 * * 4
 1 2 3 4 
*/

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	//updater for negative row and column
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
			if((i==1) || (i==iRow) || (j==1) || (j==iCol))
			{
				printf("%d ",j);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
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