#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "../Includes/Produto.h"

class Fruta : public Produto{
private:
	string dataLote;
	short validade;
public:

	Fruta();
	Fruta(string codBarras_, string descricao_, float preco_, string dataLote_, short validade_);
	~Fruta();

	//getters e setters
	string getDataLote();
	void setDataLote(string data_);
	short getValidade();
	void setValidade(short validade_);
private:
	ostream& print(ostream &out) const;
};

#endif