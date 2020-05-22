#include "Interfaz/PanelExtension.h"

PanelExtension::PanelExtension( wxWindow *parent ) : wxPanel( parent, wxID_ANY, wxDefaultPosition, wxDefaultSize )
{
    this->SetBackgroundColour( "White" );
    this->SetSize( wxSize( 600, 50 ));

    this->parent = reinterpret_cast<InterfazElecciones *>(parent);

    botonVaciarUrna = new wxButton( this, wxID_ANY, wxT( "Vaciar Urna" ) );
    botonVaciarUrna->SetExtraStyle(wxBORDER_SUNKEN);

    botonOpcion1 = new wxButton( this, wxID_ANY, wxT( "Opción 1" ) );

    botonOpcion2 = new wxButton( this, wxID_ANY, wxT( "Opción 2" ) );

    wxBoxSizer *sizer = new wxBoxSizer( wxHORIZONTAL );

    sizer->Add( botonVaciarUrna, 0, wxEXPAND | wxALL );
    sizer->Add( botonOpcion1, 0, wxEXPAND | wxALL );
    sizer->Add( botonOpcion2, 0, wxEXPAND | wxALL );

    this->SetSizerAndFit( sizer );
}
