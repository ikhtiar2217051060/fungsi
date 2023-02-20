#include<iostream>
using namespace std;

int jumlahderet(int n){
    if(n==1){
        return 1;
    }else{
        return(n+jumlahderet(n-1));
    }
}
int main(){
    int angka;
    do{
        cin>>angka;
    }while(angka<1);
    cout<<jumlahderet(angka);
    return 0;
}