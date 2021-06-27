#include<iostream>
using namespace std;
//Specific Way
int Max(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
//Generic Way

template <class T>

T Max(T iNo1,T iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}

int main()
{
	float iValue1=0,iValue2=0,iRet=0;
	
	cout<<"Enter First Number\n";
	cin>>iValue1;
	
	cout<<"Enter Second Number\n";
	cin>>iValue2;
	
	iRet=Max(iValue1,iValue2); 
	
	cout<<"Maximum is:"<<iRet<<"\n";
	
	return 0;
}