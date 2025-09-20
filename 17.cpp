#include<iostream>
using namespace std;

 inline int product(int a, int b){
    //Not recommended to used below lines with inline function
   // static int c=0; //this executes only once
   // c = c +1;  // Next time  function is  run, the value of c will be retained
  // return a*b+c;
  return a*b;
}
 float moneyReceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}

int main(){
 int a, b;
  cout<<"enter the value of a and b"<<endl;
  cin>>a>>b;
  int money = 1000;
  cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year";
  cout<<"For VIP: If you have"<<money<<" Rs in your bank account, you will recive"<<(money, 1.1)<<"Rs after 1 year";
//   cout<<"the product of a and b is"<<product(a,b)<<endl;
//   cout<<"the product of a and b is"<<product(a,b)<<endl;
//   cout<<"the product of a and b is"<<product(a,b)<<endl;
//   cout<<"the product of a and b is"<<product(a,b)<<endl;
//   cout<<"the product of a and b is"<<product(a,b)<<endl;
  return 0;
}
        




