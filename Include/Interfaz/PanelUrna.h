#ifndef COMPROBANDO_PANELURNA_H
#define COMPROBANDO_PANELURNA_H

#include "wx/wx.h"

class PanelUrna : public wxPanel
{

private:

    wxStaticText *etiquetaTotalVotos;

    wxStaticText *etiquetaPromedioCostoCampanha;

public:

    explicit PanelUrna( wxWindow *parent );

    ~PanelUrna( ) override = default;


    void actualizar( )
    {

    }

    void formatearValorReal( )
    {

    }

};


#endif //COMPROBANDO_PANELURNA_H
