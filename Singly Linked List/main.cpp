#include <iostream>

#include "LinkedList.h"

using namespace std;

int main() {

LinkedList list;

list.addNode(2);
list.addNode(3);
list.addNode(33);

//list.deleteList();

list.printList();

cout << "The iterative length is: " << list.iterativeLength() << endl;

cout << "The middle element is: " << list.printMiddle() << endl;

return 0;

}

