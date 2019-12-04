#include "Interfaz/InterfazElecciones.h"

InterfazElecciones::InterfazElecciones( const wxString &title ) : wxFrame( nullptr, wxID_ANY, title )
{
    panelImagen = new PanelImagen( this );

    // Construye la forma de la ventana.
    this->SetSize( wxSize( 800, 600 ));
    this->SetBackgroundColour( "White" );

    Centre( );
}
