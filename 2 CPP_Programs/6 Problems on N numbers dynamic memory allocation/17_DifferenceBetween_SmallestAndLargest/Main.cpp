/*
"Accept N numbers from user and return the difference between largest and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3) "
*/

using namespace std;
#include<iostream>

int FindDiff(int brr[],int iSize)
{
	int iMin = brr[0];
	int iMax = brr[0];
	for(int i = 1;i<iSize;i++)
	{
		if(brr[i] < iMin)
		{
			iMin = brr[i];
		}
		if(brr[i] > iMax)
		{
			iMax = brr[i];
		}
	}
	return (iMax - iMin);
}

int main()
{
	int iSize = 0;
	int *arr = NULL;
	int iResult = 0;
	
	//Accept number of elements
	cout<<"Enter number of elements:\n";
	cin>>iSize;
	
	//Allocate memory
	arr = new int[iSize];
	
	//Check for failure in memory allocation
	if(arr == NULL)
	{
		cout<<"Memory allocation failed\n";
		return -1;
	}
		
	//Accept elements
	cout<<"Enter elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>arr[i];
	}
	
	//Display the accepted elements
	cout<<"Accepted elements:\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
		
	iResult = FindDiff(arr,iSize);
	cout<<iResult<<"\n";
	
	delete arr;
	
	return 0;
}