#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf cpf, std::string Nome, std::string Senha) : Pessoa(cpf, Nome), Autenticacao(Senha)
{

}