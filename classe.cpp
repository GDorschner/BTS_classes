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
  //------------------
  //----------------ne marche pas la conversion de cahr en int ne peu pas avoir le nombre entier
  // for (int i = 2; i < argc; i++)
  // {
  //   base_debut = *argv[i] - 48;
  //   cout << base_debut << endl;
  // }

  // cout << "Dans quelle base souhaitez-vous convertir votre nombre?\nB ou O ou H ou S" << endl;
  // cin >> name_base;
  // cout << "Quelle votre nombre" << endl;
  // cin >> base_debut;

  return 0;
};