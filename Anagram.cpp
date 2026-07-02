#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch - 'a']++;
        }
        vector<int> freq2(26,0);
        for(char ch : t){
            freq2[ch - 'a']++;
        }
        for(int i = 0; i < 26;i++){
            if(freq[i] != freq2[i]) {
                return false;
            }
        } 
        return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s,t) << endl;
    return 0;    
}