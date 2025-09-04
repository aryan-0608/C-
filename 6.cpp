//there are two types of header files:
//1. system header files: it comes with the complier
#include <iostream>
//2.user define header files: it is written by the programer
//#include"this.h" //--> this will produce an error if this .h is no present in the current directory

using namespace std;

int main(){
    //cout<<"this is hello world program";
    int a=4, b=5;
    cout<<"operators in C++:"<<endl;
    cout<<"following are two types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ b is "<<a++<<endl;
    cout<<"the value of a -- b is "<<a--<<endl;
    cout<<endl;

    //Assignment operators --> used to assign value to varibles
    //int a=3, b=9;
    //char d='d';

    //comparison operators 
    cout<<"following are the complarison operators in C++"<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;

    //logical operators
    cout<<"following are the logical operators in C++"<<endl;
    cout<<"the value of this logical operators((a==b) is && (a<b)) is :"<<((a==b) && (a<b))
    <<endl;
    cout<<"the value of this logical or operators ((a==b) && (a<b)) is :"<<((a==b) ||(a<b))
    <<endl;
    
   

    return 0;

}