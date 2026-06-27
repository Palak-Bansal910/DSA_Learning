#include <iostream>
#include<vector>
using namespace std;
 void sieveofEratothenes(int n)
 { 
   vector<bool> prime(n+1,true);
    for(int i=0;i<=n;i++)
        prime[i]=true;
        prime[0]=false;
        prime[1]=false;
    
        for(int p=2;p*p<=n;p++){
            if(prime[p]==true)
            {
                for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
            }
        }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        cout<<i<<" ";
    }
    cout<<endl;
    
 }

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    sieveofEratothenes(n);
    cout<<endl;
    return 0;
}