#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    //int count;

    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;

    }
    void getData(void){
        cout<<"The id of this employee is" <<id<<" and this is employee number"<<count<<endl;
    }

    static void getCount(void){
        cout<<"This value of Count is "<<count<<endl;
    }
};

int Employee :: count; // Default value is 0

int main(){
    Employee aryan,bablu, jayant;
    //aryan.id = 1;
    //aryan .count=1; //cannot do this as id and count are private

    aryan.setData();
    aryan.getData();
    Employee::getCount();

    bablu.setData();
    bablu.getData();
    Employee::getCount();

    jayant.setData();
    jayant.getData();
   Employee::getCount();

    return 0;
};