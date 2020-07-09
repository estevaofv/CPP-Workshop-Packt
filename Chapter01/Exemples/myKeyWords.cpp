// Keywords example
#include <iostream>
#include <string>


class Person
{
  public:
    std::string name; //acessivel para a classe e tudo que ve a classe
  protected:
    int rg; //Acessivel para a classe e para qualquer classe filha
  private:
    int numeroConta; //acessivel somente para a classe
};



int main()
{
  //Data type Keywords
  int myInt =1;
  double myDouble = 1.5;
  char myChar = 'c';
  bool myBool = true;
  float myFloat = 1.5f;

  //Program flow Keywords
  if(myBool)
  {
    std::cout <<"True";
  }
  else
  {
    std::cout <<"False";
  }

  struct myStruct
  {
    int myInt =1; 
  };


  unsigned int var1 = 1; //Unsigned significa que pode ser somente positivo
  signed int var2 = -1;  //Signed pode ser tanto positivo quanto negativo
  const std::string var3 = "Hello Word"; //Const significa que o valor nao pode ser modificado
  static char var4 = 'c'; //Static significa que o valor eh compartilhado entre todas as instancias de uma dada classe

  Person p1; 

  return 0;
}



