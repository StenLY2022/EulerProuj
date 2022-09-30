#include <iostream>
#include <random>
#include <time.h>

//----------------- defines

//----------------- namespaces

//----------------- Clas and Struct

//----------------- functions
void randomizer(double a[], int n)
{
	srand(time(NULL));
	for (int i(0); i < (n / 2); i += 2)
	{
		a[i] = rand() % 50;
		a[i + 1] = rand() % (50 * -1);
	};
};
double maxelem(double a[], int n)
{
	double Em = a[0];
	for (int i(1); i < n; i++)
	{
		if (Em < a[i])
		{
			Em = a[i];
		};
	};
	return Em;
};
void summofelement(double a[], int n, unsigned long long *result)
{
	double resultat(0);
	for (int i(0); i < n; i++)
	{
		if (a[i] > 0)
		{
			resultat = (double)i;

		};

	};
	for (int i(0); i < (int)resultat; i++)
	{
		(*result) += a[i];
	};
	unsigned long long answer(*result);
	std::cout << answer;
	
};
void inter(double a[], int n, const double y, const double q)
{
	int it(0);
	double* Q = new double[n];
	for (int i(0); i < n; i++)
	{
		if (!(a[i] > y && a[i] < q))
		{
			a[i] = 0;
			it++;
		};
	};
	
	for (int i(0); i < n; i++)
	{
		for (int j(i); j < n; j++)
		{
			if (a[j] == 0)
			{
				std::swap(a[j], a[j + 1]);
			};
		};
	};


};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	unsigned long long resultat(0);
	

	int n(0);
	std::cin >> n;
	double* a = new double[n];
	randomizer(a, n);
	resultat = maxelem(a, n);
	std::cout << resultat;
	summofelement(a, n, &resultat);
	std::cout << "input your interval :";
	double q, y;
	std::cin >> q >> y;


	return 0;
}
//----------------- realisingPrototips
