#pragma once
#include <iostream>
class Integer {
	int *m_pInt;
public:
	//Rule of five 
	
	//1. Default constructor
	Integer();

	//2. Parameterized constructor
	Integer(int value);

	//3. Copy constructor
	Integer(const Integer &obj);

	//4. Move constructor
	Integer(Integer &&obj);

	//5. Default destructor
	~Integer();

	//Move assignment
	Integer& operator=(const Integer& a);

	int GetValue()const;
	void SetValue(int value);

};
