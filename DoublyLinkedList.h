//
// Created by venglov on 28.03.19.
//

#ifndef JMP2_DOUBLYLINKEDLIST_H
#define JMP2_DOUBLYLINKEDLIST_H


class DoublyLinkedList {
private:
    DoublyLinkedList *next;
    DoublyLinkedList *previous;
    int value;

public:
    DoublyLinkedList();

    DoublyLinkedList(int value);

    ~DoublyLinkedList();

    void Append(DoublyLinkedList *element);

    DoublyLinkedList *PushFront(DoublyLinkedList *element);

    void PrintForward();

    void PrintBackward();

};


#endif //JMP2_DOUBLYLINKEDLIST_H
