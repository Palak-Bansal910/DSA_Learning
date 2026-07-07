#include<set>
#include<map>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void printMap(map<int,string> &m){
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    map<int,string> m = {{1,"one"},{2,"two"},{3,"three"}};
    printMap(m);
    return 0;
}