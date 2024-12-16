#include <iostream>
using namespace std;
int main()
{
	int m[2][3], i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "enter value=";
			cin >> m[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
	return 0;
}