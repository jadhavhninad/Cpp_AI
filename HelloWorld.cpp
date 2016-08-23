#include <iostream>


int main(){
	
	int uninitvar;
	std::cout << "Hello World\n";
	std::cout << uninitvar;
	return 0;
}

/*
class Rectangle{
	
	double length;
	double breadth;
	
	public:
	void getParam(double length1, double breadth1){
			length = length1;
			breadth = breadth1;
			//return 0;
	}
	
	double area() const{
		return length * breadth;
	}
	
};

int main(){
	using namespace std;
	
	Rectangle rect1;
	rect1.getParam(23, 43);
	
	cout << "Area of rectangle is :" << rect1.area() << endl; 
};
*/
