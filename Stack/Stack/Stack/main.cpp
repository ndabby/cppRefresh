//
//  main.cpp
//  Stack Program: A file implementing a simple stack class
//
//  Created by Nadine Dabby on 2/21/14.
//  Copyright (c) 2014 Nadine Dabby. All rights reserved.
//

#include <stdlib.h>
#include <iostream>

using namespace std;

const int STACK_SIZE = 100; // Maximum size of a stack


// The stack itself
class stack {
    private:
        int count; // Number of items in the stack
        int data[STACK_SIZE]; // The items themselves
    public:
        stack(void){  //initialize the stack
                count = 0; // Zero the stack
        };
   void push(const int item){
        data[count] = item;
        count++;
    }; //push an item onto the stack
    
    int pop(void){
        // Stack goes down by one
        count--;
        // Then we return the top value
        return (data[count]);
    }; //pop an item off of the stack

};



int main(int argc, const char * argv[])
{
    stack a_stack; // Stack we want to use
    
    // Push three values on the stack
    a_stack.push(1);
    a_stack.push(2);
    a_stack.push(3);
    
    // Pop the items from the stack
    cout << "Expect a 3 ->" << a_stack.pop() << '\n';
    cout << "Expect a 2 ->" << a_stack.pop() << '\n';
    cout << "Expect a 1 ->" << a_stack.pop() << '\n';
    
    return 0;
}

