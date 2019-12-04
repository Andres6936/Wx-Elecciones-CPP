//
// Created by andres6936 on 28/02/18.
//

#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <string>

using namespace std;

/*
 * Candidato de la elección.
 */
class Candidato
{
    //-------------------------------------------
    // Atributos
    //-------------------------------------------

private:

    /**
     * Nombre del candidato.
     */
    string nombre;

    /**
     * Apellido del candidato.
     */
    string apellido;

    /**
     * Partido político del candidato.
     */
    string partidoPolitico;

    /**
     * Edad del candidato.
     */
    int edad;

    /**
     * Costo de campaña del candidato.
     */
    double costoCampanha;

    /**
     * Número de votos del candidato.
     */
    int votos;

public:

    //---------------------------------
    // Constructor
    //---------------------------------

    /**
     * Inicializa los datos del candidato con los valores que viene por parámetro.
     * Post: El costo de campaña se inicializó en cero.
     * El número de votos se inicializó en cero.
     * @param nNombre Nombre del candidato.
     * @param nApellido Apellido del candidato.
     * @param nPartidoPolitico Partido político del candidato.
     * @param nEdad Edad del candidato.
     */
    Candidato( string nNombre, string nApellido, string nPartidoPolitico, int nEdad )
    {
        nombre = nNombre;
        apellido = nApellido;
        partidoPolitico = nPartidoPolitico;
        edad = nEdad;
        costoCampanha = 0.0;
        votos = 0;
    }

    //---------------------------------
    // Métodos
    //---------------------------------

    /**
     * Devuelve el nombre del candidato.
     * @return Nombre del candidato.
     */
    string getNombre( )
    {
        return nombre;
    }

    string getApellido( )
    {
        return apellido;
    }

    string getPartidoPolitico( )
    {
        return partidoPolitico;
    }

    /**
     * Devuelve la edad del candidato.
     * @return Edad del candidato.
     */
    int getEdad( )
    {
        return edad;
    }

    double getCostoCampanha( )
    {
        return costoCampanha;
    }

    int getVotos( )
    {
        return votos;
    }

    void ingresarUnVoto( )
    {
        votos += 1;
    }

    void agregarVotoTelevision( )
    {
        costoCampanha += 1000;
        ingresarUnVoto( );
    }

    void agregarVotoRadio( )
    {
        costoCampanha += 500;
        ingresarUnVoto( );
    }

    void agregarVotoInternet( )
    {
        costoCampanha += 100;
        ingresarUnVoto( );
    }

    void reiniciarConteoVotos( )
    {
        votos = 0;
    }

    void reiniciarCostoCampanha( )
    {
        costoCampanha = 0;
    }

};

#endif //CANDIDATO_H
