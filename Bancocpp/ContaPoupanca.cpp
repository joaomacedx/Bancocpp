#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string Numero, Titular titular) : conta(Numero, titular)
{

}
float ContaPoupanca::taxaDeSaque() const
{
	return 0.09;
}