/*
Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :
 A B C D
 a b c d
 A B C D
 a b c d 
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void DisplayPattern(int iRow, int iCol)
	{
		char ch = '\0';
		
		//Updater for negative row or column value
		if(iRow<0)
		{
			iRow = -iRow;
		}
		if(iCol<0)
		{
			iCol = -iCol;
		}
		
		for(int i=1;i<=iRow;i++)
		{
			if(i%2 != 0)
			{
				ch = 'A';
			}
			else
			{
				ch = 'a';
			}
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(ch+" ");
				ch++;
			}
			System.out.println();
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iRow = 0;
		int iCol = 0;
		
		//Accept row and column values from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter row value:");
		iRow = sobj.nextInt();
		System.out.println("Enter column value:");
		iCol = sobj.nextInt();
		
		//create object of class
		Pattern pobj = new Pattern();
		
		//call the function
		pobj.DisplayPattern(iRow,iCol);
	}
}