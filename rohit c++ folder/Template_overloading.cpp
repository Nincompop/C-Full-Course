#include <bits/stdc++.h>
using namespace std;

template <class T>
class Rohit{
    T data;
    public:
    Rohit(T a){
        data = a;
    }
    void Display();

};

template <class T>
void Rohit<T>::Display(){
    cout<<data;
}


int main(){
    Rohit<int> R(6);
    Rohit<char> R1('P');
    R.Display(); 
    cout<<"\n";   
    R1.Display();
    return 0;
}