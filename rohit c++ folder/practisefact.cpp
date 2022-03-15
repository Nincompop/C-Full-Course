#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0;
    int fact=1;

    cout << "Enter a number" << endl;
    cin >> x;

    if (x == 0 || x == 1)
    {
        cout << "Factorial is : 1" << endl;
    
    }

    if (x < 0)
    {
        cout << "Enter valid input" << endl;
    
    }

    while(x>1)
    {
        fact *= (x);
        x--;
        
    }
    cout << "factorial of number is: " << fact<< endl;

    return 0;
}