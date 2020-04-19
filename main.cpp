#include <iostream>
#include "test/tester.h"
#include "structures/stack.h"

#include "structures/lists/forward.h"
#include "structures/lists/linked.h"
#include "structures/lists/circular.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;
    //Tester::execute();
    //-FORWARD test
    /*
    auto* forward1 = new ForwardList<int>();
    forward1->push_back(3);
    forward1->push_back(6);
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
    //cout << "Index[2]: " <<forward1[3]<<endl;

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
    auto* linked1 = new LinkedList<int>();
    linked1->push_back(3);
    linked1->push_back(5);
    linked1->print();
    linked1->push_front(10);
    linked1->push_front(9);
    linked1->print();
    cout << "Front: " << linked1->front() << endl;
    cout << "Back: " << linked1->back() << endl;
    cout << "Index[0]: " << (*linked1)[0] << endl;
    linked1->sort();
    linked1->print();
    cout << "Front: " << linked1->front() << endl;
    cout << "Back: " << linked1->back() << endl;
    linked1->reverse();
    linked1->print();
    cout << "Front: " << linked1->front() << endl;
    cout << "Back: " << linked1->back() << endl;

    LinkedList<int> to_merge;
    to_merge.push_back(5);
    to_merge.push_back(6);
    to_merge.push_back(10);
    to_merge.print();
    linked1->merge(to_merge);
    linked1->print();
    to_merge.push_back(1);
    to_merge.push_front(2);
    to_merge.print();
    linked1->pop_back();
    linked1->print();

    cout << "Size: " << linked1->size() << endl;
    cout << "Front: " << linked1->front() << endl;
    cout << "Back: " << linked1->back() << endl;
    linked1->pop_front();
    linked1->print();
    cout << "Size: " << linked1->size() << endl;
    cout << "Front: " << linked1->front() << endl;
    cout << "Back: " << linked1->back() << endl;

*/
    cout<<"Prueba Stack"<<endl;
    auto *stack2 = new stack<int>();
    cout<<endl;
    cout<<"Prueba Queue"<<endl;
    return EXIT_SUCCESS;
}
