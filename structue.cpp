#include <iostream>

using namespace std;

struct clientes
{
    int id;
    string nome;
    double salario;
};

clientes meus_clientes[10];

int main()
{
    cout << "Digite o id: " << endl;
    cin >> meus_clientes[0].id;
    cout << "Digite o nome: " << endl;
    cin >> meus_clientes[0].nome;
    cout << "Digite o salario: " << endl;
    cin >> meus_clientes[0].salario;

    cout << endl
         << "id: " << meus_clientes[0].id << endl;
    cout << endl
         << "Nome: " << meus_clientes[0].nome << endl;
    cout << endl
         << "Salario: R$ " << meus_clientes[0].salario << endl;

    return 0;
}