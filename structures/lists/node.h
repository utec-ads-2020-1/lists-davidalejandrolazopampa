#ifndef NODE_H
#define NODE_H

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
    void reverseF(Node<T>* node){
        if(next->next!=node)
            next->reverseF(node);
        next->next=this;
    }
    void reverseCircular(Node<T>* node){

    }
};

#endif