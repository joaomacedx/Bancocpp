#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string Cpf, std::string Nome) : Cpf(Cpf), Nome(Nome) 
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
std::string Titular::getCpf()
{
	return Cpf;
}