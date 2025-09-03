#include<iostream>
using namespace std;
int glo =6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
    int glo= 9;
    glo=78;
    //int a = 4;
    //int b = 8;
    int a=14, b = 3;
    float pi=3.14;
    char c ='a';
    bool is_true = true;
    sum();
    cout<<glo<< is_true;
    //cout<<glo;
    //cout<<"this is tutorial4.\n here the value of a is "<<a<<".\n the value of b is"<< b;
   // cout<<"\nthe value of pi is :"<<pi;
    //cout<<"\nthe value of c is:"<<c;
    return 0;
}