#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
class Rohit
{
public:
    T1 a;
    T2 b;
    Rohit(T1 a, T2 b)
    {
       this->a = a;
        this->b = b;
    }

    void Display()
    {
        cout << "The integer is: " << a << endl;
        cout << "The character is: " << b << endl;
    }
};

int main()
{
    Rohit<int, char> R(2, 'g');
    R.Display();
    return 0;
}