/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
 * * * #
 * * # *
 * # * *
 # * * * 
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	if(iRow != iCol)
	{
		cout<<"Unequal value for row and column\n";
		return;
	}
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iCol<0)
	{
		iCol = -iCol;
	}
	
	for(int i=4;i>=1;i--)
	{
		for(int j=1;j<=iCol;j++)
		{
			if(j == i)
			{
				cout<<"# ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<"\n";
	}
}

int main()
{
	int iRow = 0, iCol = 0;
	
	cout<<"ENter row value:\n";
	cin>>iRow;
	cout<<"Enter column value:\n";
	cin>>iCol;
	
	Display(iRow,iCol);
	
	return 0;
}