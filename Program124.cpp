#include<stdio.h>

int Addition(int Arr[],int iLength)
{
	int iSum=0;
	
	for(i=0;i<=iSize;i++)
	{
	  iSum=iSum+Arr[i];
	}
	return iSum;
}
int main()
{
	int Arr[];
	int iSize=0,i=0,iRet=0;
	printf("Enter Size\n");
	scanf("%d",&iSize);
	
	Arr=int*malloc(int * sizeof(iSize));
	
	printf("Enter Elements\n");
	
	
	for(i=0;i<=iSize;i++)
	{
		scanf("%d",Arr[i]);
	}
	
	iRet=Addition(Arr,iSize);
	
	printf("Addition is : %d",iRet);
	
	free(Arr);
	
	return 0;
	
}