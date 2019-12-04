#include "Interfaz/InterfazElecciones.h"

InterfazElecciones::InterfazElecciones( const wxString &title ) : wxFrame( nullptr, wxID_ANY, title )
{
    // Construye la forma de la ventana.
    this->SetSize( wxSize( 800, 600 ));
    this->SetBackgroundColour( "White" );

    wxBoxSizer *sizerLayoutRoot = new wxBoxSizer( wxVERTICAL );
    wxBoxSizer *sizerLayoutCandidatos = new wxBoxSizer( wxHORIZONTAL );
    wxStaticBoxSizer *sizerLFrank = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Frank" ) );
    wxStaticBoxSizer *sizerLClaire = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Claire" ) );
    wxStaticBoxSizer *sizerLObama = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Obama" ) );

    panelImagen = new PanelImagen( this );

    panelFrank = new PanelCandidato( this, urna.getCandidato1( ));
    sizerLFrank->Add( panelFrank, 1, wxALIGN_CENTER );

    panelClaire = new PanelCandidato( this, urna.getCandidato2( ));
    sizerLClaire->Add( panelClaire, 1, wxALIGN_CENTER );

    panelObama = new PanelCandidato( this, urna.getCandidato3( ));
    sizerLObama->Add( panelObama, 1, wxALIGN_CENTER );

    sizerLayoutRoot->Add( panelImagen, 1, wxEXPAND );
    sizerLayoutCandidatos->Add( sizerLFrank, 1, wxEXPAND );
    sizerLayoutCandidatos->Add( sizerLClaire, 1, wxEXPAND );
    sizerLayoutCandidatos->Add( sizerLObama, 1, wxEXPAND );
    sizerLayoutRoot->Add( sizerLayoutCandidatos, 1, wxEXPAND );

    this->SetSizerAndFit( sizerLayoutRoot );
    this->Centre( );
}
