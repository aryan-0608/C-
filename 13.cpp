#include<iostream>
using namespace std;
int main(){
    //Array Example
    int marks [4]= {23,54,67,87};

    int mathmarks[4];
    mathmarks[0] = 23;
    mathmarks[1] = 28;
    mathmarks[2] = 43;
    mathmarks[3] = 29;
    
    cout<<"these are math marks"<<endl;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //you can charge the value of an array
    marks[2] = 22;
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    for(int i =0;i<4;i++)
    {
        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    }

    return 0;
}