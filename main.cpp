#include <iostream>
#include "ArrayQueue.hpp"
using namespace std;

int main()
{
    ArrayQueue<int> q(5);
    cout << "Welcome to the Program, we are now enqueuing elements to the array..." << endl;
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    cout << "Enqueued elements: " << endl;
    q.display();

    cout << "The frontIndex is " << q.front() << endl;
    cout << "The backIndex is " << q.back() << endl;

    ArrayQueue<int> q1(5);
    cout << "We are now going to copy the queue..." << endl;
    cout << "Here is the copied queue: " << endl;
    q1.copy(q);
   

    cout << "We are now going to dequeue the front element" << endl;
    q.dequeue();
    cout << "Here is the new list: " << endl;
    q.display();

    cout << "Here is the length of the array: " << q.getLength() << endl;
    cout << "The program is finished. Thank you" << endl;


}