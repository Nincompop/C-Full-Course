#include <bits/stdc++.h>
using namespace std;

//int FunkAvg1(int a, float b){
//    float c= (a+b)/2;
//    return c;
//}
//
//float FunkAvg2(float a, float b){
//    float c= (a+b)/2;
//    return c;
//}

template<class T1, class T2, class T3>

class Rohit{
    T1 a;
    T2 b;
    public:
    Rohit(T1 a=0, T2 b=0){
        this->a=a;
        this->b=b;
    }

    T3 Funk(T1 x, T2 y){
        T3 z=(x+y)/2;
        return z;
    }
};

int main(){
    //cout<<FunkAvg1(5,4)<<endl;
    //cout<<FunkAvg2(5.0,4.2);
    Rohit<int,float,float> R(5,4.0);
    cout<<R.Funk(5,4.0);
    return 0;
}