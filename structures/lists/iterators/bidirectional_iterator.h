#ifndef BIDIRECTIONAL_ITERATOR_H
#define BIDIRECTIONAL_ITERATOR_H

#include "../node.h"

// TODO: Implement all methods
template <typename T> 
class BidirectionalIterator {
    private:
        Node<T> *current;

    public:
        BidirectionalIterator();
        BidirectionalIterator(Node<T>*);

        BidirectionalIterator<T> operator=(BidirectionalIterator<T>);

        bool operator!=(BidirectionalIterator<T>);

        BidirectionalIterator<T> operator++();

        BidirectionalIterator<T> operator--();

        T operator*();

        //////////Iniciando//////////
        BidirectionalIterator(){

        }
        BidirectionalIterator(Node<T>*){

        }
        /*Equals an iterator to another*/
        BidirectionalIterator<T> operator=(BidirectionalIterator<T>){

        }
        /*Returns if the iterator is different from another iterator*/
        bool operator!=(BidirectionalIterator<T>){

        }
        /*Advance one position*/
        BidirectionalIterator<T> operator++(){

        }
        /*Goes back one position*/
        BidirectionalIterator<T> operator--(){

        }
        /*Returns the content of the iterator*/
        T operator*(){

        }

};

#endif