#include <iostream>
using namespace std;

int main()
{   
    //int a=10;
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	/*catch (...) {
		cout << "Default Exception\n";
	}*/
	return 0;
}
