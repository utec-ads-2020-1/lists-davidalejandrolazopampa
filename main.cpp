#include <iostream>
#include <lists/linked.h>
#include "test/tester.h"
//#include "structures/stack.h"
//#include "structures/lists/forward.h"
//#include "structures/lists/list.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;
    //Prueba Stack
    //auto *stack2 = new stack<int>();
    cout<<endl;

    Tester::execute();

    //-FORWARD test
/*
    auto* forward1 = new ForwardList<int>();
    cout << "Front: " << forward1->front() << endl<< endl<< endl;


    forward1->push_back(3);
    forward1->push_back(6);
    forward1->push_front(1000);
    forward1->push_back(10);
    forward1->push_back(11);
    forward1->print();
    forward1->pop_back();
    forward1->print();
    forward1->push_back(12);
    forward1->push_back(1);
    forward1->print();
    forward1->pop_front();
    forward1->print();
    cout << "Size: " << forward1->size() << endl;
    cout << "Front: " << forward1->front() << endl;
    cout << "Back: " << forward1->back() << endl;

    cout << "Index[2]: " <<forward1->operator[](2)<<endl;
    cout <<"david"<<endl;
    forward1->clear();
    forward1->push_back(2);
    forward1->push_back(9);
    forward1->push_back(1);
    forward1->push_back(8);
    forward1->push_back(3);
    forward1->print();
    cout << "Size: " << forward1->size() << endl;
    cout << "Front: " << forward1->front() << endl;
    cout << "Back: " << forward1->back() << endl;

    forward1->sort();
    forward1->print();
    cout << "Front: " << forward1->front() << endl;
    cout << "Back: " << forward1->back() << endl;
    forward1->push_back(3);
    forward1->print();
    forward1->reverse();
    forward1->print();
    cout << "Front: " << forward1->front() << endl;
    cout << "Back: " << forward1->back() << endl;
    forward1->push_back(7);
    forward1->push_front(11);
    forward1->print();
    cout << "Front: " << forward1->front() << endl;
    cout << "Back: " << forward1->back() << endl;
*/
    //-LINKED test
    /*
    auto * linked1 = new LinkedList<int>();
    linked1->push_back(2);
    linked1->print();
    */

    return EXIT_SUCCESS;
}
