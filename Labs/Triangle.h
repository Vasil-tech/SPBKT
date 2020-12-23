#ifndef TRIANGLE_H
#include "Point.h" 

class Triangle 
{
	public: Triangle(Point, Point, Point, const char*);
	Triangle(const char*); 
	~Triangle( );
	Point Get_vl() const { return v1; }
	Point Get_v2() const { return v2; } 
	Point Get_v3() const { return v3; } 
	char* GetName( ) const { return name; } 
	void Show() const;
	void ShowSideAndArea() const; 
	public: static int count; 
	private: char* objID; 
	char* name; 
	Point v1, v2, v3; 
	double a;
	double b; 
	double ñ; 
}; 
#endif /* TRIANGLE_H */