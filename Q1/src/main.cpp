#include <iostream>
#include "MathBasic.h"

int main(int argc, char const *argv[]){
	
	std::cout << mbasic::MathBasic::Add(5, 5) << std::endl;
	std::cout << mbasic::MathBasic::Dif(5, 5) << std::endl;
	std::cout << mbasic::MathBasic::Mux(5, 5) << std::endl;
	std::cout << mbasic::MathBasic::Div(5, 5) << std::endl;

	return 0;
}