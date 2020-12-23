#include <iostream> 
#include "Triangle.h" 
#include "Point.h" 
#pragma comment( lib, "comctl32" )

using namespace std;
int Menu();
int GetNumber(int, int);
void ExitBack();
void Show(Triangle* [], int);
void Move(Triangle* [], int);
void FindMax(Triangle* [], int);
inline void IsIncluded(Triangle* [], int) {}

int Triangle::count = 0;
int main()
{
	Point p1(0, 0);
	Point p2(0.5, 1);
	Point p3(1, 0);
	Point p4(0, 4.5);
	Point p5(2, 1);
	Point p6(2, 0);
	Point p7(2, 2);
	Point p8(3, 0);
	Triangle triaA(p1, p2, p3, "triaA");
	Triangle triaB(p1, p4, p8, "triaB");
	Triangle triaC(p1, p5, p6, "triaC");
	Triangle triaD(p1, p7, p8, "triaD");
	Triangle* pTria[] = { &triaA, &triaB, &triaC, &triaD };
	int n = sizeof(pTria) / sizeof(pTria[0]);
	bool done = false; while (!done)
	{
		setlocale(LC_ALL, "russian");
		switch (Menu())
		{
		case 1: Show(pTria, n); break;
		case 2: Move(pTria, n); break;
		case 3: FindMax(pTria, n); break;
		case 4: IsIncluded(pTria, n); break;
		case 5: cout << "Конец работы." << endl;
			done = true;
			break;
		}
	}
	return 0;
}
int Menu()
{
	setlocale(LC_ALL, "russian");
	cout << "\n===== Главное меню =====" << endl;
	cout << "1 - вывести все объекты\t 3 - найти максимальный" << endl;
	cout << "2 - переместить\t\t 4 - определить отношение включения" << endl;
	cout << "\t\t 5 - выход" << endl;
	return GetNumber(1, 5);
}
int GetNumber(int min, int max)
{
	int number = min - 1;
	while (true)
	{
		cin >> number;
		if ((number >= min) && (number <= max) && (cin.peek() == '\n'));
		else
		{
			setlocale(LC_ALL, "russian");
			cout << "Повторите ввод (ожидается число от " << min << " до " << max << "):" << endl;
			cin.clear();
			while (cin.get() != '\n') {};
		}
	}
	return number;
}
void ExitBack()
{
	setlocale(LC_ALL, "russian");
	cout << "Нажмите Enter." << endl;
	cin.get();
	cin.get();
}
void Show(Triangle* p_tria[], int k)
{
	setlocale(LC_ALL, "russian");
	cout << "=== Перечень треугольников ===" << endl;
	for (int i = 0; i < k; ++i) p_tria[i]->Show();
	for (int i = 0; i < k; ++i) p_tria[i]->ShowSideAndArea();
	ExitBack();
}
void Move(Triangle* p_tria[], int k)
{
	setlocale(LC_ALL, "russian");
	cout << "======= Перемещение ======" << endl;
	ExitBack();
}
void FindMax(Triangle* p_tria[], int k)
{
	setlocale(LC_ALL, "russian");
	cout << "= Поиск максимального треугольника =" << endl;
}
void Islncluded(Triangle* p_tria[], int k)
{
	setlocale(LC_ALL, "russian");
	cout << "===== Отношение включения =====" << endl;
	ExitBack();
}
