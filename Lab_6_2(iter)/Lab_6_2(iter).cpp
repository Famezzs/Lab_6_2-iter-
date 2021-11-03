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

	if (n <= 0)
	{
		std::cerr << "Number of elements in an array should be > 0";
		return -1;
	}

	cout << endl << "What interval should RNG's results satisfy? (i.e. define [A;B], where A and B are both integers, A < B)\n";
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;

	if (A >= B)
	{
		std::cerr << "A must be < B";
		return -1;
	}

	int *a = new int[n];

	CreateArray(a, n, A, B);
	PrintArray(a, n);

	cout << endl << "The arithmetic mean is: " << ArithmeticMean(a, n);

	delete[] a;
	return 0;
}

void CreateArray(int *z, const int size, const int LeftLimit, const int RightLimit)
{
	for (int i = 0; i < size; i++)
	{
		z[i] = LeftLimit + rand() % (RightLimit - LeftLimit + 1);
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
	int n = 0;

	for (int i = 0; i < size; i += 2)
	{
		S += z[i];
		n++;
	}

	return S / n;
}