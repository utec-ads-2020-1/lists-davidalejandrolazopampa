#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

#define MAX 1000

// TODO: Implement all methods
template <typename T>
class queue {
    T* data;
    int top;
    int capacity;

public:
    queue(int size = MAX);
    ~queue();

    void push(T);
    void pop();
    T front();
    T back();

    int size();
    bool empty();
    void print();
    void resize(T*);
};
/*
//////////Iniciando//////////
/*constructor*/
template <typename T>
queue<T>::queue(int value){

}
/*Destroyer*/
template <typename T>
queue<T>::~queue() {

}
/*Adds an element*/
template <typename T>
void queue<T>::push(T value){

}
/*Removes an element*/
template <typename T>
void queue<T>::pop(){

}
/*Returns the top element*/
template <typename T>
T queue<T>::front(){

}
/*Returns the back element*/
template <typename T>
T queue<T>::back(){

}
/*The current count of elements*/
template <typename T>
int queue<T>::size(){

}
/*If the data structure is empty*/
template <typename T>
bool queue<T>::empty(){

}

*/

#endif