#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;
    cout<< a<< endl;
    a = 6;
    int **q = &p;
    cout<< *q<< endl;
    cout<< p << endl;
    cout<< *p<< endl;
    int *r = nullptr;

    cout<< sizeof(**q)<< endl;
    cout<< sizeof(*q)<< endl;
    cout<< sizeof(p)<< endl;
    cout<< sizeof(*p)<< endl;
    return 0;
}