#include <iostream>
using namespace std;

 class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
 public:
    void initcounter(void){counter =0;}
    void setPrice(void);
    void displayprice(void);

};

void Shop ::setPrice(void)
{
    cout<< "enter Id of your item no"<< counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter prince of your item" <<endl;
    cin >> itemPrice[counter];
    counter ++;
}

void Shop ::displayprice(void)
{
    for (int i=0; i< counter; i++)
    {
        cout<<"the price of item with Id"<< itemId[i] <<"is"<< itemPrice[i]<<endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayprice();

    return 0;



}