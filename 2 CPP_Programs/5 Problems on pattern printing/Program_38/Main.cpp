/*
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
*/

using namespace std;
#include<iostream>

void Display(char arr[])
{
	int iCnt = 0;
	int i = 0;
	while(arr[i] != '\0')
	{
		iCnt++;
		i++;
	}
	cout<<iCnt<<"\n";
	for(int i=0;i<iCnt;i++)
	{
		for(int j=0;j<iCnt;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	char str[20] = {'\0'};
	cout<<"Enter string\n";
	cin>>str;
	
	Display(str);
	
	return 0;
}