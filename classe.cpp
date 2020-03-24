#include <iostream>
#include "c_numeration.h"

using namespace std;

int main(int argc, char *argv[])
{

  c_numeration test;

  char name_base;
  int base_debut;

  name_base = *argv[1];
  base_debut = atoi(argv[2]); //enlever

  cout << argv[1] << endl;

if (name_base == '-'){
    cout << "-----Options Signification-----" << endl;
    cout << "Veuillez taper en premier votre base puis votre chiffre a convertir" << endl;
    cout << "Exemple: [name executable].exe [name base or help(-)] [chiffre a convertir]" << endl;
    cout << "b Representation en binaire" << endl;
    cout << "o Representation en octal" << endl;
    cout << "h Representation en hexadecimal" << endl;
    cout << "- petite aide en ligne, s affiche par defaut si pas d option" << endl;
    cout << "-------------------------------" << endl;
  }else{
      
      if (base_debut < 0 || base_debut > 67535)
      {
        cout << "Veuiller entre un nombre entre 0 et 67535." << endl;
      }
      else
      {
        if (base_debut == 0)
        {
          cout << "Base ";
          switch (name_base)
          {
          case 'b':
            cout << "Binaire" << endl;
            cout << "0" << endl;
            break;

          case 'o':
            cout << "Octale" << endl;
            cout << "0" << endl;
            break;

          case 'h':
            cout << "Hexadecimal" << endl;
            cout << "0" << endl;
            break;

          case 's':
            cout << "Shadok" << endl;
            cout << "GA" << endl;
            break;

          default:
            break;
          }
        }
        else
        {
          test.setNbBase10(base_debut);
          cout << test.DeterminerNombre(name_base) << endl;
        }
      }
  }


  return 0;
};