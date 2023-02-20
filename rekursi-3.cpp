#include<iostream>
using namespace std;

int FPB(int a, int b){
    if(b==0){
        return a;
    }else{
       int temp;
       temp=a%b;
        return FPB(b, temp);
    }
}
int main(){
   int bil1, bil2;
   cin>>bil1>>bil2;
   cout<<FPB(bil1, bil2);
}