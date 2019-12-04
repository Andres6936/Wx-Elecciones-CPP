//
// Created by andres6936 on 6/03/18.
//

#ifndef URNA_H
#define URNA_H

#include "Candidato.h"

class Urna
{

private:

    Candidato candidato1 = Candidato( "Felipe", "Pitti", "Independiente", 27 );

    Candidato candidato2 = Candidato( "Susanita", "Chirusi", "Revolucionario", 26 );

    Candidato candidato3 = Candidato( "Manolito", "Goreiro", "Tradicional", 26 );

public:

    Urna( );

    ~Urna( ) = default;

    Candidato & getCandidato1( )
    {
        return candidato1;
    }

    Candidato & getCandidato2( )
    {
        return candidato2;
    }

    Candidato & getCandidato3( )
    {
        return candidato3;
    }

    void ingresarVotoTelevisionCandidato1( )
    {
        candidato1.agregarVotoTelevision( );
    }

    void ingresarVotoRadioCandidato1( )
    {
        candidato1.agregarVotoRadio( );
    }

    void ingresarVotoInternetCandidato1( )
    {
        candidato1.agregarVotoInternet( );
    }

    void ingresarVotoTelevisionCandidato2( )
    {
        candidato2.agregarVotoTelevision( );
    }

    void ingresarVotoRadioCandidato2( )
    {
        candidato2.agregarVotoRadio( );
    }

    void ingresarVotoInternetCandidato2( )
    {
        candidato2.agregarVotoInternet( );
    }

    void ingresarVotoTelevisionCandidato3( )
    {
        candidato3.agregarVotoTelevision( );
    }

    void ingresarVotoRadioCandidato3( )
    {
        candidato3.agregarVotoRadio( );
    }

    void ingresarVotoInternetCandidato3( )
    {
        candidato3.agregarVotoInternet( );
    }

    int calcularTotalVotos( )
    {
        return candidato1.getVotos( ) +
               candidato2.getVotos( ) +
               candidato3.getVotos( );
    }

    double calcularCostoPromedioCampanha( )
    {
        double total = candidato1.getCostoCampanha( ) +
                       candidato2.getCostoCampanha( ) +
                       candidato3.getCostoCampanha( );

        double promedio = total / 3;

        return promedio;
    }

    double calcularPorcentajeVotosCandidato1( )
    {
        int numVotosCandidato = candidato1.getVotos( );
        int votosTotales = calcularTotalVotos( );

        double porcentaje = numVotosCandidato / votosTotales * 100;

        return porcentaje;
    }

    double calcularPorcentajeVotosCandidato2( )
    {
        int numVotosCandidato = candidato2.getVotos( );
        int votosTotales = calcularTotalVotos( );

        double porcentaje = numVotosCandidato / votosTotales * 100;

        return porcentaje;
    }

    double calcularPorcentajeVotosCandidato3( )
    {
        int numVotosCandidato = candidato3.getVotos( );
        int votosTotales = calcularTotalVotos( );

        double porcentaje = numVotosCandidato / votosTotales * 100;

        return porcentaje;
    }

    void vaciarUrna( )
    {
        candidato1.reiniciarConteoVotos( );
        candidato1.reiniciarCostoCampanha( );

        candidato2.reiniciarConteoVotos( );
        candidato2.reiniciarCostoCampanha( );

        candidato3.reiniciarConteoVotos( );
        candidato3.reiniciarCostoCampanha( );
    }
};


#endif //URNA_H
