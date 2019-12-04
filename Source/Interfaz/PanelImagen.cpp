#include "Interfaz/PanelImagen.h"

PanelImagen::PanelImagen( wxWindow *parent ) : wxPanel( parent, wxID_ANY )
{
    this->SetBackgroundColour( "White" );

    wxBitmap bitmap = wxBitmap( "./Data/Encabezado.jpg", wxBITMAP_TYPE_JPEG );
    wxStaticBitmap *imagen = new wxStaticBitmap( this, wxID_ANY, bitmap );

    wxBoxSizer *sizerLayour = new wxBoxSizer( wxVERTICAL );
    sizerLayour->Add( imagen, 1, wxEXPAND );

    this->SetSizerAndFit( sizerLayour );
}
