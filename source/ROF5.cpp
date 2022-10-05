#include "ROF5.h"

ROF5::ROF5(){
	std::cout << "Default constructor " << std::endl;
	m_title = "Default constructor";
}

ROF5::ROF5(const std::string& txt){
	std::cout << "Parameterized constructor " << std::endl;
	m_title = txt;
}

//3. Copy constructor
ROF5::ROF5(const ROF5& obj){
	std::cout << "Copy constructor: (const ROF5& obj)" << std::endl;

}

//4. Move constructor
ROF5::ROF5(ROF5 &&obj) noexcept { // && = R-Value reference

}

int ROF5::GetValue() const {
	return 0;
}

void ROF5::SetValue(int value) {
}

ROF5::~ROF5() {

}
