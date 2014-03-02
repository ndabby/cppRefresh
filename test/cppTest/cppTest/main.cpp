//
//  main.cpp
//  cppTest
//
//  Created by Nadine Dabby on 12/16/13.
//  Copyright (c) 2013 Nadine Dabby. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

using namespace std;

/*
 static string addSpaces(string src){
    int len = src.length();
    string sleft = "";
    for(int i = 0; i< len; i++){
        sleft = src.substr(0, i+1);
        sright = src.substr(i+1, len);
        if (DICTIONARY.contains(sleft) && DICTIONARY.contains(sright)){
            return sleft + " " +sright;
        }
    };
    return src;
 };*/



//Example 1:   Write a function to reverse a string.
static string reverseString(string src){
    int len = src.length();
    static string tmp = "";
    int j = 0;
    for (int i = (len-1); i>=0; i--){
        tmp +=  src[i];
        j++;
    }
    return tmp;
};

//Example 2:  Write function to compute Nth fibonacci number:

int nthFib(int n){
    if (n == 1 || n == 2){
        return 1;
    }
        
    return (nthFib(n-2)+nthFib(n-1));
};

//Example 3:  Print out the grade-school multiplication table up to 12x12

void printTable(int max){
    for( int i = 1; i<= max; i++){
        for (int j = 1; j<=max; j++){
            cout<< i*j << " ";
        }
        cout << endl;
    }
}

//Example 4:  Write a function that sums up integers from a text file, one int per line.
/*
int main (void) {

    ofstream myfile ("example.txt");
    if (myfile.is_open())
    {
        myfile << "38\n";
        myfile << "22\n";
        myfile.close();
        
    }
    else cout << "Unable to open file";

    ifstream tmp;
    string line;
    int total = 0;
    tmp.open("example.txt");
    while ( getline (tmp,line) )
    {
        cout << line << '\n';
        total+= stoi(line);
    }
    myfile.close();
    
    cout<< total;
    
    
    return 0;
}
*/

//Example 5:  Write function to print the odd numbers from 1 to 99.

void printOdds(int max){
    for (int i = 1; i<=max; i+=2){
        cout << i << " ";
    };
    return;
}

//Example 6:  Find the largest int value in an int array.

int findBig(int stuff[]){
    int len = sizeof(stuff);
    int big = -100;
    for (int i = 0; i< len; i++){
        if (big < stuff[i]){
            big = stuff[i];
        }
    }
    return big;
}

//Example 7:  Format an RGB value (three 1-byte numbers) as a 6-digit hexadecimal string.

string rgbHex(int r, int g, int b){

    stringstream buff;
    string hexoutput;
    buff << std::hex << r << g << b;
    
    hexoutput = buff.str();
    
    return hexoutput;
}

//Find the sum of all the multiples of 3 or 5 below 1000

int summultiples(int max){
    int total = 0;
    for (int i = 0; i< max; i++){
        if(i%3 == 0 || i%5 == 0){
            total+=i;
        }
    
    }
    return total;
}



int main(void)
{

    string word = "olleh";
    
    string backward = reverseString(word);

    // insert code here...
    cout << backward <<endl;
    //cout<< "test";
    cout << nthFib(7)<<endl;
    
    printTable(12);
    
    printOdds(100);
    
    int array [5] = {1, 5, -100, 2348, 5};
    
    cout<< endl << findBig(array);
    
    cout<< endl << rgbHex(255, 0, 128);
    
    cout <<endl << summultiples(1000);
    
    return 0;
}

