#include "pilha.hpp"

int main()
{
	Pilha operandos, operadores;
	string equacao;

	FPVazia(&operandos);
	FPVazia(&operadores);

	cout << "Informe a equação que deseja ser feita utilizando espaços entre operandos e operadores: ";
	getline(cin, equacao);

	RecebeEquacao(equacao, &operandos, &operadores);

	return 0;
}
