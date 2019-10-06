#include<iostream>
using namespace std;
#include "Node.cpp"
class List
{
	Node* headNode;
	Node* currentNode;
	Node* lastCurrentNode;
	int size;
public:
	List()
	{
		lastCurrentNode = 0;
		headNode = 0;
		currentNode = 0;
		size = 0;
	}
	void insert(int n)     //node add karnaa list me
	{
		if (currentNode != 0)
		{
			if (currentNode->getNextNode() == 0)  // this if add node at the end 
			{
				Node* newNode = new Node();
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
			else                 //this else will work if we adding new node b/w two existing nodes
			{
				Node* newNode = new Node();
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
				currentNode->setValue(n);
				size++;
			}


		}
		else
		{
			Node* newNode = new Node();
			headNode = newNode;
			currentNode = newNode;
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			size++;
		//	cout << "First element added in your list...!" << endl;
		}
	}
	void insertAtBegin(int n)
	{
		     start();
			Node* newNode = new Node();	
			currentNode = newNode;
			//lastCurrentNode=currentNode;
			currentNode->setValue(n);
			currentNode->setNextNode(headNode);
			lastCurrentNode=currentNode;
			headNode=newNode;
			size++;
			cout << "The element added at beggining of list...!" << endl;
	
}
void insertAtEnd(int n)
	{
			while (currentNode->getNextNode() != 0)
			{
					move();
         	}
		Node* newNode = new Node();
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			  	cout<<"The element added at the end of list"<<endl;
			
		}
void updateValue(int old, int w)
{
	int pos=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		if(currentNode->getValue()==old)
		{
		currentNode->setValue(w);
			cout<<"The  new value is replaced by old "<<endl;
		}
		
	          move();
	pos++;
    }
}
void diplayLinkedList()
{
	start();
	while(currentNode!=NULL)
	{
		cout<<"The linked list is"<<endl;
		cout<<currentNode->getValue()<<endl;
	    move();
	}
 } 
void start()
	{
		lastCurrentNode = 0;
		currentNode = headNode;
	}
void move()
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();

	}
int get()
	{
		return currentNode->getValue();

	}
int getSize()
	{
		return size;
	}
void deleteNode(int m)
{
		int pos=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		if(currentNode->getValue()==m)
		{
		lastCurrentNode->setNextNode(currentNode->getNextNode());
		delete currentNode;
		currentNode=lastCurrentNode;
		size--;
		cout<<"The node 350 is deleted "<<pos<<endl; 
		}
		move();
		pos++;
}
	cout<<"The  node with value 350 is deleted at "<<pos<<endl;
}
void searchNode(int l)
{
		int pos=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		if(currentNode->getValue()==l)
		{
			currentNode->getValue();
		cout<<"The value 350 find at position"<<pos<<endl;
	   }
	   move();
	   pos++;
 }
}
void insertAfter(int a,int b)
{
		int pos=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		if(currentNode->getValue()==a)
		{
			Node* newNode = new Node();
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
				currentNode->setValue(b);
					cout<<"The value is inserted after 200 value "<<endl;
				size++;
			}
			move();
			pos++;
		//	cout<<"The value is inserted after 200 value "<<endl;
	
}
}
void sumLinklist()
{
	int sum=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		sum= sum +currentNode->getValue();
		move();
	}
	cout<<"Total sum of linked list"<<sum<<endl;
}
void insertAtPos(int k,int z)
{
	int pos=0;
	currentNode=headNode;
	if(headNode==NULL)
	{
		cout<<"The list is empty"<<endl;
		
	}
	currentNode= headNode;
	while(currentNode!=NULL)
	{
		if(currentNode->getValue()==k)
		{
				Node* newNode = new Node();
				//currentNode=lastCurrentNode;
				newNode->setNextNode(currentNode->getNextNode());
				currentNode=lastCurrentNode;
				delete currentNode;
				size--;
				currentNode->setNextNode(newNode);
			//	 lastCurrentNode=currentNode;
			    currentNode = newNode;
			   // lastCurrentNode=currentNode;
				currentNode->setValue(z);
					cout<<"The value is inserted at 150 value "<<endl;
			size++;
					
		}
		move();
		pos++;
		}	
}
};
