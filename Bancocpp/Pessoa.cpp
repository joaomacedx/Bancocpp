#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string Nome) : cpf(cpf), Nome(Nome)
{
	CheckTamanhoDoNome();
}
void Pessoa::CheckTamanhoDoNome()
{
	if (Nome.size() < 5)
	{
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}