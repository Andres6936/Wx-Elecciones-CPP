#ifndef COMPROBANDO_INTERFAZELECCIONES_H
#define COMPROBANDO_INTERFAZELECCIONES_H

#include "wx/wx.h"

#include "PanelCandidato.h"
#include "PanelExtension.h"
#include "PanelImagen.h"
#include "PanelUrna.h"

#include "Mundo/Urna.h"

class InterfazElecciones : public wxFrame
{

private:

    Urna urna = Urna( );

    PanelCandidato *panelFrank;
    PanelCandidato *panelClaire;
    PanelCandidato *panelObama;

    PanelExtension *panelExtension;

    PanelImagen *panelImagen;

    PanelUrna *panelUrna;

public:

    explicit InterfazElecciones( const wxString &title );

    void adicionarVotoCandidato( int numCandidato )
    {

    }

    void vaciarUrna( )
    {

    }

    void mostrarDialogoPorcentajeVotos( int numCandidato )
    {

    }

    void getTotalVotosUrna( )
    {

    }

    void formatearValorReal( )
    {

    }

    void reqFuncOpcion1( )
    {

    }

    void reqFuncOpcion2( )
    {

    }

};


#endif //COMPROBANDO_INTERFAZELECCIONES_H
