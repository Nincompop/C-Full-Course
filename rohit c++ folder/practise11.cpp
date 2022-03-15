/*#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[12] = "Hello World";
    cout<<str<<endl;
    cout<<*str<<endl;
    cout<<&str<<endl;
    //--str;
    cout<<*str<<endl;
    cout<<&str<<endl;
    cout<<str<<endl;
    cout<<str[3]<<endl;
    cout<<&str<<endl;


    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int* ptr = a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    --ptr;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<a+1<<endl;
    cout<<*a<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr[3]<<endl;

    return 0;
}