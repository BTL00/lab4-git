#ifndef class_hpp
#define class_hpp

class figure {
public:
	virtual double area();
	virtual double circumference();

};

class circle : public figure {
public:
	circle(double);
	~circle();
	double area();
	double circumference();
private: 
	double radius;
};

class rectangle : public figure {
public:
	rectangle(double, double);
	~rectangle();
	double area();
	double circumference();
private: 
	double side_a, side_b;
};

class square : public figure {
public:
	square(double);
	~square();
	double area();
	double circumference();
private: 
	double side_a;
};

#endif