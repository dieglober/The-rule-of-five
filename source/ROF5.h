#pragma once
#include <iostream>

class ROF5
{
	std::string m_title;
public:
	//1. Default constructor
	ROF5();

	//2. Parameterized constructor
	ROF5(const std::string& txt);

	//3. Copy constructor
	ROF5(const ROF5& obj);	

	//4. Move constructor
	ROF5(ROF5 &&obj) noexcept;

	int GetValue() const;
	void SetValue(int value);

	//5. default destructor
	~ROF5();

private:

};


