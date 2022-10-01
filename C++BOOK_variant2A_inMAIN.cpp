// ЗАДАЧАЧ: В одном массиве, состоящем из n элементов вычислить: 1)Сумму положительных элементов массива, 2)Произведение элементов массива, расположенных между максимальным и минимальным
// элементом и упорядачить элементы массива по убыванию
#include <iostream> //Библиотека ввода выво для использования объектов cin(вод с клавиатуры) и cout(вывод в поток на консоль)
#include <random> //Работа с генерацией случайных (псевдоранждома) чисел для функции rand()
#include <time.h> // Для настоящего рандома

//----------------- defines: ОБЪЯВЛЕНИЯ:

//----------------- namespaces Пронстранства имён

//----------------- Clas and Struct Объявления классов и структур

//----------------- functions Объявления функции
void randomizer(double a[], int n) // функция которая НЕвозвращает значения (void - не возвращает значение) - в данном случае возвращает случайное значение
{
	srand(time(NULL)); // функиция которая создаёт реальный рандом
	for (int i(0); i < (n / 2); i += 2) // объявление цикла от нуля до n/2
	{
		a[i] = rand() % 50; // заполненяем рандомными числами ячейки массива
		a[i + 1] = rand() % (50 * -1); // для того, что бы в массиве гарантированно были элементы меньше и больше по отношению друг к другу
	};
};
double maxelem(double a[], int n) // функция возвращает вещественное число, предназначена для поиска самого большого элемента
{
	double Em = a[0]; // Объявляем временную перменную Em, котораябудет уничтожена по выходу из цикла
	for (int i(1); i < n; i++) // цикл по проходу элементов массива
	{
		if (Em < a[i]) // если текущий элемент массива меньше по значению чем следующий ТО - 
		{
			Em = a[i];// - ЗАПИСЫВАЕМ следущий в стаус текущего
		};
	};
	return Em; // возвращаем самое большое что мы нашли
};
void summofelement(double a[], int n, unsigned long long *result) // А, вот тут сложно сказать, что я делал
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
