#include <iostream>
using namespace std;

int main()
{
	int Num = 0;

	cout << "Dame un numero del 1 al 5000" << endl;
	cin >> Num;

	while (Num < 5000)
	{
		if (Num <= 5000)
		{
			for (int i = Num; i > 0; i--)
			{
				if (Num % i == 0)
				{
					cout << i << endl;
				}
			}
		}
		else
		{
			cout << "Out another number less than 5000 please" << endl;
		}
		return 0;
	}
}