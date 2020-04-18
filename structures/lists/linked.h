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
            if(this->head){ return this->head->data;}
            else{throw new out_of_range("Empty list");}
        }
        /*Returns the back element*/
        template <typename T>
        T LinkedList<T>::back(){
            if(!empty()){ return this->tail->data;}
            else{throw new out_of_range("Empty list");}
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
            //newNode->next= nullptr;
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
                --this->newNodes;
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
            if(index>=this->nodes){throw new out_of_range("Out of range");}
            else{
                Node <T> *temp = this->head;
                for(int i = 0; i < index; i++){temp = temp->next;}
                return temp->data;
            }
        }
        /*If the data structure is empty*/
        template <typename T>
        bool LinkedList<T>::empty(){
            return !this->head;
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
            int size = this->nodes;
            int newarray[size];
            Node<T>*actual = this->head;
            for (int i = 0; i <size ; ++i) {
                newarray[i] = actual->data;
                actual = actual->next;
            }
            for (int i = (size)/2; i >0 ; i /=2) {
                for (int j = i; j < size; j++) {
                    int temp = newarray[j];
                    int k;
                    for (int k = j; k >=i  && newarray[k-i]>temp; k -=i) {newarray[k] = newarray[k-i];}
                    newarray[k] = temp;
                }
            }
            actual = this->head;
            for (int l = 0; l < size ; l++) {
                actual->data = newarray[l];
                actual = actual->next;
            }
        }
        /*Reverts the elements of the structure*/
        template <typename T>
        void LinkedList<T>::reverse(){
            if(this->nodes){
                this->head->reverseLinked(nullptr);
                swap(this->head,this->tail);
            }
        }
        /**/
        template <typename T>
        BidirectionalIterator<T> LinkedList<T>::begin() {
            return ForwardIterator<T>(this->head);
        }
        /**/
        template <typename T>
        BidirectionalIterator<T> LinkedList<T>::end() {
            return ForwardIterator<T>(this->tail->next);
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