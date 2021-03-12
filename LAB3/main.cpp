#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float result;
	int n;

	cout << "Input variable: ";
	cin >> n;

	switch (n){
		case 1:{
			double a = -8.8 , b = -1.1, x = 0.2, c;

			while (x <= 2) {
				c = sin(pow(x, 2));

				if (x < a)
				{
					result = c*sin(pow(b, 2)*x)+b*log(c*x+a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a<= x) && (x < b))
				{
					result = a+log(b*x)-pow(sin(a+c*x), 2);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(cos(a+b*x)+c*pow(x, 2)));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
				x += 0.2;
			}

			cout << "Completed" << endl;
			break;
		}
		case 2: {
			double a = 2.2, b = 3.3, c, x = 2.2;

			do{
				c = pow(sin(pow(x, 2)), 2);

				if (x < a)
				{
					result = c*sin(pow(b, 2)*x)+b*log(c*x+a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a <= x) && (x < b))
				{
					result = a+log(b*x)-pow(sin(a+c*x), 2);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(cos(a+b*x)+c*pow(x, 2)));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
				x += 0.2;
			} while (x <= 4.2);

			cout << "Completed" << endl;
			break;
		}
		case 3: {
			double a = 4.4, b = 5.5, c, x;

			for (x = 4; x <= 6.2; x += 0.2) {
				c = pow(sin(x), 2);
				if (x < a)
				{
					result = c*sin(pow(b, 2)*x)+b*log(c*x+a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a <= x) && (x < b))
				{
					result = a+log(b*x)-pow(sin(a+c*x), 2);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(cos(a+b*x)+c*pow(x, 2)));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
			}

			cout << "Completed" << endl;
			break;
		}
		default:
			cout << "Not supported variable, try more.";
			break;
	}
	return 0;
}
