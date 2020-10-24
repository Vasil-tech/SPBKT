#include <iostream> 

using namespace std;

class One 
{ 
	public: One(int = 1);//конструктор по умолчанию 
	void print(); 
	private: int a; 
};
class Two 
{
	public: Two(int = 1);//конструктор по умолчанию 
	void print(); 
	private: int a; 
}; 
class OnePlusTwo_Three 
{	
	public: OnePlusTwo_Three(int=1, int=1);//конструктор по умолчанию 
	void print(); 
	private: One o; 
			 Two t; 
}; 
One::One(int a1) 
{ 
	a = a1; 
} 
void One::print() 
{ 
	cout << a << endl; 
} 
void Two::print() 
{ 
	cout << a << endl; 
} 
Two::Two(int a2) 
{ 
	a = a2; 
} 
OnePlusTwo_Three::OnePlusTwo_Three(int a1, int a3) :o(a1), t(a3){ } 
void OnePlusTwo_Three::print() 
{ 
	o.print(); 
	t.print(); 
} 
int main() 
{ 
	OnePlusTwo_Three opt(6, 8); 
	opt.print(); 
	return 0; 
}