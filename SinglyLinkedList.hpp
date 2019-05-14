//
// Created by Tuan Le on 2019-05-14.
//

#ifndef SINGLYLINKEDLIST_SINGLYLINKEDLIST_HPP
#define SINGLYLINKEDLIST_SINGLYLINKEDLIST_HPP

#include "iostream"
#include "Node.hpp"

class SinglyLinkedList {
private:
    Node *head;
public:
    SinglyLinkedList();

    SinglyLinkedList(Node *head);

    virtual ~SinglyLinkedList();

    Node *getHead() const;

    void setHead(Node *head);

    void addNode(int data);

    void populateFirst();

    void populatePosition(int position);

    void deleteList();

    void reverseList();

    friend std::ostream &operator<<(std::ostream &os, const SinglyLinkedList &list);
};


#endif //SINGLYLINKEDLIST_SINGLYLINKEDLIST_HPP
