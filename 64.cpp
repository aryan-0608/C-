#include <iostream>
using namespace std;

template <class T>
class Vector{
    public:
    T * arr;
    int size;
      Vector(int m){
      size = m;
      arr = new T[size];
      }

      T dotproduct(Vector & v){
        T d = 0;
        for(int i=0; i< size;i++)
        {
            d += this->arr[i]* v.arr[i];
            
        }
        return d;
     
      }
};

int main(){
    // Vector v1(3);
    // v1.arr[0]= 4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;
    // Vector V2(3);
    // V2.arr[0]= 1;
    // V2.arr[1]= 0;
    // V2.arr[2]=1;
    // int a = v1.dotproduct(V2);

    // cout<<a<<endl;
    // return 0;


    Vector <float> v1(3);
    v1.arr[0]=1.4;
    v1.arr[1]=3.3;
    v1.arr[2]=0.1;
    Vector <float>V2(3);
    V2.arr[0]=0.1;
    V2.arr[1]= 1.90;
    V2.arr[2]=4.1;
    float a = v1.dotproduct(V2);

    cout<<a<<endl;
    return 0;



}
