#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node<T>* prev;


    /****Destructor*****/
    /*Clears all the elements*/
    void killSelf(Node<T>* node){
        if(next!=node){next->killSelf(node);}
        delete this;
    }
};

#endif