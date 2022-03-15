#include <bits/stdc++.h>
using namespace std;
// Command Line Arguent

int main(int argc, char *argv[])
{
    cout << "No of args: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argument" << i << ": " << argv[i] << endl;
    }
    return 0;
}