#ifndef CONTA_CORRENTE_CPP
#define CONTA_CORRENTE_CPP

class Movimentacao {
private:
	std::string m_descricao;
	double m_valor;
	char m_tipo;
public:
	Movimentacao();
};

class ContaCorrente {
private:
	unsigned m_agencia;
	char m_status;
	double m_limite_total;
	Movimentacao* m_movimentacoes;
public:
	ContaCorrente();

	//Getters
	double getLimite();
	char getStatus();
	unsigned getAgencia();

	//Setters
	void setLimite(double limite_);
	void setStatus(char status_);
	void setAgencia(unsigned agencia_);

	friend ostream& operator<<(ostream& out, ContaCorrente& C);

	void Saque(double valor_);
	void Deposito(double valor_);

};

#endif // CONTA_CORRENTE_CPP
