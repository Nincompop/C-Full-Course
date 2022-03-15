/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] ={1,2,3};
    for (int i=0; i<5; i++)
    cout<<a[i]<<endl;
    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={12,14,15,23,45};
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<a+1<<endl;
    cout<<&a+1<<endl;


    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

//void function(char**);
void function (char** ptr)
{
    char* ptr1;
    ptr1 =(ptr += sizeof(int));
    cout<<ptr1;
}

int main(){
    char* arr[]= {"ant", "bat"};
    function(arr);
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=5, j=0;
    while (i-- || j++)
    {
        cout<<i<<" "<<j<<",";
    }

    return 0;
}

