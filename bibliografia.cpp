#include "bibliografia.h"
#include "libro.h"
#include "articulo.h"


const vector<Documento> &Bibliografia::getReferencias() const
{
    return Referenciasv;
}

void Bibliografia::setReferencias(const vector<Documento> &newReferencias)
{
    Referenciasv = newReferencias;
}

Bibliografia::Bibliografia()
{

}

bool Bibliografia::addbook()
{

    obtenerReferencia();

    return true;
}

bool Bibliografia::addcommit()
{
    Referenciasv;

    return true;
}

void Bibliografia::showrefer()
{
    string ref;
    for(int i=0;i<5;i++){
    cout<<Referenciasv.obtenerReferencia();
    }
}
