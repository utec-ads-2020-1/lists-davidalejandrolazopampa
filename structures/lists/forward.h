#ifndef FORWARD_H
#define FORWARD_H

#include "list.h"
#include "iterators/forward_iterator.h"

// TODO: Implement all methods
template <typename T>
class ForwardList : public List<T> {
    public:
        ForwardList() : List<T>() {}

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

        ForwardIterator<T> begin();
	    ForwardIterator<T> end();

        string name() {
            return "Forward List";
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
        void merge(ForwardList<T>&);


};
        //////////Iniciando//////////
        /*Returns the top element*/
        template <typename T>
        T ForwardList<T>::front(){
            if(this->head != nullptr){return this->head->data;}
            else {throw new out_of_range("The ForwardList is empty");}
        }
        /*Returns the back element*/
        template <typename T>
        T ForwardList<T>::back(){
            if(this->tail != nullptr){return this->tail->data;}
            else{throw new out_of_range("The ForwardList is empty");}
        }
        /*Adds an element to the front*/
        template <typename T>
        void ForwardList<T>::push_front(T value){
            Node<T>* newNode=new Node<T>;
            newNode->data=value;
            newNode->next= nullptr;
            if(this->head){newNode->next=this->head;}
            else{this->tail=newNode;}
            this->head=newNode;
            ++this->nodes;
        }
        /*Adds an element to the back*/
        template <typename T>
        void ForwardList<T>::push_back(T value){
            Node<T>* newNode=new Node<T>;
            newNode->data=value;
            newNode->next= nullptr;
            if(this->head){this->tail->next=newNode;}
            else{this->head=newNode;}
            this->tail=newNode;
            ++this->nodes;
        }
        /*Removes the front element, and updates a new front if necessary*/
        template <typename T>
        void ForwardList<T>::pop_front(){
            if(this->nodes){
                Node<T>* newNode=this->head->next;
                delete this->head;
                this->head=nullptr;
                if(this->nodes==1){this->tail=nullptr;}
                else{this->head=newNode;}
                --this->nodes;
            }
        }
        /*Removes the back element, and updates a new back if necessary*/
        template <typename T>
        void ForwardList<T>::pop_back(){
            if(this->nodes){
                Node<T>* newNode=this->head;
                int size=this->nodes-1;
                for(int i=1;i<size;++i){newNode=newNode->next;}
                delete this->tail;
                if(this->nodes==1){this->head= nullptr;}
                else{this->tail=newNode;}
                --this->nodes;
            }
        }
        /*Returns an element in a certain position*/
        template <typename T>
        T ForwardList<T>::operator[](int index){
            if(index >= 0 && index >= this->nodes){throw new out_of_range("Out of range");}
            else{
                auto*temp = this->head;
                for(int i = 0; i < index; i++){temp = temp->next;}
                return temp->data;
            }
        }
        /*If the data structure is empty*/
        template <typename T>
        bool ForwardList<T>::empty(){
            return !(this->head);
        }
        /*The current count of elements*/
        template <typename T>
        int ForwardList<T>::size(){
            return this->nodes;
        }
        /*Remove all the elements*/
        template <typename T>
        void ForwardList<T>::clear(){
            this->head->killSelf();
            this->head=nullptr;
            this->tail= nullptr;
            this->nodes=0;
        }
        /*Sorts the elements, you can use any sorting algorithm*/
        template <typename T>
        void ForwardList<T>::sort(){
            int x=1;
            T *tempArray =new T[this->nodes];
            auto* aux = this->head->next;
            tempArray[0] = aux->data;
            while(aux->next != nullptr){
                aux = aux->next;
                tempArray[x]=aux->data;
                x++;
            }
            sort(tempArray,tempArray+this->nodes);
            clear();
            x=0;
            while (x != size()){
                push_back(tempArray[x]);
                x++;
            }
        }
        /*Reverts the elements of the structure*/
        template <typename T>
        void ForwardList<T>::reverse(){
            if(this->node){
                this->head->reverseForward(nullptr);
                swap(this->head,this->tail);
            }
            else{this->tail->next= nullptr;}
        }
        /**/
        template <typename T>
        ForwardIterator<T> ForwardList<T>::begin() {
            return ForwardIterator<T>(this->head);
        }

        /**/
        template <typename T>
        ForwardIterator<T> ForwardList<T>::end() {
            //Opcion 1
            return ForwardIterator<T>(this->tail->next);
            //Opcion 2
            //return ForwardIterator<T>(nullptr);
        }
        /*Transfers all elements*/
        template <typename T>
        void ForwardList<T>::merge(ForwardList<T> &list){

        }
#endif