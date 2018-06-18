#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>
#include <iostream>

using namespace std;

class Produto {
protected:
	string codBarras;
	string descricao;
	float preco;
public:
	Produto();
	Produto(string codBarras_, string descricao_, float preco_);
	virtual ~Produto();

	string getCodBarras();
	void setCodBarras(string);
	string getDescricao();
	void setDescricao(string);
	float getPreco();
	void setPreco(float);

	float operator+(Produto &p1);
	float operator-(Produto &p1);
	bool operator==(Produto &p1);

	friend ostream& operator<<(ostream &out, Produto &p);

private:
	virtual ostream& print(ostream &out) const = 0;
	
};


#endif
