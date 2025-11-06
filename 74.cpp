#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    /*Functionn object: function warpped in a 
    class so that it avilable like an object*/
    int arr[] = {1,3,4,80,54,77};
    sort(arr, arr+5);
    //sort(arr, arr+6, greater<int>());
    for(int i =0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}