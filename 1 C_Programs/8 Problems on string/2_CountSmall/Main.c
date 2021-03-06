/*
Write a program which accept string from user and count number of
small characters.
Input : "Ubuntu Operating System"
Output : 18
*/

#include<stdio.h>

int CountSmall(char arr[])
{
	int Count = 0;
	while(*arr != '\0')
	{
		if((*arr>='a') && (*arr<='z'))
		{
			Count++;
		}
		arr++;
	}
	return Count;
}

int main()
{
	int iCnt = 0;
	char str[30] = {'\0'};
	
	//Accept string from user
	printf("Enter string:\n");
	scanf("%[^\n]s",str);
	
	iCnt = CountSmall(str);
	//Display the return value
	printf("Number of small characters: %d\n",iCnt);
	
	return 0;
}
