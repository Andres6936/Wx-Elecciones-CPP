#include "Interfaz/PanelExtension.h"

PanelExtension::PanelExtension( wxWindow *parent ) : wxPanel( parent, wxID_ANY, wxDefaultPosition, wxDefaultSize )
{
    this->SetBackgroundColour( "White" );

    this->parent = reinterpret_cast<InterfazElecciones *>(parent);

    botonVaciarUrna = new wxButton( this, wxID_ANY, wxT( "Vaciar Urna" ) );

    botonOpcion1 = new wxButton( this, wxID_ANY, wxT( "Opción 1" ) );

    botonOpcion2 = new wxButton( this, wxID_ANY, wxT( "Opción 2" ) );

    wxBoxSizer *sizer = new wxBoxSizer( wxHORIZONTAL );

    sizer->Add( botonVaciarUrna, wxSizerFlags( 0 ).Expand( ));
    sizer->Add( botonOpcion1, wxSizerFlags( 0 ).Expand( ));
    sizer->Add( botonOpcion2, wxSizerFlags( 0 ).Expand( ));

    this->SetSizerAndFit( sizer );
}
