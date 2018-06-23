
#include <iostream>

#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {

	head = nullptr;
	tail = nullptr;
	curr = nullptr;
	temp = nullptr;

}

void LinkedList::addNode(int data) {

	Node* n = new Node;
	
	n->next = nullptr;
	n->data = data;

	if(head == nullptr && tail == nullptr) {

		head = n;
		tail = n;

	}

	else{
		
		curr = head;

        while(curr->next != nullptr) {

			curr = curr->next;
			
		}
		
		curr->next = n;
		tail = n;
	}

}

void LinkedList::deleteData(int deldata) {

	Node *delptr = nullptr;
	curr = head;
	temp = head;

	while(curr != nullptr && curr->data != deldata) {

		temp = curr;
		curr = curr->next;

	}

	if(curr == nullptr) {
	
		cout << "The data: " << deldata << " is not in the linked list." << endl;

	}

	else {

		delptr = curr;
		curr = curr->next;
		temp->next = curr;

		delete delptr;
		delptr = nullptr;

		cout << "The data: " << deldata << " has been deleted from the linked list." << endl;

	}


}

void LinkedList::deletePosition(int position) {

	Node *delptr = nullptr;
	curr = head;
	temp = head;

	if(position == 1) {

		delptr = head;
		head = head->next;

		delete delptr;
		delptr = nullptr;

	}
	
	
	else {
	
		int counter = 1;

		while(counter < position) {

			temp = curr;
			curr = curr->next;

			counter++;

		}

	delptr = curr;
	curr = curr->next;
	temp->next = curr;

	delete delptr;
	delptr = nullptr;
	
	}

}



void LinkedList::printList() {

	curr = head;
	while(curr != nullptr) {

		cout << curr->data << endl;
		curr = curr->next;

	}

}


void LinkedList::deleteList() {
	
	Node *delptr;
	curr = head;
	temp = curr;

	while(head != nullptr) {
		
		delptr = head;
		head = head->next;

		delete delptr;
		delptr = nullptr;
		 
	}

}

int LinkedList::iterativeLength() {
	
	curr = head;
	int counter = 1;
	
	while(curr->next != nullptr) {

		curr = curr->next;
		counter++;

	}	

	return counter;
	
}


