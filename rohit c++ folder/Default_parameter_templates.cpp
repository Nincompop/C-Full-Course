#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

template<class T1=int,class T2=char,class T3=float>
class Rohit{
    public:
    T1 a;
    T2 b;
    T3 c;
    Rohit(T1 a, T2 b, T3 c){
        (*this).a=a;
        this->b=b;
        (*this).c=c;
    }
    void Display(){
        cout<<"The integer is: "<<a<<endl;
        cout<<"The char is: "<<b<<endl;
        cout<<"The float is: "<<c<<endl;
    }
};


int main(){
    Rohit<> R(5,'o',5.6);
    R.Display();
    cout<<endl;
    Rohit<double,char,int> h(5.6777,'tiwari',9);
    h.Display();
    return 0;
}