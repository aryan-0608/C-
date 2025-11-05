#include <iostream>
#include<vector>

using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Dislaying tis vector"<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " " ;
        //cout<<v.at(i)<< " ";
    }
    cout<<endl;

}
int main(){
    // Way to create a vector
    vector<int> vec1;
    int element , size=5;
    // zero length vector
    // vector<int> vec2(4); //4-element character vector
    // vector<char> vec3(vec3); // 4- element character vector
    // vector<int> v (6,3); //6 - element vector of 3s
    // vec2.push_back('5');
    // display(vec2);  
    //  vector<char> vec2(4);
     vector<char> vec2(4);
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for(int i = 0; i< size; i++)
    // {
    //     cout<<"Enter an element to add to this vector:";
    //     cin>>element;
    //     vec1.push_back(element);

    // }
    // vec1.pop_back();


    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // //vec1.insert(iter+1, 500 ,566);
    // display(vec1);
    vector<int> vec4(6,13);
    display(vec4);

    return 0;
}