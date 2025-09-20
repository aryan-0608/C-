#include <iostream>
using namespace std;

//function prototype
//type function -name (arguments);
//int sum(int a, int b); //--->Acceptable
//int sum(int a,b); //--->Acceptable

int sum(int, int); //-->Acceptable
// void g(void); //--> ACCeptable
void g(); //--> Acceptable


//int sum(int a, int b){
  //  int c = a + b;
    //return c;
//}

int main(){
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actural parameters
    cout<<"the sum is "<<sum(num1,num2);
    g();
    return 0;
}
    int sum(int a, int b){
        //formal parameters a and b will be taking value from actual parametr num1 and num2.
        
    int c = a + b;
      return c;
    }
    void g(){
        cout<<"\nHello, Aryan Patel";
    }
    


