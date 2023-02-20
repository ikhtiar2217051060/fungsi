#include<iostream>
using namespace std;

int hasilpangkat(int bilangan, int pangkat){
    if(pangkat==0){
        return 1;
    }else{
        return bilangan*hasilpangkat(bilangan, pangkat-1);
    }
}
int main(){
    int bilangan, pangkat;
    cin>>bilangan>>pangkat;
    cout<<hasilpangkat(bilangan, pangkat);
}