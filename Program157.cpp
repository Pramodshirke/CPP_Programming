//Accept N Numbers From User And Perform the Addition OF N Numbers.

#include<iostream>
using namespace std;

class Array
{
	private:
	int *Arr;
	int iSize;
	
	public:
	Array(int);
	~Array();
	void Accept();
	void Display();
	int Addition();
};

Array::Array(int iNo)
{
	iSize=iNo;
	Arr=new int[iSize];
}

Array::~Array()
{
	delete []Arr;
}

void Array::Accept()
{
	cout<<"Enter the Elements\n";
	for(int i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
}

void Array::Display()
{
	cout<<"Elements of Array are\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<Arr[i]<<"\t";
	}
	cout<<"\n";
}

int Array::Addition()
{
	int iSum=0;
	for(int i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;
}

int main()
{
	int iNo=0,iRet=0;
	
	cout<<"Enter Size of Array\n";
	cin>>iNo;
	
	Array *obj=new Array(iNo); //Call to the Constructor
	
	obj->Accept();
	obj->Display();
	
	iRet = obj->Addition();
	cout<<"Addition of all elements is:"<<iRet<<"\n";
	
	delete obj; //Call to the Destructor
	return 0;
}