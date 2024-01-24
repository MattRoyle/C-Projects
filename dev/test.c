#include "linkedlist.h"
#include <stdio.h>


Node * head;
LinkedList * linkedList={NULL};
int * ptrInt;
int main(int argc, char **argv){
    int i = 5;
    ptrInt=&i;
    head = initialiseNode(NULL);
    //linkedList->ptrHead=head;
    insertNode(ptrInt, head);
    iterateFunction(head, printNode);
    return 0;
}