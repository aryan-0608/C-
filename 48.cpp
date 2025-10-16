#include <iostream>
using namespace std;

/*
Case1:
class B:public A{
  //order of excution of consrructor --> first A() than b()

};

Case2:
class A: public B, public c{
    // order of execution of constructor --> b() than c() and A()
};

case3: public B, virtual public c{
   //ordernof excution of constructor --> c() then b() and A()
};
*/

class Base1{
    int data1;
    public:
      Base1(int i){
        data1 =i;
        cout<<"Base1 class constructor called "<<endl;
      }
    void printDataBase1(void){
        cout<<"Th value of  data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
      Base2(int i){
        data2 =i;
        cout<<"Base2 class constructor called "<<endl;
      }
    void printDataBase2(void){
        cout<<"Th value of  data2 is "<<data2<<endl;
    }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
       Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;

       }
       void printDataDerived(void)
       {
        cout <<"The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is "<< derived2 << endl;
       }
};
int main(){
    Derived aryan(1,2,3,4);
    aryan.printDataBase1();
    aryan.printDataBase2();
    aryan.printDataDerived();
    return 0;
}