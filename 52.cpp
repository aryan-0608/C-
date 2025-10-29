#include <iostream>
using namespace std;

int main(){

    int a= 345;
    float b= 8.3;
    void *ptr;
    ptr = &b;
    printf("the value of a is %f\n", *(  ( float *) ptr  ));
    ptr = &a;
    printf("the value of a is %d\n ",*((int *)ptr));


    return 0;
}