#include<iostream>
using namespace std;
template <class T>
T SearchFirst(T *arr,int Size,T No)
{
	int i=0;
	for(i=0;i<=Size;i++)
	{
		if(arr[i] == No)
		{
			break;
		}
	}
	if(arr[i]==Size)
	{
		return -1;
	}
	else
	{
		return i+1;
	}
}
int main()
{
	int Arr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=SearchFirst(Arr,9,30);
	
	printf("%d\n",iRet);

	return 0;
}