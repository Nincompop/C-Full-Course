/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    bool b;
    a = 12>100;
    b = 12>=100;
    cout<<a<<" "<<b<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;
int a = 1;
int main()
{
    int a = 100;
    {
        int a = 200;
        {
            int a = 300;
            cout << a << ",";
        }
        cout << a << ",";
    }
    cout << a << ",";
    cout << ::a << ",";
    return 0;
}