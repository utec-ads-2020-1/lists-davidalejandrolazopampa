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

    void print();
    void resize(T*);
};

//////////Iniciando//////////
template <typename T>
void stack<T>::resize(T *size2) {
    size2=new T[capacity*2];
    for(int i=0;i<size();++i){size2[i]=data[i];}
        delete []data;
        data=size2;
    }
/*constructor*/

template <typename T>
stack<T>::stack(int size){
    capacity = size;
    data=new T[capacity];
    top = -1;
}

/*Destroyer*/
template <typename T>
stack<T>::~stack(){delete [] data;}
/*Adds an element*/
template <typename T>
void stack<T>::push(T value){
    if(top>=capacity){
        T*newArray;
        resize(newArray);
    }data[++top]=value;
}
/*Removes an element*/
template <typename T>
void stack<T>::pop(){
    if(!empty()){
        data[top]=data[top+1];
        top--;}
    else{throw new out_of_range("Empty");}
}
/*Returns the top element*/
template <typename T>
T stack<T>::peak(){
    if(!empty()){return data[top];}
    else{throw new out_of_range("Empty");}
}
/*The current count of elements*/
template <typename T>
int stack<T>::size(){
    return top+1;
}
/*If the data structure is empty*/
template <typename T>
bool stack<T>::empty(){
    return( top==-1);
}
template<typename T>
void stack<T>::print(){
    for(int i = top; i >= 0; --i) { cout << data[i] << " -> ";}
    cout<<endl;
}

#endif