#pragma once
#include <iostream>

class Number{
	
public:	
	//1. Constructor
	Number();
	//2. Parameterized constructor
	Number(int value);

	//3. Copy constructor
	Number(const Number& obj);

	//4. Move constructor
	Number(Number&& obj);
	

	//Move assigment
	Number& operator=(const Number& number);
	

	Number GetValue();
	void SetValue(const Number& number);


	//5. Default destructor
	~Number();

private:
	
	int *m_value;
	void printMessage(const std::string& msg);

};

