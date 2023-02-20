#include<iostream>
using namespace std;

bool EqualArray(int jml1, int data1[], int jml2, int data2[]){
    bool status=true;
    if(jml1!=jml2){
        status=false;
    }
    int urutan=0;
    while(status==true&&urutan<jml1){
        if(data1[urutan]!=data2[urutan]){
            status=false;
            break;
        }
        urutan++;
    }
    return status;
}
int main(){
    int jml1, jml2; 
    cin>>jml1>>jml2; 
    int data1[jml1], data2[jml2];
    for(int indeks=0; indeks<jml1; indeks++){
        cout<<"input data1 indeks ke-"<<indeks<<": ";
        cin>>data1[indeks];
        cout<<"input data2 indeks ke-"<<indeks<<": ";
        cin>>data2[indeks];
    }
    cout<<EqualArray(jml1, data1, jml2, data2);
}