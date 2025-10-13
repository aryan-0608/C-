#include <iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;

};

/*
For a protected member::
    public derivation private Derivation  protected Derivation
1.private member   Not Inhertance       Not Iherited
2.protected member  protected            private  
3.public member        public            private

*/
class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // will not work sin a is protected in both base as well as derived class

    return 0;
}