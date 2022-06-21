#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	conta Contaum;
	conta Contadois;
	
	Contaum.saque(5);
	Contaum.depositar( 200);

	return 0;
}