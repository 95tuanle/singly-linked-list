#include <iostream>
#include "Node.hpp"
#include "SinglyLinkedList.hpp"


int main() {
//    SinglyLinkedList *singlyLinkedList = new SinglyLinkedList;
    Node *node = new Node;
    node->setNext(NULL);
    node->setData(5);
    SinglyLinkedList singlyLinkedList;
    std::cout << singlyLinkedList;
    singlyLinkedList.populateFirst();
    singlyLinkedList.reverseList();
    std::cout << singlyLinkedList;
    singlyLinkedList.setHead(node);
    singlyLinkedList.addNode(13);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(40);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(25);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(67);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(98);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.reverseList();
    std::cout << "Reversed | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.populateFirst();
    std::cout << "Popped first | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(100);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(3);
    std::cout << "Popped 3 | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(5);
    std::cout << "Popped 5 | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(5);
    std::cout << "Popped 5 | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(4);
    std::cout << "Popped 4 | " << singlyLinkedList << std::endl;
    singlyLinkedList.addNode(12);
    std::cout << "Added | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(2);
    std::cout << "Popped 2 | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(0);
    std::cout << "Popped 0 | " << singlyLinkedList << std::endl;
    singlyLinkedList.populatePosition(100);
    std::cout << "Popped 100 | " << singlyLinkedList << std::endl;
    singlyLinkedList.deleteList();
    std::cout << "WIPED" << singlyLinkedList << std::endl;
    return 0;
}