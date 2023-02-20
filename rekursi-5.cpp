#include<iostream>
using namespace std;

int fibo(int arr[], int indeks){
    if(indeks<2){
        arr[indeks]=indeks;
        return indeks;
    }else{
        arr[indeks]=fibo(arr, indeks-1)+fibo(arr, indeks-2);
        return arr[indeks];
    }
}
int main(){
    int batas, mulai;
    cin>>batas;
    int data[batas];
    fibo(data, batas);
    for(int indeks=0; indeks<batas; indeks++){
        cout<<data[indeks]<<" ";
    }
    return 0;
}