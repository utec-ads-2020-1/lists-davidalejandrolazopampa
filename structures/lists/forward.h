#ifndef FORWARD_H
#define FORWARD_H

//#include "list.h"
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

        //////////Iniciando//////////
        /*Returns the top element*/
        T front(){

        }
        /*Returns the back element*/
        T back(){

        }
        /*Adds an element to the front*/
        void push_front(T value){

        }
        /*Adds an element to the back*/
        void push_back(T value){

        }
        /*Removes the front element, and updates a new front if necessary*/
        void pop_front(){

        }
        /*Removes the back element, and updates a new back if necessary*/
        void pop_back(){

        }
        /*Returns an element in a certain position*/
        T operator[](int index){

        }
        /*If the data structure is empty*/
        bool empty(){

        }
        /*The current count of elements*/
        int size(){

        }
        /*Remove all the elements*/
        void clear(){

        }
        /*Sorts the elements, you can use any sorting algorithm*/
        void sort(){

        }
        /*Reverts the elements of the structure*/
        void reverse(){

        }
        /**/
        ForwardIterator<T> begin(){

        }
        /**/
        ForwardIterator<T> end(){

        }
        /*Transfers all elements*/
        void merge(ForwardList<T> &list){

        }
};

#endif