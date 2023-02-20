#include<iostream>
using namespace std;

int faktorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return(n*faktorial(n-1));
    }
}
int main(){
    int angka;
    cin>>angka;
    cout<<faktorial(angka);
    return 0;
}