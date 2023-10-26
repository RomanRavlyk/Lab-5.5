#include <iostream>
#include <cmath>

using namespace std;
int bp(int p, double b, int m);


int main() {
	int p;
	double b;
	int m;
	cout << "p= "; cin >> p;
	cout << "b= "; cin >> b;
	cout << "m= "; cin >> m;
	int c = bp(p, b, m);
	double res = c % m;
	cout << res;
}
int bp(int p, double b, int m) {
	if (p == 0) {
		return 1;
	}
	else if (p % 2) {
		return (int) (pow(b, p / 2.0)) * (pow(b, p / 2.0));
	}
	else return b * (pow(b,(p / 2))* pow(b, (p / 2)));
}