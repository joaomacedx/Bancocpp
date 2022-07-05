#include "Titular.hpp"
#include <iostream>
Titular::Titular(Cpf cpf, std::string Nome) : cpf(cpf), Nome(Nome) 
{
	CheckTamanhoDoNome();
}
void Titular::CheckTamanhoDoNome()
{
	if (Nome.size() < 5)
	{
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}
std::string Titular:: getNome() 
{
	return Nome;
}
