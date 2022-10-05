#include "Number.h"

Number::Number(){
	std::cout << __FUNCSIG__ << " default constructor" << std::endl;
}

Number::Number(int value){
	m_value = new int(value);
	std::cout << __FUNCSIG__ << " param constructor" << std::endl;
	std::cout << "m_value = " << *m_value << std::endl;
}

Number::Number(const Number& obj){	
	std::cout << "*obj.m_value = " << *obj.m_value << std::endl;
	m_value = new int(*obj.m_value);
	std::cout << __FUNCSIG__ << " copy constructor" << std::endl;
	std::cout << "m_value = " << *m_value << std::endl;

}

Number::Number(Number&& obj){
	std::cout << __FUNCSIG__ << " move constructor" << std::endl;
	m_value = obj.m_value;
	obj.m_value = nullptr;
}

Number& Number::operator=(const Number& number)
{
	std::cout << __FUNCSIG__ << " move assignment " << std::endl;
	*m_value = *number.m_value;
	return *this;
}

Number Number::GetValue()
{
	return *m_value;
}

void Number::SetValue(const Number& number)
{
	if (m_value == nullptr) {
		m_value = new int();
	}
	*m_value = *number.m_value;
}

Number::~Number()
{
}

void Number::printMessage(const std::string& msg)
{
	std::cout << " :" << msg << std::endl;
}
