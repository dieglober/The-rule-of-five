#include "Integer.h"
#include <iostream>

//1. Default constructor
Integer::Integer() {
	std::cout << "Integer()" << std::endl;
	m_pInt = new int(0);
}

//2. Parameterized constructor
Integer::Integer(int value) {
	std::cout << "Integer(int)" << std::endl;
	m_pInt = new int(value);
}
//3. Copy constructor
Integer::Integer(const Integer & obj) {
	std::cout << "Integer(const Integer&)" << std::endl;
	m_pInt = new int(*obj.m_pInt);
}

//4. Move constructor
Integer::Integer(Integer && obj) {
	std::cout << "Integer(int&&)" << std::endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

//5. Default destructor
Integer::~Integer() {
	std::cout << "~Integer()" << std::endl;
	delete m_pInt;
}

//move assignment operator=
Integer& Integer::operator=(const Integer& a) {
	std::cout << "move assignment operator=" << std::endl;
	*m_pInt = *a.m_pInt;
	return *this;
}


int Integer::GetValue() const {
	return *m_pInt;
}

void Integer::SetValue(int value) {
	*m_pInt = value;
}







