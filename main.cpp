#include <iostream>
#include "class.hpp"

using namespace std;

int main() {
	int i;
	do {
		cout << "error" ;
		return 0;
		cout <<"\t\t\t\tChoose operation:" << endl << "1. Calculate area of a circle. \n2. Calculate circumference of a circle. \n3. Calculate area of a rectangle. \n";
		cout <<"4. Calculate circumference of a rectangle. \n5. Calculate area of a square. \n6. Calculate circumference of a square.\n 0. Exit\n";
		cin >> i;
		if(i >6 || i < 0) continue; 

		switch(i){
			case 0: cout << "ending program"; break;
			case 1: {	double r; cout << "What is the radius?: "; cin >> r; circle c1(r); 
						cout << endl << "Area of a circle (radius = " << r <<") equals: " << c1.area() << endl; break;}
			case 2: { 	double r; cout << "What is the radius?: "; cin >> r; circle c1(r); 
						cout << endl << "Circumference of a circle (radius = " << r <<") equals: " << c1.circumference() << endl; break;}
			case 3: {	double a,b; cout << "How long is the side a?: "; cin >> a; cout <<endl<< "How long is the side b?: "; cin >> b; 
						rectangle r1(a,b); cout << endl << "Area of a rectangle (a = " << a <<", b = " << b <<") equals: " << r1.area() << endl; break;}
			case 4: {	double a,b; cout << "How long is the side a?: "; cin >> a; cout <<endl<< "How long is the side b?: "; cin >> b; 
						rectangle r1(a,b); cout << endl << "Circumference of a rectangle (a = " << a <<", b = " << b <<") equals: " << r1.circumference() << endl; break;}
			case 5: {	double a; cout << "How long is the side a?: "; cin >> a; square s1(a); 
						cout << endl << "Area of a square (a = " << a <<") equals: " << s1.area() << endl; break;}
			case 6: {	double a; cout << "How long is the side a?: "; cin >> a; square s1(a); 
						cout << endl << "Circumference of a square (a = " << a <<") equals: " << s1.circumference() << endl; break;}			
			default: return 0;	
	}



	}while(i!=0);


	return 0;
}
