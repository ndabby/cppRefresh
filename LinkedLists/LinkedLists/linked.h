//
//  linked.h
//  LinkedLists
//
//  Created by Nadine Dabby on 2/24/14.
//  Copyright (c) 2014 Nadine Dabby. All rights reserved.
//

#ifndef LinkedLists_linked_h
#define LinkedLists_linked_h

#include <string.h>


class node{
private:
    int data; // Data in this element
    node* next;
    
public:
    node(){};
    void setData(int x){data = x;};
    void setNext(node* ptr) {next = ptr;};
    int getData(void){return data;};
    node* getNext(void){return next;};
    friend class linked_list;
};




class linkedlist {
private:
    
    node *head; // First element in the list
public:
    // Initialize the linked list
    linkedlist(){ head = NULL;}
    void Print();
    void Append(int data);
    void Delete(int data);
};


void linkedlist::Print(){
    node *tmp = head;
    
    if(tmp == NULL){
        std::cout << "Nothing to see here" << std::endl;
    };
    
    while (tmp != NULL){
        std::cout << tmp->getData() << std::endl;
        tmp = tmp->getNext();
    };
};


void linkedlist::Append(int data){
    node *newNode = new node;
    newNode->setData(data);
    newNode->setNext(NULL);
    
    node *tmp = head;
    
    if (tmp == NULL){
        head = newNode;
    }
    else if (tmp != NULL){
    
        while (tmp->getNext() != NULL){
            tmp = tmp->getNext();
        }
        tmp->setNext(newNode);
    }

};


void linkedlist::Delete(int data){
    node *tmp = head;
    if (tmp == NULL){
        return;
    }
    
    if ( tmp->getNext() == NULL) {
        if (tmp->getData()== data){
            delete tmp;
            head = NULL;
        }
    }
    else if ( tmp->getNext() != NULL) {
        node *last = NULL;
        while (tmp !=NULL){
            if (tmp->getData() == data){break;}
            last = tmp;
            tmp = tmp->getNext();
        }
        
        last->setNext(tmp->getNext());
        delete tmp;

    };
};


#endif
