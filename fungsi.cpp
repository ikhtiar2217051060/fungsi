#include<iostream>
using namespace std;

int fungsi(int x, int p, int q, int r){
    int y;
    y=p*x*x+q*x+r;
    return y;
}
int main(){
    int x, a, b, c;
    cout<<"masukkan nilai x: ";
    cin>>x;
    cout<<"masukkan nilai a: ";
    cin>>a; 
    cout<<"masukkan nilai b: ";
    cin>>b;
    cout<<"masukkan nilai c: ";
    cin>>c;
    cout<<"hasil dari fungsi "<<a<<"x^2+"<<b<<"x"<<"+"<<c<<" = ";
    cout<<fungsi(x, a, b, c);
    return 0;
}