#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	// VALUES FOR "a"
	cout << "3 x 3 Matrices Addition \n\n";
	cout << "Enter values for 1st Matrix \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Enter value : ";
			cin >> a[i][j];
		}
		cout << '\n';
	}
	// VALUES FOR "b"
	cout << "\nEnter values for 2nd Matrix \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Enter value : ";
			cin >> b[i][j];
		}
		cout << '\n';
	}
	// FORMULA
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
	}
	// OUTPUT
	cout << "\nThe SUM of the Given Matrices is :: \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << a[i][j] << '+' << b[i][j] << '=' << c[i][j];
		cout << setw(7) << left << c[i][j];
		cout << endl;
	}
	return 0;
}
