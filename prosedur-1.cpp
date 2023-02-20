#include<iostream>
using namespace std;

void polaSegitiga(int a, int b){
    for(int x=1; x<=b; x++){
        for(int y=a; y<=x; y++){
            cout<<y<<" ";
        }
        if(x>=a){
            cout<<endl;
        }
        
    }
}

int main(){
    int nawal, nakhir;
    cout<<"masukkan batas awal: ";
    cin>>nawal;
    cout<<"masukkan batas akhir: ";
    cin>>nakhir;

    polaSegitiga(nawal, nakhir);
}