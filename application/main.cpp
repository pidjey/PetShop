#include <iostream>
#include <string>
#include "Animal.h"
#include "Pessoa.h"
#include "Petshop.h"



using namespace std;

int main()
{
  Animal a;
  Animal b{"toto", 10, "27/04/2010", "cachorro", "vira-lata"};
  Animal d{"rex", 10311, "27/04/2010", "cachorro", "vira-lata"};

  Pessoa p {"Jose", "100.601.174-94", "teste", "84988734450"};
  Funcionario f;
  Funcionario g {"pedro", "100.601.174-94", "teste", "84988734450", "zelador", " 27/04/1994"};
  Cliente c{"Jose", "100.601.174-94", "teste", "84988734450", b};

  if (b == d)
  {
    cout<<"sao iguais"<<endl;
  }else{
    cout<<"nao sao iguais"<<endl;
  }

  
  //cout<<g.getNome()<<"de cima"<<endl;


  

  Veterinario V{"Jose", "100.601.174-94", "teste", "84988734450","Veterinario", "27/04/1994", "Cirurgico", "1984198" };
  Petshop pet; 
  //pet.cadastrar_funcionarios(g);
  //pet.mostrar_funcionarios();

  pet.cadastrar_clientes(c);
  pet.mostrar_clientes();

  cout<<pet.clientes[0].addAnimal(d)<<endl;
  




return 0;

}
