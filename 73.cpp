#include <iostream>
#include <map>
#include <string>

using namespace std;

//Map is an  associative array
int main(){
    map<string, int> markMap;
    markMap["Aryan"] = 98;
    markMap["Jack"]  = 59;
    markMap["rohan"] = 2;

    markMap.insert({{"jayant"s, 23}, {"bablu", 25}});
    map<string,int> :: iterator iter;
    for(iter=markMap.begin(); iter!=markMap.end();iter++){
        cout<<(*iter).first<< " "<<(*iter).second<<"\n";
    }
    cout<<"This size is: "<<markMap.size()<<endl;
    cout<<"The max size is :"<<markMap.max_size()<<endl;
    cout<<"The empty's return value is :"<<markMap.empty()<<endl;
    return 0;
}