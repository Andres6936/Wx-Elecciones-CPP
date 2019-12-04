#include "Interfaz/PanelExtension.h"

PanelExtension::PanelExtension( wxWindow *parent ) : wxPanel( parent, wxID_ANY, wxDefaultPosition, wxDefaultSize )
{
    this->SetBackgroundColour( "White" );

    this->parent = reinterpret_cast<InterfazElecciones *>(parent);

    botonVaciarUrna = new wxButton( this, wxID_ANY, wxT( "Vaciar Urna" ) );

    botonOpcion1 = new wxButton( this, wxID_ANY, wxT( "Opción 1" ) );

    botonOpcion2 = new wxButton( this, wxID_ANY, wxT( "Opción 2" ) );

    wxBoxSizer *sizer = new wxBoxSizer( wxHORIZONTAL );

    sizer->Add( botonVaciarUrna, 0, wxALL, 5 );
    sizer->Add( botonOpcion1, 0, wxALL, 5 );
    sizer->Add( botonOpcion2, 0, wxALL, 5 );

    this->SetSizerAndFit( sizer );
}
