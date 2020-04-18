#ifndef LINKED_H
#define LINKED_H

#include "list.h"
#include "iterators/bidirectional_iterator.h"

// TODO: Implement all methods
template <typename T>
class LinkedList : public List<T> {
public:
    LinkedList() : List<T>() {}

    T front();
    T back();
    void push_front(T);
    void push_back(T);
    void pop_front();
    void pop_back();
    T operator[](int);
    bool empty();
    int size();
    void clear();
    void sort();
    void reverse();

    BidirectionalIterator<T> begin();
    BidirectionalIterator<T> end();

    string name() {
        return "Linked List";
    }

    /**
     * Merges x into the list by transferring all of its elements at their respective
     * ordered positions into the container (both containers shall already be ordered).
     *
     * This effectively removes all the elements in x (which becomes empty), and inserts
     * them into their ordered position within container (which expands in size by the number
     * of elements transferred). The operation is performed without constructing nor destroying
     * any element: they are transferred, no matter whether x is an lvalue or an rvalue,
     * or whether the value_type supports move-construction or not.
    */
    void merge(LinkedList<T>&);

};
//////////Iniciando//////////
/*Returns the top element*/
template <typename T>
T LinkedList<T>::front(){
    if(!empty()){return this->head->data;}
    else{throw new out_of_range("The Linked is empty");}
}
/*Returns the back element*/
template <typename T>
T LinkedList<T>::back(){
    if(!empty()){ return this->tail->data;}
    else{throw new out_of_range("The Linked is empty");}
}
/*Adds an element to the front*/
template <typename T>
void LinkedList<T>::push_front(T value){
    Node<T>* newNode=new Node<T>;
    newNode->data=value;
    if(!this->head){
        newNode->next=this->head;
        this->head->prev=newNode;
    }
    else{this->tail=newNode;}
    this->head=newNode;
    ++this->nodes;
}
/*Adds an element to the back*/
template <typename T>
void LinkedList<T>::push_back(T value){
    Node<T>* newNode=new Node<T>;
    newNode->data=value;
    newNode->next= nullptr;
    if(this->nodes){
        newNode->prev=this->tail;
        this->tail->next=newNode;
    }
    else{this->head=newNode;}
    this->tail=newNode;
    ++this->nodes;
}
/*Removes the front element, and updates a new front if necessary*/
template <typename T>
void LinkedList<T>::pop_front(){
    if(this->nodes){
        Node<T>* newNode=this->head->next;
        delete this->head;
        this->head= nullptr;
        if(this->nodes==1){this->tail=nullptr;}
        else{
            newNode->prev=nullptr;
            this->head=newNode;
        }
        --this->nodes;
    }
}
/*Removes the back element, and updates a new back if necessary*/
template <typename T>
void LinkedList<T>::pop_back(){
    if(this->nodes){
        Node<T>* newNode=this->tail->prev;
        delete this->tail;
        if(this->nodes==1){this->head=nullptr;}
        else{
            newNode->next=nullptr;
            this->tail=newNode;
        }
        --this->nodes;
    }
}
/*Returns an element in a certain position*/
template <typename T>
T LinkedList<T>::operator[](int index) {
    if ( index < 0 ) throw new out_of_range("Index should zero");
    if ( index > size() - 1 ) throw new out_of_range("Index is bigger in the list");
    auto pNode = this->head;
    while (index--) {pNode = pNode->next;}
    return pNode->data;
}
/*If the data structure is empty*/
template <typename T>
bool LinkedList<T>::empty(){
    return this->head == nullptr && this->tail == nullptr;
}
/*The current count of elements*/
template <typename T>
int LinkedList<T>::size(){
    return this->nodes;
}
/*Remove all the elements*/
template <typename T>
void LinkedList<T>::clear(){
    this->head->killSelf();
    this->head=nullptr;
    this->tail= nullptr;
    this->nodes=0;
}
/*Sorts the elements, you can use any sorting algorithm*/
template <typename T>
void LinkedList<T>::sort(){
    auto newNode = this->head;T max;
    for(int i = 0; i < this->nodes; ++i){
        while(newNode->next != nullptr){
            if(newNode->data > newNode->next->data){
                max = newNode->data;newNode->data = newNode->next->data;newNode->next->data = max;
            }
            newNode = newNode->next;
        }
        newNode = this->head;
    }
}
/*Reverts the elements of the structure*/
template <typename T>
void LinkedList<T>::reverse(){
    int size = this->nodes;
    int *array= new int [size];
    Node<T>*it = this->head;
    for (int i = 0; i <size ; ++i) {
        array[i] = it->data;
        it = it->next;
    }
    it = this->head;
    for (int j = size-1; j >=0 ; j--) {
        it->data = array[j];
        it = it->next;
    }
}
/**/
template <typename T>
BidirectionalIterator<T> LinkedList<T>::begin() {
    return BidirectionalIterator<T>(this->head);
}
/**/
template <typename T>
BidirectionalIterator<T> LinkedList<T>::end() {
    return BidirectionalIterator<T>(this->tail->next);
}
/*Transfers all elements*/
template <typename T>
void LinkedList<T>::merge(LinkedList<T> &list){
    Node<T>* newNode = list.head;
    while (newNode != nullptr){
        this->push_back(newNode->data);
        newNode=newNode->next;
    }
}
#endif