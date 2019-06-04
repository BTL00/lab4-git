
circle::circle(double r){
	this->radius = r; 
}
circle::~circle(){
	//write your code here 
}
double circle::area(){
	return pi * this->radius * this->radius;
}
double circle::circumference(){
	return 2 * pi * this->radius;
}
