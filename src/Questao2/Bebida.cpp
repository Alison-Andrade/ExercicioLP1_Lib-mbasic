#include <iomanip>
#include "../Includes/Bebida.h"

Bebida::Bebida()
{}

Bebida::Bebida(string codBarras_, string descricao_, float preco_, float teorAlcolico_):
Produto(codBarras_, descricao_, preco_), teorAlcolico(teorAlcolico_)
{}

Bebida::~Bebida()
{}

float
Bebida::getTeorAlcolico(){
	return teorAlcolico;
}

void
Bebida::setTeorAlcolico(float teorAlcolico_){
	teorAlcolico = teorAlcolico_;
}

ostream&
Bebida::print(ostream &out) const{
	out << std::setfill (' ') << std::setw (10) << codBarras << " | "
	<< std::setfill ('.') << std::setw (20) << descricao << " | "
	<< std::setfill (' ') << std::setw (5) << preco << " | "
	<< std::setfill (' ') << std::setw (10) << teorAlcolico << "%" << endl;

	return out;
}