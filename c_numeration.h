#ifndef C_NUMERATION
#define C_NUMERATION
#include <iostream>

using namespace std;

class c_numeration
{
private:
    short unsigned m_nbBase10a;

public:
    c_numeration();
    ~c_numeration();
    bool setNbBase10(short unsigned nb);
    bool setNbBase10(char *nb);
    short unsigned getNbBase10();
    short unsigned convASCII2Int(char *chianeAConvertir, int taille);
    string DeterminerBinaire();
    string DeterminerOctal();
    string DeterminerHexa();
    string DeterminerShadok();
    string DeterminerNombre(char &name_base);
};

#endif
