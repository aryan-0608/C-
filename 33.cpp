#include <iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);  // r can be a value like 0.04
    BankDeposit(int p, int y, float r);  // r can be a value like 14
    void show();

};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }

};

  BankDeposit :: BankDeposit(int p, int y, float r)
  {
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }

}

void BankDeposit :: show(){   
    cout<<endl<<"principal amount was "<<principal
    << ".Return value after "<<years
    << " is"<<returnValue<<endl;
}


int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"enter the value of p y and R"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y,r);
    bd1.show();

    return 0;
}