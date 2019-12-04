//
// Created by andres6936 on 7/03/18.
//

#ifndef COMPROBANDO_PANELCANDIDATO_H
#define COMPROBANDO_PANELCANDIDATO_H

#include "wx/wx.h"
#include "../Mundo/Candidato.h"

class InterfazElecciones;

class PanelCandidato : wxPanel
{

private:

    InterfazElecciones *parent;

    wxButton *botonPorcentajeVotos;

    wxButton *botonVotar;

    wxStaticText *etiquetaNombreCandidato;

    wxStaticText *etiquetaApellidoCandidato;

    wxStaticText *etiquetaEdadCandidato;

    wxStaticText *etiquetaPartidoPoliticoCandidato;

    wxStaticText *etiquetaCostoCampanhaCandidato;

    wxStaticText *etiquetaNumeroVotos;

public:

    PanelCandidato( ) : wxPanel( nullptr, wxID_ANY, wxDefaultPosition, wxDefaultSize )
    {
        etiquetaNombreCandidato = new wxStaticText( this, wxID_ANY, wxT( "Nombre: " ) );

        etiquetaApellidoCandidato = new wxStaticText( this, wxID_ANY, wxT( "Apellido: " ) );

        etiquetaEdadCandidato = new wxStaticText( this, wxID_ANY, wxT( "Edad: " ) );

        etiquetaPartidoPoliticoCandidato = new wxStaticText( this, wxID_ANY, wxT( "Partido Político: " ) );

        etiquetaCostoCampanhaCandidato = new wxStaticText( this, wxID_ANY, wxT( "Costo Campaña: $ " ) );

        etiquetaNumeroVotos = new wxStaticText( this, wxID_ANY, wxT( "Número de Votos: " ) );

    }

    ~PanelCandidato( )
    {

    }

    void actualizar( Candidato candidato )
    {

    }

    void formatearValorReal( )
    {

    }

    void onPorcentajeVotos( )
    {

    }

    void onVotar( )
    {

    }

};


#endif //COMPROBANDO_PANELCANDIDATO_H
