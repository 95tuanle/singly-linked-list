//
// Created by Tuan Le on 2019-05-14.
//

#include "Node.hpp"

Node::Node() {}

Node::Node(int data, Node *next) : data(data), next(next) {}

Node::Node(int data) : data(data) {}

Node::~Node() {

}

int Node::getData() const {
    return data;
}

void Node::setData(int newData) {
    Node::data = newData;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *nextNode) {
    Node::next = nextNode;
}
