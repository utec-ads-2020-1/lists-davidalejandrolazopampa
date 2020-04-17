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

        }
        /*Adds an element to the back*/
        template <typename T>
        void ForwardList<T>::push_back(T value){

        }
        /*Removes the front element, and updates a new front if necessary*/
        template <typename T>
        void ForwardList<T>::pop_front(){

        }
        /*Removes the back element, and updates a new back if necessary*/
        template <typename T>
        void ForwardList<T>::pop_back(){

        }
        /*Returns an element in a certain position*/
        template <typename T>
        T ForwardList<T>::operator[](int index){

        }
        /*If the data structure is empty*/
        template <typename T>
        bool ForwardList<T>::empty(){

        }
        /*The current count of elements*/
        template <typename T>
        int ForwardList<T>::size(){

        }
        /*Remove all the elements*/
        template <typename T>
        void ForwardList<T>::clear(){

        }
        /*Sorts the elements, you can use any sorting algorithm*/
        template <typename T>
        void ForwardList<T>::sort(){

        }
        /*Reverts the elements of the structure*/
        template <typename T>
        void ForwardList<T>::reverse(){

        }
        /**/
        template <typename T>
        ForwardIterator<T> ForwardList<T>::begin() {

        }

        /**/
        template <typename T>
        ForwardIterator<T> ForwardList<T>::end() {

        }
        /*Transfers all elements*/
        template <typename T>
        void ForwardList<T>::merge(ForwardList<T> &list){

        }
#endif