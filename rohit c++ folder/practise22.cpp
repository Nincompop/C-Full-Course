#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=0;
    while(i<=n/2){
        cout<<i<<" + "<<n-i<<" = "<< n<<endl;
        i++;
    }
    return 0;
}