#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "../Includes/Produto.h"

class Roupa: public Produto {
private:
	string marca;
	char sexo;
	char tamanho;
public:
	Roupa();
	Roupa(string codBarras_, string descricao_, float preco_, string marca_, char sexo_, char tamanho_);
	~Roupa();

	string getMarca();
	void setMarca(string);
	char getSexo();
	void setSexo(char);
	char getTamanho();
	void setTamanho(char);

private:
	ostream& print(ostream &out) const;
};

#endif