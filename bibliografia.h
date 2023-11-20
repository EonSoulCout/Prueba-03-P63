#ifndef BIBLIOGRAFIA_H
#define BIBLIOGRAFIA_H

#include "documento.h"
#include <iostream>
#include <vector>

using namespace std;


class Bibliografia : public Documento
{
private:

    vector <Documento> Referenciasv;
public:
    Bibliografia();
    bool addbook();
    bool addcommit();
    void showrefer();
    const vector<Documento> &getReferencias() const;
    void setReferencias(const vector<Documento> &newReferencias);
};

#endif // BIBLIOGRAFIA_H
