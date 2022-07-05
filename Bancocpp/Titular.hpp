#pragma once
#include <string>
#include "Cpf.hpp"
class Titular
{
private:
	Cpf cpf;
	std::string Nome;

public:
	Titular(Cpf cpf, std::string Nome);
	std::string getNome();
	


private :
	void CheckTamanhoDoNome();
};

