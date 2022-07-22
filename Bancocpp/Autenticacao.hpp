#pragma once
#include <string>
class Autenticacao
{
private:
	std::string Senha;
public:
	Autenticacao(std::string Senha);
	bool Autentica(std::string Senha) const;

};

