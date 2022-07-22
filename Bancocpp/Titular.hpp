#pragma once
#include <string>
#include "Autenticacao.hpp"
#include "Pessoa.hpp"
#include "Cpf.hpp"
class Titular :public Pessoa, public Autenticacao
{
public:
	Titular(Cpf cpf, std::string Nome, std::string Senha);
};

