#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {

	string expression;
	double a=0;
	double b=0;
	double c=0;
	double sq_exp=0;
	double root1=0;
	double root2=0;

	cout << "please enter a 2nd funcion in this format \n" ;
	cout << "a*x^2 + b*x + c \n" ;
	cin >> a >> b >> c; 


	//cout << "you have entered.. a=" << a << " b=" << b << " c=" c << "\n";;;

 	root1 = - b / (2 * a);
 	root2 = root1;

 	sq_exp = pow(b,2) - ( 4 * a * c);



 	// imaginary solutions
 	if (sq_exp < 0) {
 		cout << "imaginary roots\n";
 		//TODO: not fnished! 
 		sq_exp = sq_exp * -1;
 		sq_exp = sqrt(sq_exp);
 		sq_exp = sq_exp / (2 * a);

 		cout << "x1=" << root1 << "+"<< sq_exp;
 		cout << "x1=" << root1 << "-"<< sq_exp;  
 	}
 	// one root
 	else if (sq_exp == 0) {
 		cout << "one root:\n";
 		cout << "x=" << root1 << "\n";
 	}
 	else // two roots
 		cout << "two roots:\n";
 		root1= root1 + sqrt(sq_exp) / (2*a);
 		root2= root2 - sqrt(sq_exp) / (2*a);
 		cout << "x1=" << root1 << " x2=" << root2 << "\n";

	// -b/2*a +- sqrt (b^2-4ac)/2*a

	return 0;
}