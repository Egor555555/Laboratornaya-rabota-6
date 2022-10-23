#include <iostream>
#include "Drobi.h"
using namespace std;

int a, b, c, d, e, f;

void process() {
	sokr(&a, &b);
	sokr(&c, &d);
	sokr(&e, &f);
	sub(&a, &b, &c, &d);
	mult(&a, &b, e, f);
	sokr(&a, &b);
}
double otvet(double a, double b) {
	return a / b;
}

void main() {
	cin >> a >> b >> c >> d >> e >> f;
	cout << "(" << a << "/" << b << "-" << c << "/" << d << ")" << "*" << e << "/" << f << " = ";
	process();
	cout << a << "/" << b << " = " << otvet(double(a), double(b));
}
