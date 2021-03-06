//Stack In C++

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Stack
{
    private:
	PNODE Head;
	int iSize;
	
	public:
	Stack();        //Constuctor
	~Stack();		//Destructor
	void Push(int); //void InsertFirst(int);
	int Pop();      //void DeleteFirst();
	void Display();
	int Count();	
};
Stack::Stack()//Constuctor
{
	printf("Inside the Constructor\n");//Nahi Lihaych
	this->Head=NULL; //Head=NULL;
	this->iSize=0;
}

Stack::~Stack()//Destructor
{
	
}

void Stack::Push(int iNo) //InserFirst
{
	PNODE newn=new NODE;
	newn->data=iNo;
	newn->next=NULL;
	
	newn->next=Head;
	Head=newn;
	iSize++;
}

int Stack::Pop()//DeleteFirst
{
	int iRet=-1;
	
	if(iSize==0)
	{
		cout<<"Stack is Empty\n";
	}
	else
	{
		PNODE temp=Head;
		Head=Head->next;
		iRet=temp->data;
		delete temp;
		iSize--;
	}
	return iRet;
}

void Stack::Display()
{
	PNODE temp=Head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

int Stack::Count()
{
	return this->iSize;
}
int main()
{
	Stack *sobj=new Stack; //Stack sobj;   It implictly Calls Constuctor
	int iOption=1,iRet=0,iNo=0;
	
	while(iOption!=0)
	{
		cout<<"Please Select The Option\n";
		cout<<"1: Push the element\n";
		cout<<"2: Pop the element\n";
		cout<<"3: Display the elements\n";
		cout<<"4: Count the elements\n";
		cout<<"0: Exit The Application\n";
		cin>>iOption;
		
		switch(iOption)
		{
			case 1:
			cout<<"Enter the element to push\n";
			cin>>iNo;
			sobj->Push(iNo);// Aapan Object create Kartana dynamically pointer vaprun kela manun "->" vaprlay.
			break;
			
			case 2:
			iRet=sobj->Pop();
			cout<<"Poped Element is:"<<iRet<<"\n";
			break;
			
			case 3:
			cout<<"Elements In Stack Are: \n";
			sobj->Display();
			break;
			
			case 4:
			iRet=sobj->Count();
			cout<<"Number of Element is:"<<iRet<<"\n";
			break;
			
			case 0:
			cout<<"Thank You FOr Using Stack\n";
			delete sobj; //It Implicitly Calls the Destructor;
			break;
			
			default:
			cout<<"Please enter Valid Option\n";
			break;
		}
	}	
	return 0;
}