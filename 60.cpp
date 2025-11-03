#include <iostream>
#include <fstream>

/* The useful classes for working with files in C++ are:
1.fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

*/
// In order work with files in C++, you will have to open it . primarily, there are 2 ways to open a file :
// 1. using the constructor
// 2. using the member function open() of the class

using namespace std;

int main(){
    string st = "Aryan Patel";
    string st2;
    // // opening files using constructor
    ofstream out("sample60.txt");// Write opertion
     out<<st;

//     // opening file using constructor and reading it
//     ifstream in("sample60b.txt"); // Read opertion
//    // in >>st2;
//    getline(in,st2);
//    //getline(in,st2);
//      cout<<st2;
    return 0;

    
}
