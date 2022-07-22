#include "Autenticacao.hpp"

Autenticacao::Autenticacao(std::string Senha) : Senha(Senha)
{
}
bool Autenticacao::Autentica(std::string Senha) const
{
	return Senha == this->Senha;
}