#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Connecting our file with Aout stream
    // ofstream Aout("sample60.txt");

    // // Creating a name string and filling it  with the string entered by the user
    // cout<<"Enter your name";
    // string name;
    // cin>>name;

    // //Write a string to the file
    // Aout<<"My name is " + name;

    // Aout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    return 0;
}
