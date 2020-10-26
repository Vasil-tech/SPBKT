#include <iostream> 
using namespace std;

class Subtraction 
{ 
	public: int funct_Sub(int a, int b); 
}; 
class Sum:public Subtraction 
{
	public: int funct_Sum(int a, int b); 
}; 
int Subtraction::funct_Sub(int a, int b) 
{ 
	return a - b; 
} 
int Sum::funct_Sum(int a, int b) 
{
	return a + b; 
} 
int main() 
{ 
	setlocale(LC_ALL, "Russian");
	Sum s;
	int a = 5; 
	int b = 3; 
	cout << "Разность = " << s.funct_Sub(a, b) << endl;
	cout << "Сумма = " << s.funct_Sum(a, b) << endl; 
	return 0;
}
