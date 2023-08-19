//
// Created by Tuan Le on 2019-05-14.
//

#include "SinglyLinkedList.hpp"

SinglyLinkedList::SinglyLinkedList() = default;

SinglyLinkedList::SinglyLinkedList(Node *head) : head(head) {}

SinglyLinkedList::~SinglyLinkedList() = default;

Node *SinglyLinkedList::getHead() const {
    return head;
}

void SinglyLinkedList::setHead(Node *headNode) {
    SinglyLinkedList::head = headNode;
}

void SinglyLinkedList::addNode(int data) {
    Node *node = new Node(data);
    node->setNext(nullptr);
    if (head == nullptr) {
        setHead(node);
    } else {
        Node *temp = head;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(node);
    }
}

std::ostream &operator<<(std::ostream &os, const SinglyLinkedList &list) {
    Node *node = list.getHead();
    if (node != nullptr) {
        while (node->getNext() != nullptr) {
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
    if (head != nullptr) {
        setHead(head->getNext());
    }
}

void SinglyLinkedList::populatePosition(int position) {
    Node *current = head;
    Node *previous;
    bool ableToPopulate = true;
    for (int i = 1; i < position; ++i) {
        if (current == nullptr || current->getNext() == nullptr) {
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
    while (head != nullptr) {
        populateFirst();
    }
}

void SinglyLinkedList::reverseList() {
    if (head != nullptr) {
        if (head->getNext() != nullptr) {
            Node *current = head;
            Node *next = head->getNext();
            Node *previous = nullptr;
            while (next != nullptr) {
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
