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
	int pop();
	int front();
    int back();

	int size();
	bool empty();
};
//////////Iniciando//////////
/*constructor*/
template <T>
queue<T>::queue(int value){

}
/*Destroyer*/
template <T>
queue<T>::~queue() {

}
/*Adds an element*/
template <T>
void push(T value){

}
/*Removes an element*/
template <T>
int pop(){

}
/*Returns the top element*/
template <T>
int front(){

}
/*Returns the back element*/
template <T>
int back(){

}
/*The current count of elements*/
template <T>
int size(){

}
/*If the data structure is empty*/
template <T>
bool empty(){

}



#endif