#include <iomanip>
#include "../Includes/Roupa.h"

Roupa::Roupa()
{}

Roupa::Roupa(string codBarras_, string descricao_, float preco_, string marca_, char sexo_, char tamanho_):
Produto(codBarras_, descricao_, preco_), marca(marca_), sexo(sexo_), tamanho(tamanho_)
{}

Roupa::~Roupa()
{}

string
Roupa::getMarca(){
	return marca;
}

void
Roupa::setMarca(string marca_){
	marca = marca_;
}

char
Roupa::getSexo(){
	return sexo;
}

void
Roupa::setSexo(char sexo_){
	sexo = sexo_;
}

char
Roupa::getTamanho(){
	return tamanho;
}

void
Roupa::setTamanho(char tamanho_){
	tamanho = tamanho_;
}

ostream&
Roupa::print(ostream &out) const{
	out << std::setfill (' ') << std::setw (10) << codBarras << " | "
	<< std::setfill ('.') << std::setw (20) << descricao << " | "
	<< std::setfill (' ') << std::setw (5) << preco << " | "
	<< std::setfill (' ') << std::setw (10) << marca << " | "
	<< std::setfill (' ') << std::setw (3) << sexo << " | "
	<< std::setfill (' ') << std::setw (3) << tamanho << endl;

	return out;
}