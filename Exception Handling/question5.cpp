#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"Please enter value of A : ";
    cin>>a;
    cout<<"Please enter value of B : ";
    cin>>b;
    try{
        if(b == 0){
            throw b;
        }
        c = a/b;
        cout<<"Value of C = "<<c;
    }
    catch(int x){
        cout<<"Error : b = "<<x<<endl;
    }


}