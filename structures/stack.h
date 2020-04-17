#ifndef STACK_H
#define STACK_H

using namespace std;

#define MAX 1000

// TODO: Implement all methods
template <typename T>
class stack {
    T* data;
    int top;
    int capacity;

public:
    stack(int size = MAX);
    ~stack();

    void push(T);
    void pop();
    T peak();

    int size();
    bool empty();
};
//////////Iniciando//////////
/*constructor*/
template <typename T>
stack<T>::stack(int value){

}
/*Destroyer*/
template <typename T>
stack<T>::~stack(){

}
/*Adds an element*/
template <typename T>
void stack<T>::push(T value){

}
/*Removes an element*/
template <typename T>
void stack<T>::pop(){

}
/*Returns the top element*/
template <typename T>
T stack<T>::peak(){

}

/*The current count of elements*/
template <typename T>
int stack<T>::size(){

}
/*If the data structure is empty*/
template <typename T>
bool stack<T>::empty(){

}
#endif