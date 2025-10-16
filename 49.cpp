#include <iostream>
using namespace std;
/*
synatx for initialization list in constructor:
constructor (argument -list): initlization- section
{
     assigment + other code;
}

class Test{
int a;
int b;
  public:
    Test(int i, int j): a(i), b(j) {Constructor - body}
};
*/
class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j) 
    //Test(int i, int j) : a(i), b(i+j)
    //Test (int i, int j) : a(i), b(2 * j)
    //Test(int i, int j)  :   a(i), b(a + j)
     //Test(int i, int j)  : b(j), a(i+b)  --> RED Flag this will ceate problem because a
    // will be initialized first
    Test(int i , int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed"<<endl;
        cout << "value of a is "<<a<<endl;
        cout << "value of b is "<<b<<endl;
    }
};
int main(){

    Test t(4,6);

}
