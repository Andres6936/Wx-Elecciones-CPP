#ifndef COMPROBANDO_PANELCANDIDATO_H
#define COMPROBANDO_PANELCANDIDATO_H

#include "wx/wx.h"
#include "../Mundo/Candidato.h"

class InterfazElecciones;

class PanelCandidato : public wxPanel
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

    explicit PanelCandidato( wxWindow *parent, Candidato &candidato );

    ~PanelCandidato( ) override;

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
