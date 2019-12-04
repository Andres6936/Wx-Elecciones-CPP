#ifndef COMPROBANDO_PANELEXTENSION_H
#define COMPROBANDO_PANELEXTENSION_H

#include "wx/wx.h"

class InterfazElecciones;

class PanelExtension : public wxPanel
{

private:

    InterfazElecciones *parent;

    wxButton *botonVaciarUrna;

    wxButton *botonOpcion1;

    wxButton *botonOpcion2;

public:

    explicit PanelExtension( wxWindow *parent );

    ~PanelExtension( ) override = default;

    void onVaciarUrna( );

    void onOpcion1( );

    void onOpcion2( );

};


#endif //COMPROBANDO_PANELEXTENSION_H
