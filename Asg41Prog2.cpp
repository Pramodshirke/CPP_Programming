#include<iostream>
using namespace std;

template <class T>

T Max(T No1,T No2,T No3)
{
	if(No1 > No2  && No1 > No3)
	{
		return No1;
	}
	else if(No2 >No1 && No2 > No2)
	{
		return No2;
	}
	else
	{
		return No3;
	}
}
int main()
{
	int iRet=Max(10,20,30);
	
	printf("%d\n",iRet);
	
	float fRet=Max(10.0f,3.0f,34.0f);

	printf("%f\n",fRet);

	return 0;
}