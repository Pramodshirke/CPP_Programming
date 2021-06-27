#include<iostream>
using namespace std;
template <class T>
T Frequency(T *arr,int Size,T No)
{
	int iCnt=0;
	for(int i=0;i<=Size;i++)
	{
		if(arr[i] == No)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int Arr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=Frequency(Arr,9,10);
	
	printf("%d\n",iRet);

	return 0;
}