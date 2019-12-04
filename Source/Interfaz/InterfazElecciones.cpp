#include "Interfaz/InterfazElecciones.h"

InterfazElecciones::InterfazElecciones( const wxString &title ) : wxFrame( nullptr, wxID_ANY, title )
{
    // Construye la forma de la ventana.
    this->SetSize( wxSize( 800, 600 ));
    this->SetBackgroundColour( "White" );

    wxBoxSizer *sizerLayoutRoot = new wxBoxSizer( wxVERTICAL );

    panelImagen = new PanelImagen( this );

    sizerLayoutRoot->Add( panelImagen, 1, wxEXPAND );

    this->SetSizerAndFit( sizerLayoutRoot );
    this->Centre( );
}
