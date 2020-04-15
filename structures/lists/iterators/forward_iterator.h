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


};
//////////Iniciando//////////
template <typename T>
ForwardIterator<T>::ForwardIterator(){

}
template <typename T>
ForwardIterator<T>::ForwardIterator(Node<T> *) {

}
/*Equals an iterator to another*/
template <typename T>
ForwardIterator<T> ForwardIterator<T>::operator=(ForwardIterator<T>) {

}

/*Returns if the iterator is different from another iterator*/
template <typename T>
bool ForwardIterator<T>::operator!=(ForwardIterator<T>){

}
/*Advance one position*/
template <typename T>
ForwardIterator<T> ForwardIterator<T>::operator++() {

}

/*Returns the content of the iterator*/
template <typename T>
T ForwardIterator<T>::operator*() {

}
#endif