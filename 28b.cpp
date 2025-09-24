#include <iostream>
using namespace std;

class c2;

class c1{
    int value1;
    friend void exchange(c1 &, c2 &);
    public:
      void indata(int a){
        value1 = a;
   }

   void display(void){
    cout<< value1 <<endl; 
   }

};

class c2{
  int value2;
  friend void exchange(c1 &, c2 &);
  public:
  void indata(int a){
    value2 = a;
  }
  void display(void){
    cout<< value2 <<endl;
  }

};
/*Trick to swap 2 number a and b :
Temp = a;
b = temp;
*/
void exchange(c1 & x, c2 & y){
    int tmp = x.value1;
    x.value1 = y.value2;
    y.value2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchange become:";
    oc1.display();
    cout<<"The value of c2 after exchange become: ";
    oc2.display();
    return 0;
}