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

    void push(T);//{insert(end(),T);size_m++}
    void pop();//{erase(begin());size_m--;}
    T front();//{return *begin();}
    T back();

    int size();//{return size_m;}
    bool empty();//{return size_m==0;}
    void print();
    void resize(T*);//aumentar tamaño
};

//////////Iniciando//////////
template<typename T>
void queue<T>::resize(T *size2){
    size2=new T[capacity*2];
    for(int i=0;i<size();++i){size2[i]=data[i];}
    delete []data;
    data=size2;
}
/*constructor*/
template <typename T>
queue<T>::queue(int size){
    capacity=size;
    data=new T[capacity];
}
/*Destroyer*/
template <typename T>
queue<T>::~queue() {delete [] data;}
/*Adds an element*/
template <typename T>
void queue<T>::push(T value){
        data[top]=value;
        top++;
}
/*Removes an element*/
template <typename T>
void queue<T>::pop(){
    if(empty()){}
    else{
        for(int i=0;i<top;++i)
        {data[i]=data[i+1];}
    }
}
/*Returns the top element*/
template <typename T>
T queue<T>::front(){
    if(empty()){}
    else{ data[0];}
}
/*Returns the back element*/
template <typename T>
T queue<T>::back(){
    if(empty()){}
    else{data[top-1];}
}
/*The current count of elements*/
template <typename T>
int queue<T>::size(){
    return top;
}
/*If the data structure is empty*/
template <typename T>
bool queue<T>::empty(){
return top==0;
}
template<typename T>
void queue<T>::print(){

}
#endif