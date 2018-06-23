
#ifndef LINKEDLIST_H
#define LINKED LIST_H


class LinkedList
{

	private:
		
		struct Node
		{
			int data;
			Node* next;

		};
		
		Node* head;
		Node* tail;
		Node* temp;
		Node* curr;
	
	public:
		LinkedList();
		void addNode(int data);
		void deleteData(int data);
		void deletePosition(int position);
		void printList();
		void deleteList();
		int iterativeLength();

};

#endif 
