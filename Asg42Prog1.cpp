#include<iostream>
using namespace std;
template <class T>
T Display(T value,int Size)
{
	for(int i=1;i<=Size;i++)
	{
		cout<<value<<"\t";
	}
	cout<<"\n";
}
int main()
{
	Display('M',7);
	
	Display(11,3);
	
	Display(3.7,6);

	return 0;
}