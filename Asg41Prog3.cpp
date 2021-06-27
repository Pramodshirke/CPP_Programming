#include<iostream>
using namespace std;
template <class T>
T Sum(T *arr,int Size)
{
	T sum=0;
	
	for(int i=0;i<Size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int Arr[]={10,20,30,40,50};
	float Brr[]={10.0,20.3,30.4,40.5,50.0};
	
	int iRet=Sum(Arr,5);
	
	printf("%d\n",iRet);
	
	float fRet=Sum(Brr,5);

	printf("%f\n",fRet);

	return 0;
}