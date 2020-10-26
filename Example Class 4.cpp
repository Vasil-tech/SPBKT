#include <iostream>

using namespace std;

class string 
{ 
	struct srep 
	{ 
		char* s; // указатель на данные 
		int n; // счетчик ссылок 
	}; 
srep *p; 
public: string(char *); // string x = "abc" 
	    string(); // string x; 
		string(string &); // string x = string ... 
		string& operator=(char *); 
		string& operator=(string &); 
		~string(); 
		char& operator[](int i); 
		friend ostream& operator<<(ostream&, string&); 
		friend istream& operator>>(istream&, string&); 
		friend int operator==(string& x, char* s) 
		{ 
			return strcmp(x.p->s, s) == 0; 
		} 
		friend int operator==(string& x, string& y) 
		{ 
			return strcmp(x.p->s, y.p->s) == 0; 
		} 
		friend int operator!=(string& x, char* s) 
		{ 
			return strcmp(x.p->s, s) != 0; 
		} 
		friend int operator!=(string& x, string& y) 
		{ 
			return strcmp(x.p->s, y.p->s) != 0; 
		} 
};
string::string()
{
	string::p = new srep;
	p->s = 0;
	p->n = 1;
}
string::string(char* s)
{
	p = new srep;
	p->s = new char[strlen(s) + 1];
	strcpy(p->s, s);
	p->n = 1;
}
string::string(string& x)
{
	x.p->n++;
	p = x.p;
}
string::~string()
{
	if (--string::p->n == 0)
	{
		delete p->s;
		delete p;
	}
}
string& string::operator=(char* s)
{
	if (p->n > 1)
	{ // разъединить себя 
		p - n--;
		p = new srep;
	}
	else if (p->n == 1)
		delete p->s;
	p->s = new char[strlen(s) + 1];
	strcpy(p->s, s);
	p->n = 1;
	return *this;
}
string& string::operator=(string& x)
{
	x.p->n++;
	if (--p->n == 0)
	{
		delete p->s;
		delete p;
	}
	p = x.p;
	return *this;
}
ostream& operator<<(ostream& s, string& x)
{
	return s << x.p->s << " [" << x.p->n << "]\n";
}
istream& operator>>(istream& s, string& x)
{
	char buf[256];
	s >> buf;
	x = buf;
	cout << "echo: " << x << "\n";
	return s;
}
void error(char* p)
{
	cerr << p << "\n";
	exit(1);
}
char& string::operator[](int i)
{
	if (i < 0 || strlen(p->s)s[i];
}
main()
{
	string x[10];
		int n;
		cout << "отсюда начнем\n";
		for (n = 0; cin >> x[n]; n++)
		{
			string y;
				if (n == 10) error("слишком много строк");
				cout << (y = x[n]);
			if (y == "done") break;
		}
	cout << "отсюда мы пройдем обратно\n";
	for (int i = n - 1; 0 <= i; i--) cout << x[i];
}
