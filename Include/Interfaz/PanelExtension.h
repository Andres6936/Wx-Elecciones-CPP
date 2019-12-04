//
// Created by andres6936 on 7/03/18.
//

#ifndef COMPROBANDO_PANELEXTENSION_H
#define COMPROBANDO_PANELEXTENSION_H

#include "wx/wx.h"

class InterfazElecciones;

class PanelExtension : wxPanel
{

private:

    InterfazElecciones *parent;

    wxButton *botonVaciarUrna;

    wxButton *botonOpcion1;

    wxButton *botonOpcion2;

public:

    PanelExtension( ) : wxPanel( nullptr, wxID_ANY, wxDefaultPosition, wxDefaultSize )
    {
        botonVaciarUrna = new wxButton( this, wxID_ANY, wxT( "Vaciar Urna" ) );

        botonOpcion1 = new wxButton( this, wxID_ANY, wxT( "Opción 1" ) );

        botonOpcion2 = new wxButton( this, wxID_ANY, wxT( "Opción 2" ) );
    }

    ~PanelExtension( )
    {

    }

    void onVaciarUrna( )
    {

    }

    void onOpcion1( )
    {

    }

    void onOpcion2( )
    {

    }

};


#endif //COMPROBANDO_PANELEXTENSION_H
