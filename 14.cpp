#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salary;
} ep;

int main(){
    ep aryan;
    //struct employee aryan;
    struct employee bablu;
    struct employee mangle;


   // struct employee aryan;
    aryan.eId=1;
    aryan.favchar = 'c';
    aryan.salary = 100;
    cout<<"the value is "<<aryan.eId<<endl;
    cout<<"the value is "<<aryan.favchar<<endl;
    cout<<"the value is "<<aryan.salary<<endl;


    return 0;

    
}