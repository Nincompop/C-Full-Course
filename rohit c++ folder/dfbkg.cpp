#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    int count;
    count = 1;
    if (num%2 != 0){
        cout<<"Enter valid input"<<endl;
        return 0;
    }
    for (int i = 0; i < num; i++)
    {
        if (num % 2 == 0)
        {
            count += 1;
            num /= 2;
            continue;
        }
        
    }
    cout << count<<endl;
    

    return 0;
}