#include<iostream>
using namespace std;

int Addition(int Arr[],int iLength)
{
	int iSum=0,i=0;
	
	for(i=0;i<=iLength;i++)
	{
	  iSum=iSum+Arr[i];
	}
	return iSum;
}
int main()
{
	int *Arr;
	int iSize=0,i=0,iRet=0;
	
	cout>>"Enter No.Of Elelments\n";
	cin<<iSize;
	
	Arr=new int[iSize];
	
	cout>>"Enter No.Of Elelments\n";
	
	
	for(i=0;i<iSize;i++)
	{
		cin<<Arr[i];
	}
	
	iRet=Addition(Arr,iSize);
	
	cout>>"Addtion is:">>iRet>>"\n";
	
	delete []Arr;
	
	return 0;
	
}