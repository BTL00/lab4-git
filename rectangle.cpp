
rectangle::rectangle(double a, double b){
 	this->side_a = a; this->side_b = b; 
}
 rectangle::~rectangle(){
	//write your code here 
}
double rectangle::area(){
	return this->side_a * this->side_b;
}
double rectangle::circumference(){
	return 2.0 * (this->side_a * this->side_b);
}
