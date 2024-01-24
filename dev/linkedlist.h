/**************************************************************
      Implementation of Singly Linked List - Matt Royle
***************************************************************/

/*
* Definition of a node of the linked list
*/
typedef struct Node {
    struct Node *ptrNext;
    void *ptrData;
} Node;

typedef struct {
    Node * ptrHead;
}LinkedList;

/**
* Adds the node to the Next of the previous node, O(1)
* Returns a pointer to the head or NULL if unsuccessful
*/
void * insertNode(void * ptrData, Node * ptrPrevious);

//void * removeNode(void * ptrData, LinkedList * pList);

/**
 * Iterates through each Node in the list and calls the provided function with the node as a parameter
*/
void iterateFunction(Node * ptrList, void * (* function)(Node *));

void * printNode(Node * ptrNode);

Node * initialiseNode(void * ptrData);