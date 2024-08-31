#include <iostream>
using namespace std;

int main() {
	//create buckets
	int a,b,c;
	
	//read inputs
	cin >> a;
	cin >> b;
	cin >> c;
	
	//garbage values
	cout << "A " << a << "B " << b << "C " << c << endl;
	
	//sum
	int sum = a+b+c;
	cout << sum << endl;
	return 0;
}