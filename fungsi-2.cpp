#include<iostream>
#include<string>
using namespace std;

bool palindrom(string kata){
    bool status=true;
    int penghitung=0;
    while(penghitung<kata.length()&&status==true){
        if(kata.at(penghitung)!=kata.at(kata.length()-penghitung-1)){
            status=false;
        }
        penghitung++;
    }
    return status;
}
int main(){
    string kata;
    cin>>kata;
    cout<<palindrom(kata);
}