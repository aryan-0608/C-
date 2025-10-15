#include <iostream>
using namespace std;

/* 
Create 2 classes:
1. simpleCalculator - Take input of 2 number a using function and perforam +, -, *, / and dis display the
result using another function.
2. Scientificcalitar - Take input of a number using a untility function and perform any for scientific
operator of your choice Calculated and display the result using another function.

Create another class HybridCalculated and inheritance it using these 2 classes:
Q1. what types of Inheritance are you using?.
q2. which mode of inheritance are you using?.
Q3.Create an object of HybridCalculatedv and display result of simple and scjentific Calculator.
Q4. How are is code resusability implemented?

*/ 
class SimpleCalculator {
    int a,b;
    public:
      void getData(){
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
      }

      void performOperation(){
        cout<<"The value of a+ b is:"<<a + b<<endl;
        cout<<"The value of a- b is:"<<a - b<<endl;
        cout<<"The value of a* b is:"<<a * b<<endl;
        cout<<"The value of a / b is:"<<a / b<<endl;
      }

    };
int main(){

    SimpleCalculator calc;
    calc.getData();
    calc.performOperation();

    return 0;
}