#include "Carros.h"

void Carros::setModelo(string modelo)
{
    this -> modelo = modelo;
}

void Carros::setAnoFabr(int anoFabr)
{
    this -> anoFabr = anoFabr;
}
void Carros::setCor(string cor)
{
    this ->cor = cor;
}
string Carros::getModelo()
{
    return this ->modelo;
}
int Carros::getAnoFabr()
{
    return this -> anoFabr;
}
string Carros::getCor()
{
    return this -> cor;
}

void Carros::cadastrarDados()
{
     cout << "Informe o modelo:" << endl;
     cin >> this -> modelo;
     cout << "Informe o ano de fabricacao:" << endl;
     cin >> this ->anoFabr;
     cout << "Informe a cor:" << endl;
     cin >> this ->cor;
}
void Carros::imprimirDados()
{
    cout << "Modelo:" << this -> modelo << endl;
    cout << "Ano de fabricacao:" << this -> anoFabr << endl;
    cout << "Cor:" << this -> cor << endl << endl;
}





