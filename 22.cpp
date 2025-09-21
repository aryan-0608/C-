#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display (void);
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0;i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);

        }
    }
}

void binary::ones_compliment(void)
{
    for (int i =0; i< s.length(); i++){
        if(s. at(i)=='0')
        {
            s.at(i)= '1';
        }
        else
        {
            s.at(i) = '0';
        }
        
    }
}

void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i =0; i <s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    //  oop - classes and objeact

    //  C++ --> initially called  --> c with classes by stroustroup
    //  class --> extension of structure (in c)
    //  structure had limitations
    //        - member are public
    //        - no member
    //        classes --> sreucture + more
    //        classes --> can have methols and properties
    //        classes --> cam make few member as private & few as public
    // structure in C++ are typedefed
    // you can  declared object along with the class declared like this:
      /* class Employee{
              // class definition
       } aryan, bablu,mangle;*/
        //aryan.salary = 8 markes no sense if salary is private
     binary b;
     b.read();
     b.chk_bin();
     b.display();
     b.display();


     return 0;
}