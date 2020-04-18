#ifndef NODE_H
#define NODE_H

#include <algorithm>//swap
template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node<T>* prev;
    /****Destructor*****/
    void killSelf(){
        if(next){
            next->killSelf();
        }
        delete this;
    }
    /**/
    void reverseForward(Node<T>* node){
        if(next->next!=node)
            next->reverseForward(node);
        next->next=this;
    }
    void reverseLinked(Node<T>* node){
        if(next!=node){next->reverseLinked(node);}
        else{swap(prev,next);}
    }
};

#endif