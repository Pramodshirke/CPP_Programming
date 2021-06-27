#include<iostream>
using namespace std;

void Swap(int *iNo1,int *iNo2)  //Call by address
{
	int temp;
	temp=*iNo1;
	*iNo1=*iNo2;
	*iNo2=temp;
}

int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter First Number\n";
	cin>>iValue1;
	
	cout<<"Enter Second Number\n";
	cin>>iValue2;
	
	Swap(&iValue1,&iValue2); //Swap(100,200) addresses;
	
	cout<<"After swap value1 is:"<<iValue1<<"\n";
	cout<<"After swap value2 is:"<<iValue2<<"\n";
	
	return 0;
}