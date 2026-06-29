#include<iostream>
#include<math.h>
using namespace std;

void findRoots(int a, int b, int c){
    int disc = b * b - 4 * a * c;
    if(disc > 0){
        double root1 = (-b + sqrt(disc)) / (2 * a);
        double root2 = (-b - sqrt(disc)) / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    }else if(disc == 0){
        double root = (double)(-b) / (2 * a);
        cout << "The root is: " << root << endl;
    }else{
        cout << "No real roots." << endl;
    }
}
int main(){
    int a, b, c;
    cout<< "Enter the coefficient a, b and c of the quadratic equation: ";
    cin>> a >> b >> c;
    findRoots(a, b, c);
}
