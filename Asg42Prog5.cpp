#include<iostream>
using namespace std;
template <class T>
void Reverse(T *arr,int Size)
{
	int temp=0;
	int i=0,j=0;
	for(i=Size-1;i>0;i--,j++)
	{
		while(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
	
int main()
{
	int Arr[]={10,20,30,10,30,40,10,40,10};
	int i=0;
	
	for(i=0;i<9;i++)
	{
		cout<<Arr[i]<<"\t";
	}
	printf("\n");
	
	Reverse(Arr,9);
	
	for(i=0;i<9;i++)
	{
		cout<<Arr[i]<<"\t";
	}
	
	return 0;
}