//
// Created by venglov on 28.03.19.
//

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
    this->value = 0;
    this->next = nullptr;
    this->previous = nullptr;
}

DoublyLinkedList::DoublyLinkedList(int value) {
    this->value = value;
    this->next = nullptr;
    this->previous = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() = default;


void DoublyLinkedList::Append(DoublyLinkedList *element) {
    auto *tmp = this;
    while (tmp->next != nullptr) {
        tmp = this->next;
    }
    tmp->next = element;
}


DoublyLinkedList *DoublyLinkedList::PushFront(DoublyLinkedList *element) {
    auto *tmp = this;
    while (tmp->previous != nullptr) {
        tmp = this->previous;
    }
    tmp->previous = element;
    delete (tmp);
    return element;
}


void DoublyLinkedList::PrintForward() {
    auto *tmp = this;
    while (tmp->previous != nullptr) {
        std::cout << tmp->value;
        tmp = tmp->previous;
    }
    std::cout << tmp->value;
}


void DoublyLinkedList::PrintBackward() {
    auto *tmp = this;
    while (tmp->next != nullptr) {
        std::cout << tmp->value;
        tmp = tmp->next;
    }
    std::cout << tmp->value;
}

