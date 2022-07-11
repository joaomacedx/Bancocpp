#pragma 
#include "Cpf.hpp" 
#include "string"
#include "Pessoa.hpp"
class Funcionario :public Pessoa
{
public:
	Funcionario(Cpf cpf, std::string Nome, float Salario);
private:
	float Salario;
};

