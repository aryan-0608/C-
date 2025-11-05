#include <iostream>
using namespace std;

template <class T>
class Aryan{
    public:
    T data;
    Aryan(T a){
        data = a;
    }
    void display(){
        cout<<data;
    }
};

void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func (T a){
    cout<<"I am template func()" <<a<<endl;
}

int main(){
    // Aryan<char> h('a');
    // cout<<h.data<<endl;;
    // h.display();
    func(4);// Exact match takes the highest priority
    return 0;
}