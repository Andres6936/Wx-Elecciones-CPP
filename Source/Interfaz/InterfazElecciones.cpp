#include "Interfaz/InterfazElecciones.h"

InterfazElecciones::InterfazElecciones( const wxString &title ) : wxFrame( nullptr, wxID_ANY, title )
{
    // Construye la forma de la ventana.
    this->SetSize( wxSize( 800, 600 ));
    this->SetBackgroundColour( "White" );

    wxBoxSizer *sizerLayoutRoot = new wxBoxSizer( wxVERTICAL );

    panelImagen = new PanelImagen( this );

    panelFrank = new PanelCandidato( this, urna.getCandidato1( ));
    panelClaire = new PanelCandidato( this, urna.getCandidato2( ));
    panelObama = new PanelCandidato( this, urna.getCandidato3( ));

    sizerLayoutRoot->Add( panelImagen, 1, wxEXPAND );
    sizerLayoutRoot->Add( panelFrank, 1, wxEXPAND );
    sizerLayoutRoot->Add( panelClaire, 1, wxEXPAND );
    sizerLayoutRoot->Add( panelObama, 1, wxEXPAND );

    this->SetSizerAndFit( sizerLayoutRoot );
    this->Centre( );
}
