#include<iostream>
using namespace std;

int Maks(int data[]){
    int maksimal=-99999;
    for(int indeks=0; indeks<4; indeks++){
        if(data[indeks]>maksimal){
            maksimal=data[indeks];
        }
    }
    return maksimal;
}

int main(){
    int data[4];
    for(int indeks=0; indeks<4; indeks++){
        cin>>data[indeks];
    }
    cout<<Maks(data);
}