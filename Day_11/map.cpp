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
    vector<int> v = { 1, 1, 4, 5, 2, 4, 4,1, 2, 5, 3, 2, 1, 4, 5, 6, 7, 8 ,9};
    map<int, int> freq;
    for(auto i : v){
        freq[i]++;
    }
    for(auto i : freq){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}