#include "Integer.h"
#include "Number.h"

int Square(int&& x) {
	return x * x;
}

int main() {
	
	std::cout << "============================" << std::endl;
	int&& res1 = Square(8);             //Line 1
	const int& res2 = Square(20);       //Line 2
	int res3 = Square(Square(5));       //Line 3
	std::cout << "============================" << std::endl;

	
	
	Number n1{ 1 }; //invokes the parameterized contructor
	Number n3 = 5; //invokes the parameterized contructor

	auto n2{ n1 }; //invokes the copy constructor

	n1 = n3;

	std::cout << "============================" << std::endl;
	Number a(1536);
	Number a1 = 333;
	auto b(a); //invokes copy constructor

	auto c(static_cast<Number &&> (a) ); //invokes move constructor (no readable and not communicate intention clearly)

	auto d(std::move(a)); // better readable



	return 0;

}
