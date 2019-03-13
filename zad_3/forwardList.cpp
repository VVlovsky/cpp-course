#include "forwardList.h"

struct ForwardList {

    int value;
    ForwardList *next;

    ForwardList *PushFront(ForwardList *list, ForwardList *head) {
        list->next = head;
        *head = *list;
        return head;
    }

    void Append(ForwardList *list, ForwardList *tail) {
        tail->next = list;
    }
};

ForwardList *CreateNode(int value) {
    ForwardList *list = new ForwardList;
    list->next = nullptr;
    list->value = value;
    return list;
}

void DestroyList(ForwardList *list) {
    while (list->next != nullptr) {
        ForwardList *tmp = list;
        list = list->next;
        free(tmp);
    }
    free(list);
}

