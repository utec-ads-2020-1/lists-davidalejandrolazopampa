#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "list.h"
#include "iterators/bidirectional_iterator.h"

// TODO: Implement all methods
template <typename T>
class CircularLinkedList : public List<T> {
    public:
        CircularLinkedList() : List<T>() {}

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
            return "Circular Linked List";
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
        void merge(CircularLinkedList<T>&);


};
        //////////Iniciando//////////
        /*Returns the top element*/
        template<typename T>
        T CircularLinkedList<T>::front() {return this->head->data;}
        /*Returns the back element*/
        template<typename T>
        T CircularLinkedList<T>::back(){

        }
        /*Adds an element to the front*/
        template<typename T>
        void CircularLinkedList<T>::push_front(T value){return this->tail->data;}
        /*Adds an element to the back*/
        template<typename T>
        void CircularLinkedList<T>::push_back(T value){
            Node<T>* newNode=new Node<T>;
            newNode->data=value;
            newNode->next= nullptr;
            newNode->prev= nullptr;
            if(this->nodes){
                newNode->next=this->head;
                newNode->prev=this->tail;
                this->tail->next=newNode;
                this->tail=newNode;
            } else{
                this->tail=newNode;
                this->tail->next=newNode;
                this->head=newNode;
            }
            this->head->prev=newNode;
            ++this->nodes;
        }
        /*Removes the front element, and updates a new front if necessary*/
        template<typename T>
        void CircularLinkedList<T>::pop_front(){
            if(this->nodes){
                Node<T>* newNodes=this->head->next;
                delete this->head;
                this->head= nullptr;
                if(this->nodes==1){this->tail= nullptr;}
                else{
                    newNodes->prev=this->tail;
                    this->tail->next=newNodes;
                    this->head=newNodes;
                }
                --this->nodes;
            }
        }
        /*Removes the back element, and updates a new back if necessary*/
        template<typename T>
        void CircularLinkedList<T>::pop_back(){

        }
        /*Returns an element in a certain position*/
        template<typename T>
        T CircularLinkedList<T>::operator[](int index){
            Node<T>* newNode = this->head;
            if(index<0){throw out_of_range("Index empty");}
            for(int i=0;i<=index;++i){

                if(i == index){ return newNode->data;}
                else{newNode = newNode->next;}
            }
/*
            if(!empty() || index > this->nodes) {
                int half = (this->nodes) / 2;
                if (index < half) {
                    int i = 0;
                    auto* temp = this->head;
                    while (i != index) {
                        temp = temp->next;
                        ++i;
                    }
                    return temp->data;
                } else {
                    int i = this->nodes - 1;
                    auto* temp = this->head->prev;
                    while (i != index) {
                        temp = temp->prev;
                        --i;
                    }
                    return temp->data;
                }
            } else {throw out_of_range("Not Index in the position");}*/
        }
        /*If the data structure is empty*/
        template<typename T>
        bool CircularLinkedList<T>::empty(){return !this->nodes;}
        /*The current count of elements*/
        template<typename T>
        int CircularLinkedList<T>::size(){return this->nodes;}
        /*Remove all the elements*/
        template<typename T>
        void CircularLinkedList<T>::clear(){

        }
        /*Sorts the elements, you can use any sorting algorithm*/
        template<typename T>
        void CircularLinkedList<T>::sort(){

        }
        /*Reverts the elements of the structure*/
        template<typename T>
        void CircularLinkedList<T>::reverse(){

        }
        /**/
        template<typename T>
        BidirectionalIterator<T> CircularLinkedList<T>::begin(){

        }
        /**/
        template<typename T>
        BidirectionalIterator<T> CircularLinkedList<T>::end(){

        }
        /*Transfers all elements*/
        template<typename T>
        void CircularLinkedList<T>::merge(CircularLinkedList<T> &list){

        }
#endif