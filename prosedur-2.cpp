#include<iostream>
using namespace std;

void ketupat(int batas){
    for(int baris=1; baris<=batas; baris++){
        for(int kolom=batas-baris; kolom>=1; kolom--){
            cout<<"  ";
        }
        for(int kolom=1; kolom<=baris; kolom++){
            cout<<"  * ";
        }
        
        cout<<endl;
    }
    for(int baris=2; baris<=batas; baris++){
        for(int kolom=1; kolom<=baris-1; kolom++){
            cout<<"  ";
        }
        for(int kolom=batas+1-baris; kolom>=1; kolom--){
            cout<<"  * ";
        }
        cout<<endl;
    }
}
int main(){
    int batas;
    cin>>batas;
    ketupat(batas);
    return 0;
}