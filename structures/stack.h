#ifndef STACK_H
#define STACK_H

using namespace std;

#define MAX 1000 

// TODO: Implement all methods
template <typename T>
class stack {
	T* data;
	int tops;//Variable cambiada por comflicto con funcion top();
	int capacity;

public:

	stack(int size = MAX);
	~stack();

	void push(T);
	int pop();
	int top();

	int size();
	bool empty();

};
//////////Iniciando//////////
/*constructor*/
template <typename T>
stack<T>::stack(int value){
cout<<value;
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
int stack<T>::pop(){

}
/*Returns the top element*/
template <typename T>
int stack<T>::top(){

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