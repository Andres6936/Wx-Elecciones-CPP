#include "Mundo/Candidato.h"

void Candidato::setPathImage( const string &path )
{
    pathimage = path;
}

int Candidato::getEdad( )
{
    return edad;
}

string Candidato::getPathImage( )
{
    return pathimage;
}
