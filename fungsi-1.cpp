#include<iostream>
using namespace std;

int SumArray(int jml, int data[]){
    int Sum=0;
    for(int indeks=0; indeks<jml; indeks++){
        Sum+=data[indeks];
    }
    return Sum;
}

int main(){
    int jml; cin>>jml;
    int data[jml];

    for(int indeks=0; indeks<jml; indeks++){
        cout<<"masukkan data ke-"<<indeks+1<<": ";
        cin>>data[indeks];
    }
    cout<<SumArray(jml, data);;
    return 0;
}