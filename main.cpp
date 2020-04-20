#include <iostream>
#include "test/tester.h"
#include "structures/stack.h"
#include "structures/queue.h"
//#include "structures/lists/list.h"
//#include "structures/lists/forward.h"
//#include "structures/lists/linked.h"
//#include "structures/lists/circular.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;
    //Tester::execute();
    /*
    cout<<"Prueba Stack"<<endl;
    auto* stack1 = new stack<int>(1);
    stack1->push(3);
    stack1->push(13);
    stack1->push(10);
    stack1->print();
    cout << "Peak: " << stack1->peak() << endl;
    stack1->pop();
    cout << "Peak: " << stack1->peak() << endl;
    stack1->print();
    stack1->push(6);
    stack1->print();
    stack1->pop();
    stack1->print();
    stack1->push(100);
    stack1->push(10);
    stack1->print();
    cout << "Peak: " << stack1->peak() << endl;
    cout << "Size: " << stack1->size() << endl;
    delete stack1;
    */
    //-QUEUE test
    auto* queue1 = new queue<int>(6);
    queue1->push(4);
    cout << "Front: " << queue1->front() << endl;
    cout << "Back: " << queue1->back() << endl;
    queue1->print();
    queue1->push(6);
    queue1->push(9);
    queue1->push(1);
    queue1->print();
    cout<<"1"<<endl;
    queue1->pop();
    cout<<"2"<<endl;
    queue1->push(10);
    queue1->push(7);
    queue1->print();
    cout << "Front: " << queue1->front() << endl;
    cout << "Back: " << queue1->back() << endl;
    cout << "Size: " << queue1->size() << endl;
    delete queue1;


    return EXIT_SUCCESS;
}
