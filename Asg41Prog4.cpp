#include<iostream>
using namespace std;
template <class T>
T Max(T *arr,int Size)
{
	T max=0;
	
	for(int i=0;i<Size;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.0,20.3,30.4,40.5,50.0};
	
	int iRet=Max(Arr,5);
	
	printf("%d\n",iRet);
	
	float fRet=Max(Brr,5);

	printf("%f\n",fRet);

	return 0;
}