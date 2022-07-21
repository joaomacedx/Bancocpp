#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string Numero, Titular titular) : conta(Numero, titular)
{

}
float ContaCorrente::taxaDeSaque() const
{
	std::cout << "Sacando da Conta Corrente" << std::endl;
	return 0.8;
}
