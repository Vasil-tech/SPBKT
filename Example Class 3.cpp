#include <iostream>
using namespace std;

struct pair 
{
	char* name; int val; 
}; 
class assoc 
{ 
	pair* vec; 
	int max; 
	int free; 
	public: assoc(int); 
	int& operator[](char*); 
	void print_all(); 
} 
assoc::assoc(int s) 
{ 
	max = (s<16) ? s : 16; 
	free = 0; vec = new pair[max]; 
}
int assoc::operator[](char* p) 
/* работа с множеством пар "pair": поиск p, 
возврат ссылки на целую часть его "pair" 
делает новую "pair", если p не встречалось 
*/ 
{ 
	register pair* pp; 
	for (pp = &vec[free-1]; 
		vec <= pp; pp--) if (strcmp(p,pp->name)==0) return pp->val; 
	if (free == max) 
	{ 
		// переполнение: вектор увеличивается 
		pair* nvec = new pair[max*2]; 
		for (int i = 0; 
		iname = new char [strlen(p)+1];i++); 
		strcpy(pp->name,p); 
		pp->val = 0; // начальное значение: 0 
		return pp->val; 
	} 
	void assoc::print_all() 
	{ 
		for (int i = 0; i>buf) vec[buf]++; 
		vec.print_all(); 
	}
	class assoc 
	{ 
		friend class assoc_iterator; 
		pair* vec; 
		int max; 
		int free; 
		public: assoc(int); 
		int& operator[](char*); 
	};
	class assoc_iterator 
	{
		assoc* cs; // текущий массив assoc 
		int i; // текущий индекс 
		public: assoc_iterator(assoc& s) 
		{	
			cs = &s; 
			i = 0; 
		} 
		pair* operator()()	
		{ 
			return (ifree)? &cs->vec[i++] : 0; 
		} 
	};
	int main() // считает вхождения каждого слова во вводе 
	{
		const MAX = 256; // больше самого большого слова 
		char buf[MAX]; 
		assoc vec(512); 
		while (cin>>buf) vec[buf]++; 
		assoc_iterator next(vec); 
		pair* p; 
		while ( p = next() ) cout << p->name << ": " << p->val << "\n"; 
	}
