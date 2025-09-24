#include <iostream>
using namespace std;

// Forword declaration
class Complex;

class calculator{
 public:
     int add(int a, int b){
        return (a + b);
     }
        int sumRealComplex(complex , complex );
            
        
    };

class complex{
    int a, b;

    friend int Calculator :: sumRealComplex(Comlex , Complex );
    public:
    void SetNumber(int n1, int n2){
        a = n1;
        b = n2;
   }

   void printNumber(){
    cout<<"Your number is"<<a<<" + "<<b<<"i"<<endl;
   }
};
int Calculator ::  sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

int main(){
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part pf o1 and o2 is"<<res<<endl;
    return 0;
}