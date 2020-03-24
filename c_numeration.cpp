#include "c_numeration.h"

c_numeration::c_numeration()
{
}
c_numeration::~c_numeration()
{
}
bool c_numeration::setNbBase10(short unsigned nb)
{
  this->m_nbBase10a = nb;
}
bool c_numeration::setNbBase10(char *nb)
{
  // this->m_nbBase10a = this->convASCII2Int(nb, strlen(nb));
}
short unsigned c_numeration::getNbBase10()
{
}
short unsigned c_numeration::convASCII2Int(char *chaineAConvertir, int taille)
{
}
//--------------------------------------------------binaire
string c_numeration::DeterminerBinaire()
{
  cout << "Base Binaire" << endl;
  int modulo;
  string base_finale;
  while (m_nbBase10a > 0)
  {
    modulo = m_nbBase10a % 2;
    m_nbBase10a = m_nbBase10a / 2;
    modulo += 48;
    base_finale.insert(0, 1, modulo);
  }
  return base_finale;
}
//--------------------------------------------------octal
string c_numeration::DeterminerOctal()
{
  cout << "Base octal" << endl;
  int modulo;
  string base_finale;
  while (m_nbBase10a > 0)
  {
    modulo = m_nbBase10a % 8 + 48; //+48 car problème de caratère non reconnu
    m_nbBase10a = m_nbBase10a / 8;

    base_finale.insert(0, 1, modulo);
  }
  return base_finale;
}
//--------------------------------------------------hexa
string c_numeration::DeterminerHexa()
{
  //base16
  cout << "Base Hexa" << endl;
  int modulo;
  string base_finale;
  while (m_nbBase10a > 0)
  {
    modulo = m_nbBase10a % 16;
    m_nbBase10a = m_nbBase10a / 16;
    if (modulo < 10)
    {
      modulo = modulo + 48;
    }
    else
    {
      modulo = modulo + 55;
    }

    base_finale.insert(0, 1, modulo);
  }
  return base_finale;
}

//--------------------------------------------------Shadok
string c_numeration::DeterminerShadok()
{
  //baseShadok
  cout << "Shadok" << endl;
  int modulo;
  string base_finale;
  while (m_nbBase10a > 0)
  {
    modulo = m_nbBase10a % 4; //+48 car problème de caratère non reconnu
    m_nbBase10a = m_nbBase10a / 4;
    if (modulo == 0)
    {
      base_finale.insert(0, 1, 'A');
      base_finale.insert(0, 1, 'G');
    }
    else if (modulo == 1)
    {
      base_finale.insert(0, 1, 'U');
      base_finale.insert(0, 1, 'B');
    }
    else if (modulo == 2)
    {
      base_finale.insert(0, 1, 'O');
      base_finale.insert(0, 1, 'Z');
    }
    else if (modulo == 3)
    {
      base_finale.insert(0, 1, 'U');
      base_finale.insert(0, 1, 'E');
      base_finale.insert(0, 1, 'M');
    }
    base_finale.insert(0, 1, ' ');
  }
  return base_finale;
}

//--------------------------------------------------determiner
string c_numeration::DeterminerNombre(char &name_base)
{

  if (name_base == 'b')
  {
    //base2
    return this->DeterminerBinaire();
  }
  else if (name_base == 'o')
  {
    //base8
    return this->DeterminerOctal();
  }
  else if (name_base == 'h')
  {
    //base16
    return this->DeterminerHexa();
  }
  else if (name_base == 's')
  {
    //base Shadok
    return this->DeterminerShadok();
  }

  return 0;
}