#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

Node * initialiseNode(void * ptrData){
    Node * ptrNode= (Node *) malloc (sizeof(Node));
    if(ptrNode==NULL)
        return NULL;//memory allocation failled
    (* ptrNode) = (Node){NULL,NULL};
    ptrNode->ptrData=ptrData;
    ptrNode->ptrNext=NULL;
    return ptrNode;
}

void * insertNode(void * ptrData, Node * ptrPrevious){
    Node * ptrNode= initialiseNode(ptrData);
    if(ptrPrevious->ptrNext==NULL){
        ptrPrevious->ptrNext=ptrNode;
    }else{
        ptrNode->ptrNext=ptrPrevious->ptrNext;//sets the new node next to point to the next Node
        ptrPrevious->ptrNext=ptrNode;//sets the previous node's Next to point to the new node
    }
    return ptrNode;//returns pointer to node when successful
}

void iterateFunction(Node * ptrCurrent, void * (* function)(Node *)){
    while(ptrCurrent!=NULL){
        if(!function(ptrCurrent))
            return;
        ptrCurrent=ptrCurrent->ptrNext;
    }
}

void * printNode(Node * ptrNode){
    if(!ptrNode->ptrData)
        return ptrNode;
    if(printf("%d\n", *((int *) ptrNode->ptrData))<0)
        return NULL;
    return ptrNode;
}