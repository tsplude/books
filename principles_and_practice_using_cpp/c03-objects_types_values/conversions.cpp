#include <iostream>

using namespace std;

int main()
{

	double x {2.4};
	int y {x};

	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d  == " << d << endl
			 << "i  == " << i << endl
			 << "i2 == " << i2 << endl
			 << "char(" << c << ")" << endl << endl;
	}
}
