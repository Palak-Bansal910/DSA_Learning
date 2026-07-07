#include<set>
#include<map>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void printSet(set<int> &s){
    for(auto i : s){
        cout<<i<<" "<<endl;
    }
}
void printUnorderedSet(unordered_set<int> &s){
    for(auto i : s){
        cout<<i<<" "<<endl;
    }
}
int main(){
    set<int> s;
    unordered_set<int> us;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    us.insert(4);
    us.insert(5);
    us.insert(1);
    us.insert(2);
    if(s.find(9) == s.end()){
        cout<<"Not Present"<<endl;
    }else{
        cout<<"Present";
    }
    if(s.count(4) == 1){
        cout<<"Present"<<endl;
    }
    printSet(s);
    printUnorderedSet(us);
    return 0;
}