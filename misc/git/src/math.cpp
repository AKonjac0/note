#include <cmath>

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

double square_root(double x){
	return std::sqrt(x);
}


double power(double base, int exponent){
	return std::pow(base, exponent);
}

