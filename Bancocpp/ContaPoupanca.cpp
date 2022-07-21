#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string Numero, Titular titular) : conta(Numero, titular)
{

}
float ContaPoupanca::taxaDeSaque() const
{
	std::cout << "Sacando da Conta Poupanca" << std::endl;
	return 0.09;
}