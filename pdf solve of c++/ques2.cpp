/*#include <bits/stdc++.h>
using namespace std;

int main(){
    ccout<<    ;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a =20;
    int &n =a;
    n = a++;
    a=n++;
    cout<<a<<","<<n<<endl;
    return 0;
}