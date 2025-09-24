#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i

//6 + 12i
class complex{
    int a, b;
    public:
    void SetNumber(int n1, int n2){
        a = n1;
        b = n2;
   }
   friend complex sumcomplex (complex o1, complex o2);
    void printNumber(){
    cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
   }

};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.SetNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;

}

 int main(){
    complex c1,c2, sum;
    c1.SetNumber(1, 4);
    c2.SetNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();


 }