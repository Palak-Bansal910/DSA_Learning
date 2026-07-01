#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2;
    cout<< str1.size()<<endl;
    cout<<str1[3]<<endl;
    cout<<str1.find("lo")<<endl;
    cout<<str1.substr(1,3)<<endl;
    cout<<str1.compare(str2)<<endl;
    cout<<str1.append(" Everyone")<<endl;
    cout<<str1.insert(5," Beautiful")<<endl;
    cout<<str1.erase(5,6)<<endl;
    cout<<str1.replace(5,6,"Beautiful")<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    return 0;
}