/*
"Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE"
*/

using namespace std;
#include<iostream>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckAlphabet(char ch)
{
	if(((ch>='A') && (ch<='Z')) || ((ch>='a') && (ch<='z')))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


int main()
{
	char ch = '\0';
	BOOL bResult = FALSE;
	
	cout<<"Enter character:\n";
	cin>>ch;
	
	bResult = CheckAlphabet(ch);
	if(bResult == TRUE)
	{
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"FALSE\n";
	}
	
	return 0;
}