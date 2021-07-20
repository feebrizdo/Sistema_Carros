#ifndef SISTEMAAUTO_H
#define SISTEMAAUTO_H
#include <vector>
#include "Carros.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class SistemaAuto
{
    public:
       void exibirMenuPrincipal();
       void cadastrarAutom();
       void listarAutom();
       void excluirAutom();

    protected:

    private:
        vector<Carros*> automoveis;
};

#endif // SISTEMAAUTO_H
