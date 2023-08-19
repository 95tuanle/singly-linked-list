//
// Created by Tuan Le on 2019-05-14.
//

#ifndef SINGLYLINKEDLIST_NODE_HPP
#define SINGLYLINKEDLIST_NODE_HPP


class Node {
private:
    int data{};
    Node *next{};
public:
    Node(int data, Node *next);

    explicit Node(int data);

    Node();

    virtual ~Node();

    int getData() const;

    void setData(int newData);

    Node *getNext() const;

    void setNext(Node *nextNode);


};


#endif //SINGLYLINKEDLIST_NODE_HPP
