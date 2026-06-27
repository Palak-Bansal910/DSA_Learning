#include<iostream>
using namespace std;
int fibonnaci(int n)
{   int a=0,b=1;
    int series;
    for(int i=0;i<(n-2);i++)
    {
        series=a+b;
        cout<<series<<" ";
        cout<<endl;
        a=b;
        b=series;
    }
    return series;

}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<fibonnaci(n);
    cout<<endl;
    return 0;
}