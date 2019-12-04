#include "Interfaz/PanelUrna.h"

PanelUrna::PanelUrna( wxWindow *parent ) : wxPanel( parent, wxID_ANY )
{
    this->SetBackgroundColour( "White" );

    etiquetaTotalVotos = new wxStaticText( this, wxID_ANY, wxT( "Total Votos: " ) );

    etiquetaPromedioCostoCampanha = new wxStaticText( this, wxID_ANY, wxT( "Costo Promedio Campaña: " ) );

    wxBoxSizer *sizer = new wxBoxSizer( wxVERTICAL );

    sizer->Add( etiquetaPromedioCostoCampanha );
    sizer->Add( etiquetaTotalVotos );

    this->SetSizerAndFit( sizer );
}