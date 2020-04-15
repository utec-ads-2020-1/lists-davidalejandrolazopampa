#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../node.h"

// TODO: Implement all methods
template <typename T> 
class ForwardIterator {
    private:
        Node<T> *current;

    public:
        ForwardIterator();
        ForwardIterator(Node<T>*);

        ForwardIterator<T> operator=(ForwardIterator<T>);

        bool operator!=(ForwardIterator<T>);

        ForwardIterator<T> operator++();

        T operator*();

        //////////Iniciando//////////
        ForwardIterator(){

        }
        ForwardIterator(Node<T>*){

        }
        /*Equals an iterator to another*/
        ForwardIterator<T> operator=(ForwardIterator<T>){

        }
        /*Returns if the iterator is different from another iterator*/
        bool operator!=(ForwardIterator<T>){

        }
        /*Advance one position*/
        ForwardIterator<T> operator++(){

        }
        /*Goes back one position*/
        ForwardIterator<T> operator--(){

        }
        /*Returns the content of the iterator*/
        T operator*(){

        }
};

#endif