#include <iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    float salary;
      Employee(int inpId){
       id = inpId;
       salary = 34.0;
      }
      Employee(){}

};

//Dereve class syntax
/*-name
Class {{derived -class}}: {{visibility-mode}}   {{base-class-name}}
{
  class numbers/method/etc....
}
  Note:
  1.Default visibility mode id private
  2.public visibility mode: publicc member of the base class become public member of the derived class
  3.private visibility MODE:public member of the base class become private member of the derived class
  4.private member are never inherited
*/

///creating a programmer class derived from Employee Base class
class programmer : public Employee{
    public:
    programmer(int inpId){
        id = inpId;

    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
    
};

int main(){
    Employee aryan(1), Bablu(2);
    cout<<aryan.salary<<endl;
    cout<<Bablu.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout <<skillF.id<<endl;
    skillF.getData();

    return 0;
}