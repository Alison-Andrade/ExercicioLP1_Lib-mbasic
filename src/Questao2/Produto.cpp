#include "../Includes/Produto.h"

Produto::Produto()
{}

Produto::Produto(string codBarras_, string descricao_, float preco_):
codBarras(codBarras_), descricao(descricao_), preco(preco_)
{}

Produto::~Produto()
{}

string
Produto::getCodBarras(){
	return codBarras;
}

void
Produto::setCodBarras(string codBarras_){
	codBarras = codBarras_;
}

string
Produto::getDescricao(){
	return descricao;
}

void
Produto::setDescricao(string descricao_){
	descricao = descricao_;
}

float
Produto::getPreco(){
	return preco;
}

void
Produto::setPreco(float preco_){
	preco = preco_;
}

float
Produto::operator+(Produto &p1){
	return this->getPreco() + p1.getPreco();
}

float
Produto::operator-(Produto &p1){
	return this->getPreco() - p1.getPreco();
}

bool
Produto::operator==(Produto &p1){
	return this->getCodBarras() == p1.getCodBarras() ? true : false;
}

ostream& operator<<(ostream &out, Produto &p){
	
	return p.print(out);
	
}