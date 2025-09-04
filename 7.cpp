#include<iostream>

using namespace std;

int c = 45;

int main(){

    // **********************Build Data Types*******************
//int a, b , c;
//    cout<<"Enter the value of a:"<<endl;
//    cin>>a;
//    cout<<"Enter the value of b:"<<endl;
//    cin>>b;
//    c = a + b;
//    cout<<"the sum is "<<c<<endl;
//    cout<<"the global c is "<<::c;


//**********************  Float , double and long literals Data Types*******************

//float d = 34.4;
// long double e = 34.4;
// cout<<"the  size of 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"the  size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the  size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the  size of 34.4L is "<<sizeof(34.4l)<<endl;
// cout<<"the  size of 34.4L is "<<sizeof(34.4L)<<endl;
// cout<<" the value of  d is " <<d<<endl<<"the value of e is "<<e;
// cout<<"the value of is"<<d<<endl<<"the value of e is"<<e;

//*************Reference Varibles***************
// Rohan Das-----> Monty ------> Rohu --------> Dangerous coder
// float x = 455;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;

// **************Typecasting*******************
int a =45;
float b = 45.46;
cout<<"the value of a is "<<(float)a<<endl;
cout<<"the value of a is "<<float(a)<<endl;

cout<<"the value  of b is " <<(int)b<<endl;
cout<<"the value of b is "<<int(b)<<endl;
int c = int(b);

cout<<"the expresion is "<<a + b<<endl;
cout<<"the expersion is " <<a +int (b)<<endl;
cout<<"the expresion is "<<a + (int)b<<endl;
    return 0;



}


