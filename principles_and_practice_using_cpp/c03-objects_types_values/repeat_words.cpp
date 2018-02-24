#include <iostream>

using namespace std;

int main()
{
	string previous = "";
	string current;
	while (cin >> current) {
		if (current == previous) {
			cout << "Found duplicate: " << current << endl;
		}
		else {
			cout << "Not a duplicate: " << current << endl;
		}
		previous = current;
	}
}
