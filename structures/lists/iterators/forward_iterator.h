#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../node.h"

// TODO: Implement all methods
template <typename T> 
class ForwardIterator {
    protected:
        Node<T> *current;
    public:
        ForwardIterator();
        ForwardIterator(Node<T>*);
        ForwardIterator<T> operator=(ForwardIterator<T>);
        bool operator!=(ForwardIterator<T>);
        ForwardIterator<T> operator++();
        T operator*();
        ///////////////////////

};
//////////Iniciando//////////
template <typename T>
ForwardIterator<T>::ForwardIterator():current(){}
template <typename T>
ForwardIterator<T>::ForwardIterator(Node<T> *Nodes):current(Nodes){}
/*Equals an iterator to another*/
template <typename T>
ForwardIterator<T> ForwardIterator<T>::operator=(ForwardIterator<T>) {return (*this);}
/*Returns if the iterator is different from another iterator*/
template <typename T>
bool ForwardIterator<T>::operator!=(ForwardIterator<T> current2){return this->current!=current2.current;}
/*Advance one position*/
template <typename T>
ForwardIterator<T> ForwardIterator<T>::operator++() {
    this->current = this->current->next;
    return (*this);
}
/*Returns the content of the iterator*/
template <typename T>
T ForwardIterator<T>::operator*() {return this->current->data;}

#endif