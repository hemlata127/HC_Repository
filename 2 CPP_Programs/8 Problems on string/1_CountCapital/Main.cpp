/*
"Write a program which accept string from user and count number of
capital characters.
Input : “Unix Multi OS”
Output : 4"
*/

using namespace std;
#include<iostream>
#include<stdio.h>

int CountCapital(char arr[])
{
	int iCnt = 0;
	
	while(*arr != '\0')
	{
		if((*arr >= 'A') && (*arr <= 'Z'))
		{
			iCnt++;
		}
		arr++;
	}
	return iCnt;
}

int main()
{
	char str[30] = {'\0'};
	int iCnt = 0;
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	//Call to function
	iCnt = CountCapital(str);
	//Display return value
	cout<<iCnt<<"\n";
	
	return 0;
}