#include <iostream>

using namespace std;

int main()
{
	cout << "First name and age:" << endl;
	string name = "?";
	double age = 0.0;
	cin >> name >> age;
	cout << "Hello, " << name << endl;
	cout << "You are " << age * 12.0 << " months old." << endl;
	return 0;
}
