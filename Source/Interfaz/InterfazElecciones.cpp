#include "Interfaz/InterfazElecciones.h"

InterfazElecciones::InterfazElecciones( const wxString &title ) : wxFrame( nullptr, wxID_ANY, title )
{
    this->SetSize( wxSize( 600, 8000 ));
    this->SetBackgroundColour( "White" );

    wxBoxSizer *sizerLayoutRoot = new wxBoxSizer( wxVERTICAL );
    wxBoxSizer *sizerLayoutCandidatos = new wxBoxSizer( wxHORIZONTAL );

    wxStaticBoxSizer *sizerLFrank = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Frank" ) );
    wxStaticBoxSizer *sizerLClaire = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Claire" ) );
    wxStaticBoxSizer *sizerLObama = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Candidato Obama" ) );
    wxStaticBoxSizer *sizerUrn = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Urn" ) );
    wxStaticBoxSizer *sizerExtension = new wxStaticBoxSizer( wxVERTICAL, this, wxT( "Options" ) );

    panelImagen = new PanelImagen( this );

    panelFrank = new PanelCandidato( this, urna.getCandidato1( ));
    sizerLFrank->Add( panelFrank, 1, wxALIGN_CENTER );

    panelClaire = new PanelCandidato( this, urna.getCandidato2( ));
    sizerLClaire->Add( panelClaire, 1, wxALIGN_CENTER );

    panelObama = new PanelCandidato( this, urna.getCandidato3( ));
    sizerLObama->Add( panelObama, 1, wxALIGN_CENTER );

    panelUrna = new PanelUrna( this );
    sizerUrn->Add( panelUrna, 1, wxALIGN_CENTER );

    panelExtension = new PanelExtension( this );
    sizerExtension->Add( panelExtension, 1, wxALIGN_CENTER );

    sizerLayoutRoot->Add( panelImagen, 0, wxEXPAND | wxALL );

    sizerLayoutCandidatos->Add( sizerLFrank, 1, wxALL );
    sizerLayoutCandidatos->Add( sizerLClaire, 1, wxALL );
    sizerLayoutCandidatos->Add( sizerLObama, 1, wxALL );

    sizerLayoutRoot->Add( sizerLayoutCandidatos, 1, wxEXPAND | wxALL );
    sizerLayoutRoot->Add( sizerUrn, 0, wxEXPAND | wxALL );
    sizerLayoutRoot->Add( sizerExtension, 0, wxEXPAND | wxALL );

    this->SetSizerAndFit( sizerLayoutRoot );
    this->Centre( );
}
