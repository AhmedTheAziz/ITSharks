/*
10-04-2023
Session 17.
DATA STRUCTURE.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
//1-Linked List.
//#include "Linked_List.h"
#include "node_00.h"
//2- STACK.
#include "Stack.h"
// include node_00.h

using namespace std;

int main()
{
	//0- Data Sturcture.
     //0.1- INTRO...
      /*
 2.1.1-QUEUE.  enqueue & dequeue.
 2.1.2-linked List ( unkonw size is okay, pointer ).
 2.1.3- Stacks. (LIFO) (Last IN 1st OUT).
 2.1.4- FIFO (1st IN 1st OUT).
 2.1.5- TREES.
 */

    //1-Linked List.
   // Linked_List l0;

    //2-STACK. 
    //2.1 OPERATIONS.
    int item;
    Stack s;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter number....\n";
        cin >> item;
        s.push(item);
       // s.display();

    }
    s.display();
    cout << s.pop() << "was deleted\n";
    s.display();
	return 0;
}