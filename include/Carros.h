#ifndef CARROS_H
#define CARROS_H

#include <string>
#include <iostream>

using namespace std;


class Carros
{
private:
    string modelo;
    int anoFabr;
    string cor;
public:
    void setModelo (string modelo);
    void setAnoFabr (int anoFabr);
    void setCor (string cor);

    string getModelo();
    int getAnoFabr();
    string getCor();

    void cadastrarDados();
    void imprimirDados ();
};

#endif // CARROS_H
