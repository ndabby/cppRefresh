//
//  main.cpp
//  LinkedLists
//
//  Created by Nadine Dabby on 2/24/14.
//  Copyright (c) 2014 Nadine Dabby. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "linked.h"

using namespace std;



int main(void)
{
    // New list
    linkedlist list;
    
    // Append nodes to the list
    list.Append(100);
    list.Print();
    list.Append(200);
    list.Print();
    list.Append(300);
    list.Print();
    list.Append(400);
    list.Print();
    list.Append(500);
    list.Print();
    
    // Delete nodes from the list
    list.Delete(400);
    list.Print();
    list.Delete(300);
    list.Print();
    list.Delete(200);
    list.Print();
    list.Delete(500);
    list.Print();
    list.Delete(200);
    list.Print();
};

