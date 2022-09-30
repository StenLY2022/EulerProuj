#include <iostream>
#include <time.h>
#include <random>

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
//
int signal(double a[], int n)
{
	int it(0);
	for (int i(0); i < n; i++)
	{
		if (a[i] < 0)
		{
			it++;
		}
	};
	return it;
};
//
 unsigned long long MAX_MIN(double a[], int n)
{
	 unsigned long long resultat(0);
	 int flag1(0), flag2(0);
	 int t(a[0]), f(a[0]);
	 for (int i(1); i <= n; i++)
	 {
		 if (t > a[i])
		 {
			 t = a[i];
			 flag1 = i;
		 };
		 if (f < a[i])
		 {
			 f = a[i];
			 flag2 = i;
		 }
	 };
	 if (flag1 < flag2)
	 {
		 for (int i(flag1); i < flag2; i++)
		 {
			 resultat *= i;
		 }
	 };
	 if (flag1 > flag2)
	 {
		 for (int i(flag2); i < flag1; i++)
		 {
			 resultat += i;
		 }
	 };
	 return resultat;

};
 //
 void bublesort(double a[], int n)
 {
	 for (int i(0); i < n; i++)
	 {
		 for (int j(i); j < n; j++)
		 {
			 if (a[i] > a[j])
			 {
				 std::swap(a[i], a[j]);
			 };
		 };
	 };
 };

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int n(0);
	std::cin >> n;
	double* a = new double[n];
	
	std::cout << std::endl;

	randomizer(a, n);
	int resultat = signal(a, n);
	std::cout << resultat << std::endl;
	unsigned long long R = MAX_MIN(a, n);
	std::cout << R;
	bublesort(a, n);
	for (int i(0); i < n; i++)
	{
		std::cout << i << " ";
	};




	return 0;
}
//----------------- realisingPrototips
