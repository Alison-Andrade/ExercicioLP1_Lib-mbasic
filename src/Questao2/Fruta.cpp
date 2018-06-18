#include <iomanip>
#include "../Includes/Fruta.h"

Fruta::Fruta()
{}

Fruta::Fruta(string codBarras_, string descricao_, float preco_, string dataLote_, short validade_):
Produto(codBarras_, descricao_, preco_), dataLote(dataLote_), validade(validade_)
{}

Fruta::~Fruta()
{}

string
Fruta::getDataLote(){
	return dataLote;
}

void
Fruta::setDataLote(string data_){
	dataLote = data_;
}

short
Fruta::getValidade(){
	return validade;
}

void
Fruta::setValidade(short validade_){
	validade = validade_;
}

ostream&
Fruta::print(ostream &out) const{
	out << std::setfill (' ') << std::setw (10) << codBarras << " | "
	<< std::setfill ('.') << std::setw (20) << descricao << " | "
	<< std::setfill (' ') << std::setw (5) << preco << " | "
	<< std::setfill (' ') << std::setw (10) << dataLote << " | "
	<< std::setfill (' ') << std::setw (3) << validade << endl;

	return out;
}