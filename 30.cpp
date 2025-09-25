#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
    Complex(int, int); // Constructure declarations
    void printNumber()
    {
        cout<<"Your number is " <<a <<" + "<< b << " i " <<endl;
    }
};
Complex ::Complex(int x, int y) // This ia a Parameterzes construxtor as it take no Parameters

{
     a = x;
     b = y;
}

int main(){
    //Implicit call
    Complex  a(4, 10);

    // Explicit Call
    Complex b = Complex(5, 7);
    a.printNumber();
    b.printNumber();
    return 0;

}
