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
	int pop();
	int top();

	int size();
	bool empty();

    //////////Iniciando//////////
    /*constructor*/
    template <T>
    stack(int value){

    }
    /*Destroyer*/
    template <T>
    ~stack(){

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

};

#endif