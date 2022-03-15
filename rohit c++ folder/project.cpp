#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream f;
    f.open("timetable.txt");
    if (!f)
    {
        cout<<"File not opened"<<endl;
    }
    f<<"hii";
    f.close();
    return 0;
}