#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//this will not swap a and b
void swap(int a, int b){// temp a b
int temp = a;            // 4 4 5
a = b;                   // 4 5 5 
b = temp;                 // 4 5 4
}
//call by reference using pointer
void swappointer(int* a, int* b){//temp a b
    int temp =*a;     //4 4 5 
    *a = *b;           //4 5 5 
    *b = temp;        //4 5 4

}
//call by reference using C++ reference varible
int &  swapReferencevar(int &a, int  &b){
    int temp = a;     // 4 4 5
    a = b;          // 4 5 5 
    b = temp;        // 4 5 4 
    return a;
}


int main(){
    int x= 4, y =5;
    //cout<<"the sum of 4 and 5  is"<<sum(a,b);
    cout<<"the value of x is "<<x<<" and the value of y is"<<y<<endl;
    //swap(x,y); // this will not swap a and b
     //swappointer(&x, &y); //this will swap a and b using pointer reference
    swapReferencevar(x,y) = 256; //this will swap a and b using reference variables
    cout<<"the value of a is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}