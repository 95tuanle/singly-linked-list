//
// Created by Tuan Le on 2019-05-14.
//

#ifndef SINGLYLINKEDLIST_NODE_HPP
#define SINGLYLINKEDLIST_NODE_HPP


class Node {
private:
    int data;
    Node *next;
public:
    Node(int data, Node *next);

    Node(int data);

    Node();

    virtual ~Node();

    int getData() const;

    void setData(int data);

    Node *getNext() const;

    void setNext(Node *next);


};


#endif //SINGLYLINKEDLIST_NODE_HPP
