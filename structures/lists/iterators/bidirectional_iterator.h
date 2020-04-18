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
        BidirectionalIterator<T> BidirectionalIterator<T>::operator=(BidirectionalIterator<T> Nodes){
            this->current = Nodes.current;
            return *this;
        }
        /*Returns if the iterator is different from another iterator*/
        template <typename T>
        bool BidirectionalIterator<T>::operator!=(BidirectionalIterator<T> Nodes){
            return (this->current != Nodes.current);
        }
        /*Advance one position*/
        template <typename T>
        BidirectionalIterator<T> BidirectionalIterator<T>::operator++() {
            //if (this->current == nullptr){throw out_of_range("Invalid Operation!");}
            //return this->current = this->current->next;

            if(this->current){
                this->current = this->current->prev;

            }
            return *this;
        }
        /*Goes back one position*/
        template <typename T>
        BidirectionalIterator<T> BidirectionalIterator<T>::operator--(){
            //if(this->current == nullptr){throw out_of_range("Invalid Operation!");}
            //return this->current = this->current->prev;

            if(this->current){
                this->current = this->current->prev;
            }
            return *this;
        }
        /*Returns the content of the iterator*/
        template <typename T>
        T BidirectionalIterator<T>::operator*(){
            //if(this->current == nullptr){throw out_of_range("Invalid Operation!");}
            //return this->current->data;
            return this->current->data;

        }

#endif