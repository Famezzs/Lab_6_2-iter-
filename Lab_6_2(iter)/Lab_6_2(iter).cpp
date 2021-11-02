// Lab_6_2(iter).cpp
// Козубенко Андрій
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами.
// Варіант 10
// Ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::setw;

void CreateArray(int *z, const int size, const int LeftLimit, const int RightLimit);
void PrintArray(int *z, const int size);
double ArithmeticMean(int *z, const int size);

int main()
{
	srand((unsigned)time(NULL));

	int n;
	int A;
	int B;

	cout << "How many elements should a new array consist of?\n"; 
	cout << "n = "; cin >> n;
	cout << endl << "What interval should RNG's results satisfy? (i.e. define [A;B], where A and B are both integers, A < B)\n";
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;

	int *a = new int[n];

	CreateArray(a, n, A, B);
	PrintArray(a, n);

	cout << endl << "The arithmetic mean is:" << setw(5) << ArithmeticMean(a, n);

	delete[] a;
	return 0;
}

void CreateArray(int *z, const int size, const int LeftLimit, const int RightLimit)
{
	int i = 0;
	while (i < size)
	{
		int t = LeftLimit + rand() % (RightLimit - LeftLimit + 1);
		if (t % 2 == 0)
		{
			z[i] = t;
			i++;
		}
	}
}

void PrintArray(int *z, const int size)
{
	cout << endl << "a = " << "{";

	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << z[i];
		if (i != size - 1)
			cout << ",";
	}

	cout << " }\n";
}

double ArithmeticMean(int *z, const int size)
{
	double S = 0;

	for (int i = 0; i < size; i++)
	{
		S += z[i];
	}

	return S / size;
}