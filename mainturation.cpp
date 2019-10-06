#include<iostream>
using namespace std;
#include "List.cpp"

int main()
{
	List myLinkedList;
    	   myLinkedList.insert(100);
	       myLinkedList.insert(150);
	       myLinkedList.insert(200);
	       //myLinkedList.start();
	    //   myLinkedList.move();
	       myLinkedList.insert(250);
	       myLinkedList.insert(300);
	       myLinkedList.insert(350);
        	myLinkedList.insert(1000);
        	myLinkedList.diplayLinkedList();
        	cout<<"The length of linked list is"<<endl;
		cout<<myLinkedList.getSize()<<endl;
           myLinkedList.insertAtBegin(50);
           myLinkedList.insertAtEnd(2000);
           myLinkedList.updateValue(300, 1500) ;
		     myLinkedList.diplayLinkedList();
		     myLinkedList.deleteNode(350);
				  myLinkedList.diplayLinkedList();
				  myLinkedList.searchNode(250); 
				  myLinkedList.insertAfter(200,600);
				   myLinkedList.diplayLinkedList();
				   myLinkedList.sumLinklist();
				   myLinkedList.insertAtPos(150,500);
				   myLinkedList.diplayLinkedList();
				                               	//now get whole list using start and move functi
     //   cout<<"my linked list is"<<endl;
	 //   myLinkedList.start();
 	  //  cout<<myLinkedList.get()<<endl;
	  //  myLinkedList.move();
	    //cout<<myLinkedList.get()<<endl;
	    //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
        //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
         //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
         //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
         //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
         //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
         //myLinkedList.move();
        //cout<<myLinkedList.get()<<endl;
        cout<<"The length of linked list is"<<endl;
		cout<<myLinkedList.getSize()<<endl;
		return 0;
}


