#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    public:
    //creating a Constructor
    //Cnstructr is a special member function with the same name as of the class
    //It is used to initialize the object f its class
    //It is outomatically invoked whenever an object is created

    Complex(void);   //constructror

    void printNumber()
    {
        cout << "your number is "<< a<< "  + "<<b << " i "<<endl;
    }
};

Complex ::Complex(void)
{

    a = 10;
    b = 4;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;

}