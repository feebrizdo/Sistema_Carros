#include "SistemaAuto.h"

void SistemaAuto::exibirMenuPrincipal()
{
    int opcao = -1;
    while (opcao !=0)
    {
        system("cls");
        cout << " ----Menu Principal ----" << endl;
        cout << "Digite a opcao desejada:" << endl;
        cout << "1- Cadastrar" << endl;
        cout << "2- Listar" << endl;
        cout << "3- Excluir" << endl;
        cout << "0 -Sair" << endl;
        cin >> opcao;
        switch(opcao)
        {
            case 1: cadastrarAutom();
                break;
                case 2: listarAutom();
                break;
                case 3: excluirAutom();
                break;
        }
        system("pause");
    }
}

void SistemaAuto::cadastrarAutom()
{
cout << "----Cadastrando automovel----" << endl;
Carros* novoCarro = new Carros();
novoCarro -> cadastrarDados();
automoveis.push_back(novoCarro);
cout << "Carro cadastrado com sucesso." << endl;
}

void SistemaAuto::listarAutom()
{
    cout << "----Listando automoveis----" << endl;
    for (int i=0; i <automoveis.size(); i++)
    {
        cout <<"Carro da posicao " << (i+1) << "-- \n" << endl;
        automoveis[i] -> imprimirDados();
    }
    cout  << "Fim da lista." << endl;
}

void SistemaAuto::excluirAutom()
{
    cout << "----Excluindo automovel----" << endl;
    listarAutom();
    cout << "Informe a posicacao do veiculo a excluir: " << endl;
    int pos;
    cin >> pos;
    automoveis.erase(automoveis.begin()+ (pos-1));
    cout << "Carro excluido com sucesso" << endl;
}
