//
// Created by Tuan Le on 2019-05-14.
//

#include "SinglyLinkedList.hpp"

SinglyLinkedList::SinglyLinkedList() {}

SinglyLinkedList::SinglyLinkedList(Node *head) : head(head) {}

SinglyLinkedList::~SinglyLinkedList() {

}

Node *SinglyLinkedList::getHead() const {
    return head;
}

void SinglyLinkedList::setHead(Node *headNode) {
    SinglyLinkedList::head = headNode;
}

void SinglyLinkedList::addNode(int data) {
    Node *node = new Node(data);
    node->setNext(NULL);
    if (head == NULL) {
        setHead(node);
    } else {
        Node *temp = head;
        while (temp->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->setNext(node);
    }
}

std::ostream &operator<<(std::ostream &os, const SinglyLinkedList &list) {
    Node *node = list.getHead();
    if (node != NULL) {
        while (node->getNext() != NULL) {
            os << node->getData() << " : ";
            node = node->getNext();
        }
        os << node->getData();
        return os;
    } else {
        return os;
    }
}

void SinglyLinkedList::populateFirst() {
    if (head != NULL) {
        setHead(head->getNext());
    }
}

void SinglyLinkedList::populatePosition(int position) {
    Node *current = head;
    Node *previous;
    bool ableToPopulate = true;
    for (int i = 1; i < position; ++i) {
        if (current == NULL) {
            ableToPopulate = false;
            break;
        } else if (current->getNext() == NULL) {
            ableToPopulate = false;
            break;
        } else {
            previous = current;
            current = current->getNext();
        }
    }
    if (ableToPopulate) {
        previous->setNext(current->getNext());
    }
}

void SinglyLinkedList::deleteList() {
    while (head != NULL) {
        populateFirst();
    }
}

void SinglyLinkedList::reverseList() {
    if (head != NULL) {
        if (head->getNext() != NULL) {
            Node *current = head;
            Node *next = head->getNext();
            Node *previous = NULL;
            while (next != NULL) {
                Node *temp = current;
                current->setNext(previous);
                previous = temp;
                current = next;
                next = next->getNext();
            }
            current->setNext(previous);
            setHead(current);
        }
    }
}
