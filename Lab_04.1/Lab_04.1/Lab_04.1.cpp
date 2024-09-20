#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// перший спосіб
	int N;
	int k;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	k = 1;
	while (k <= N)
	{
		S += 1.0 /((2 * k + 1) * (2 * k + 1));
		k++;
	}
	cout << "S = " << S << endl;
	// другий спосіб
	S = 0;
	k=1;
	do {
		S += 1.0 / ((2 * k + 1) * (2 * k + 1));
		k++;
	} while (k <= N);
	cout << "S = " << S << endl;
	// третій спосіб
	S = 0;
	for (k = 1; k <= N; k++)
	{
		S += 1.0 / ((2 * k + 1) * (2 * k + 1));
	}
	cout << "S = " << S << endl;
	// четвертий спосіб
	S = 0;
	for (k = N; k >= 1; k--)
	{
		S += 1.0 / ((2 * k + 1) * (2 * k + 1));
	}
	cout << "S = " << S << endl;

	return 0;
}