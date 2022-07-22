#pragma 
#include "Cpf.hpp" 
#include "string"
#include "Pessoa.hpp"
class Funcionario :public Pessoa
{
private:
	float Salario;

public:
	Funcionario(Cpf cpf, std::string Nome, float Salario);
	std::string getNome() const;
	virtual float bonificacao() const = 0;
	float GetSalario() const;
};

