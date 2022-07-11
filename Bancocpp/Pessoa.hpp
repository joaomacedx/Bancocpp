#pragma once
#include "Cpf.hpp"
#include <string>
class Pessoa
{
protected:
	Cpf cpf;
	std::string Nome;
public:
	Pessoa(Cpf cpf, std::string Nome);
private:
	void CheckTamanhoDoNome();
};

