//
//  main.cpp
//  Queue : a first-in, first-out data structure
//
//  Created by Nadine Dabby on 2/22/14.
//  Copyright (c) 2014 Nadine Dabby. All rights reserved.
//

#include <iostream>

using namespace std;

class queue {
private:
    int data[100]; // Data stored in the queue
    int first; // First element in the queue
    int last; // Last element in the queue
public:
    queue(){
        first = 0;
        last = 0;
    }; // Initialize the queue
    // queue(const queue &old_queue)
    // Use automatically generated copy constructor
    // queue operator = (const queue &old_queue)
    // Use automatically generated assignment operator
    // -queue()
    // Use automatically generated destructor
    void put(int item){
        data[last]= item;
        last++;
    };// Put an item in the queue
    int get(void){
        int item = data[first];
        first++;
        return item;
    }; // Get an item from the queue
};






int main(int argc, const char * argv[])
{
    queue a_queue;
    a_queue.put(1); // Queue contains: 1
    a_queue.put(2); // Queue contains: 1 2
    a_queue.put(3); // Queue contains: 1 2 3
    cout << a_queue.get() << '\n'; // Prints 1, queue contains 2 3
    cout << a_queue.get() << '\n'; // Prints 2, queue contains 3
    
    return 0;
}

