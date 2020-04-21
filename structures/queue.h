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
queue<T>::queue(int size) {
    data = new T[size];
    capacity = size;
    top = -1;
}
/*Destroyer*/
template <typename T>
queue<T>::~queue() {delete [] data;}
/*Adds an element*/
template <typename T>
void queue<T>::push(T value){
    if(top>=capacity){
        T* newArray;
        resize(newArray);
    }
    ++top;
    data[top]=value;

}
/*Removes an element*/
template <typename T>
void queue<T>::pop(){
    if(!empty()){
        for(int i=0;i<top-1;i++){
            data[i]=data[i+1];
        }
        top--;
    } else{throw new out_of_range("Empty");}
}
/*Returns the top element*/
template <typename T>
T queue<T>::front(){
    if(empty()){throw new out_of_range("Empty");}
    else{ return data[0];}
}
/*Returns the back element*/
template <typename T>
T queue<T>::back(){
    if(empty()){throw new out_of_range("Empty");}
    else{return data[top];}
}
/*The current count of elements*/
template <typename T>
int queue<T>::size(){
    return top+1;
}
/*If the data structure is empty*/
template <typename T>
bool queue<T>::empty(){
return top==-1;
}
template<typename T>
void queue<T>::print(){
    for(int i = top; i >= 0; --i) { cout << data[i] << " -> ";}
    cout<<endl;
}
#endif