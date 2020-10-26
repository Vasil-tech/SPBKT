#include <iostream> 

using namespace std;

class One 
{ 
	friend class Two; 
	public: One(int = 1); 
	private: int a; 
};
class Two 
{ 
	public: int ret_value(One o1, int v); 
};
One::One(int a1) 
{ 
	a = a1; 
} 
int Two::ret_value(One o1, int v) 
{ 
	o1.a = v; 
	return v; 
} 
int main() 
{ 
	setlocale(LC_ALL, "russian");
	Two t; 
	One o1; 
	int v, r; 
	cout << "Введите число, чтобы вывести его далее " << endl; 
	cin >> v; 
	r = t.ret_value(o1,v); 
	cout << endl;
	cout << r << endl; 
	return 0;
}
