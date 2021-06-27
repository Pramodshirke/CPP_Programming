//Stack In C++

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class Queue
{
    private:
	PNODE Head;
	int iSize;
	
	public:
	Queue();        //Constuctor
	~Queue();		//Destructor
	void Enqueue(int); //void InsertFirst(int);
	int Dequeue();      //void DeleteFirst();
	void Display();
	int Count();	
};
Queue::Queue()//Constuctor
{
	printf("Inside the Constructor\n");//Nahi Lihaych
	this->Head=NULL; //Head=NULL;
	this->iSize=0;
}

Queue::~Queue()//Destructor
{
	cout<<"Inside Destructor\n";
	PNODE temp=NULL;
	
	while(Head!=NULL)
	{
		temp=Head;
		Head=Head->next;
		delete temp;
	}
}

void Queue::Enqueue(int iNo) //InserFirst
{
	PNODE newn=new NODE;
	newn->data=iNo;
	newn->next=NULL;
	
	newn->next=Head;
	Head=newn;
	iSize++;
}


int Queue::Dequeue()//DeleteFirst
{
	int iRet=-1;
	
	if(iSize==0)
	{
		cout<<"Queue is Empty\n";
	}
	else if(iSize==1)
	{
		return Head->data;
		delete Head;
		Head=NULL;
	}
	else
	{
		PNODE temp=Head;
		
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		iRet=temp->next->data;
		delete temp->next;
		temp->next=NULL;
		iSize--;
	}
	return iRet;
}

void Queue::Display()
{
	PNODE temp=Head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

int Queue::Count()
{
	return this->iSize;
}
int main()
{
	Queue *obj=new Queue; 
	int iOption=1,iRet=0,iNo=0;
	
	while(iOption!=0)
	{
		cout<<"Please Select The Option\n";
		cout<<"1: Enqueue the element\n";
		cout<<"2: Dequeue the element\n";
		cout<<"3: Display the elements\n";
		cout<<"4: Count the elements\n";
		cout<<"0: Exit The Application\n";
		cin>>iOption;
		
		switch(iOption)
		{
			case 1:
			cout<<"Enter the element to push\n";
			cin>>iNo;
			obj->Enqueue(iNo);// Aapan Object create Kartana dynamically pointer vaprun kela manun "->" vaprlay.
			break;
			
			case 2:
			iRet=obj->Dequeue();
			cout<<"Poped Element is:"<<iRet<<"\n";
			break;
			
			case 3:
			cout<<"Elements In Stack Are: \n";
			obj->Display();
			break;
			
			case 4:
			iRet=obj->Count();
			cout<<"Number of Element is:"<<iRet<<"\n";
			break;
			
			case 0:
			cout<<"Thank You FOr Using Stack\n";
			delete obj; //It Implicitly Calls the Destructor;
			break;
			
			default:
			cout<<"Please enter Valid Option\n";
			break;
		}
	}	
	return 0;
}
