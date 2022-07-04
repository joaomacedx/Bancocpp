#pragma once
#include <string>
class Titular
{
private:
	std::string Cpf;
	std::string Nome;

public:
	Titular(std::string Cpf, std::string Nome);
	std::string getNome();
	std::string getCpf();


private :
	void CheckTamanhoDoNome();
};

