
square::square(double a){
	this->side_a = a;
}
 square::~square(){
 	//write your code here 
}
double square::area(){
	return this->side_a * this->side_a;
}
double square::circumference(){
	return 4.0 * this->side_a;
}
