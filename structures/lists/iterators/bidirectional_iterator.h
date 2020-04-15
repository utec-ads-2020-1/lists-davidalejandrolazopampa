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



};
        //////////Iniciando//////////
        template <typename T>
        BidirectionalIterator<T>::BidirectionalIterator(){

        }
        template <typename T>
        BidirectionalIterator<T> ::BidirectionalIterator(Node<T> *) {

        }
        /*Equals an iterator to another*/
        template <typename T>
        BidirectionalIterator<T> BidirectionalIterator<T>::operator=(BidirectionalIterator<T>){

        }
        /*Returns if the iterator is different from another iterator*/
        template <typename T>
        bool BidirectionalIterator<T>::operator!=(BidirectionalIterator<T>){

        }
        /*Advance one position*/
        template <typename T>
        BidirectionalIterator<T> BidirectionalIterator<T>::operator++() {

        }
        /*Goes back one position*/
        template <typename T>
        BidirectionalIterator<T> BidirectionalIterator<T>::operator--(){

        }
        /*Returns the content of the iterator*/
        template <typename T>
        T BidirectionalIterator<T>::operator*(){

        }
#endif