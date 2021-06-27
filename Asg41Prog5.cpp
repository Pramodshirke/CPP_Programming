#include<iostream>
using namespace std;
template <class T>
T Min(T *arr,int Size)
{
	T min=arr[0];
	
	for(int i=0;i<Size;i++)
	{
		if(arr[i] < min)
		{
			min=arr[i];
		}
	}
	return min;
}
int main()
{
	int Arr[]={10,20,5,40,50};
	float Brr[]={10.0,20.3,30.4,40.5,50.0};
	
	int iRet=Min(Arr,5);
	
	printf("%d\n",iRet);
	
	float fRet=Min(Brr,5);

	printf("%f\n",fRet);

	return 0;
}