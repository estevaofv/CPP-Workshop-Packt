
#include <iostream> //<> Generally for system files (paths set for the IDE for example)

#include "myAdd.hpp"    //"" Generally for program files (search locally first)

using namespace std;

#define HELLO_WORLD "Hello World!"
#define MULTIPLY(a,b) (a*b)
#define LEVEL 3


int main()
{
  cout <<"The sum of 3 and 4 is " << add(3,4) <<"\n";

  cout << HELLO_WORLD <<"\n";

  cout << MULTIPLY(3,4);

  //Conditional Compilation
  #ifdef HELLO_WORLD
    cout << HELLO_WORLD <<" 2 \n"; 
  #endif

  #undef HELLO_WORLD

  #ifdef HELLO_WORLD
    cout << HELLO_WORLD <<" 3 \n"
  #endif

  #if LEVEL == 0
    #define SCORE 0
  #else
  //cout << "Teste else";
  #if LEVEL == 1
    #define SCORE 15
  #endif
  #endif


  #if LEVEL == 2
    #define SCORE 30
  #elif LEVEL == 3
    #define SCORE  45

  #endif

  cout << SCORE;

  return 0;
}