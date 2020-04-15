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
        T CircularLinkedList<T>::front() {

        }
        /*Returns the back element*/
        template<typename T>
        T CircularLinkedList<T>::back(){

        }
        /*Adds an element to the front*/
        template<typename T>
        void CircularLinkedList<T>::push_front(T value){

        }
        /*Adds an element to the back*/
        template<typename T>
        void CircularLinkedList<T>::push_back(T value){

        }
        /*Removes the front element, and updates a new front if necessary*/
        template<typename T>
        void CircularLinkedList<T>::pop_front(){

        }
        /*Removes the back element, and updates a new back if necessary*/
        template<typename T>
        void CircularLinkedList<T>::pop_back(){

        }
        /*Returns an element in a certain position*/
        template<typename T>
        T CircularLinkedList<T>::operator[](int index){

        }
        /*If the data structure is empty*/
        template<typename T>
        bool CircularLinkedList<T>::empty(){

        }
        /*The current count of elements*/
        template<typename T>
        int CircularLinkedList<T>::size(){

        }
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