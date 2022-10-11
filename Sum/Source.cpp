#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

long double sum(double, int);

//Taylor series: x^(1^2) + x^(2^2) + ... + x^(n^2)
//Works bad for values X ∈ (0 ; 1.8) and doesnt work for values n > 15
void main(void) {
	for (int i = 1; i <= 10; i++) {
		double randx = 1.8 + (rand() % 50) + ((rand() % 10) / 10);
		int randn = 1 + (rand() % 15);
		cout << "Your sum: " << sum(randx, randn) << endl;
		cout << "Cmath sum: " << pow(randx, pow(randn, 2)) << endl;
		cout << "" << endl;
	}
}

long double sum(double x, int n) {
	unsigned int nPow = 1;
	long double a = 1;
	long double sum = 0;
	for (int i = 1; i <= n; i++) {
		nPow = i * i;
		for (int j = 1; j <= nPow; j++) {
			a *= x;
		}
		sum += a;
		a = 1;
	}
	return sum;
}