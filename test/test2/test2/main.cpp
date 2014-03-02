/* ******************************************************
 * Split -- split an entry of the form Last/First *
 * into two parts *
 ********************************************************/


#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
     char line[80]; // The input line
     char *first_ptr; // Pointer we set to point to the first name
     char *last_ptr; // Pointer we set to point to the last name
 
     cout << "Enter string\n";
 
     cin.getline(line, sizeof(line));
 
     last_ptr = line; // Last name is at beginning of line
     first_ptr = strchr(line, '/'); // Find slash
 
     // Check for an error
     if (first_ptr == NULL){
         cerr << "Error: Unable to find slash in " << line << '\n';
         exit (8);
     };
     
     *first_ptr = '\0'; // Zero out the slash
     ++first_ptr; // Move to first character of name
 
     cout << "First:" << first_ptr << " Last:" << last_ptr << '\n';
     
     return (0);
 }