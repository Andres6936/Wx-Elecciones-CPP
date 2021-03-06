#include "Interfaz/PanelCandidato.h"

PanelCandidato::PanelCandidato( wxWindow *parent, Candidato &candidato ) : wxPanel( parent, wxID_ANY, wxDefaultPosition,
                                                                                    wxDefaultSize )
{
    this->SetBackgroundColour( "White" );
    this->SetSize( wxSize( 200, 300 ));

    this->parent = reinterpret_cast<InterfazElecciones *>(parent);

    botonPorcentajeVotos = new wxButton( this, wxID_ANY, wxT( "Porcentaje Votos" ) );
    botonPorcentajeVotos->SetSize( wxSize( 160, 20 ));

    botonVotar = new wxButton( this, wxID_ANY, wxT( "Votar" ) );
    botonVotar->SetSize( wxSize( 160, 20 ));

    const std::string name = "Nombre: " + candidato.getNombre( );
    etiquetaNombreCandidato = new wxStaticText( this, wxID_ANY, name );

    const std::string lastname = "Apellido: " + candidato.getApellido( );
    etiquetaApellidoCandidato = new wxStaticText( this, wxID_ANY, lastname );

    const std::string years = "Edad: " + std::to_string( candidato.getEdad( ));
    etiquetaEdadCandidato = new wxStaticText( this, wxID_ANY, years );

    const std::string politicalParty = "Partido Político: " + candidato.getPartidoPolitico( );
    etiquetaPartidoPoliticoCandidato = new wxStaticText( this, wxID_ANY, politicalParty );

    const std::string costoCampanha = "Costo Campaña: $ " + std::to_string( candidato.getCostoCampanha( ));
    etiquetaCostoCampanhaCandidato = new wxStaticText( this, wxID_ANY, costoCampanha );

    const std::string numberVotos = "N° Votos: " + std::to_string( candidato.getVotos( ));
    etiquetaNumeroVotos = new wxStaticText( this, wxID_ANY, numberVotos );

    wxBoxSizer *sizerLayout = new wxBoxSizer( wxVERTICAL );

    wxBitmap bitmap = wxBitmap( candidato.getPathImage( ), wxBITMAP_TYPE_JPEG );
    wxStaticBitmap *image = new wxStaticBitmap( this, wxID_ANY, bitmap, wxDefaultPosition, wxSize( 160, 120 ));

    sizerLayout->Add( image, 1, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaNombreCandidato, 0, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaApellidoCandidato, 0, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaEdadCandidato, 0, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaPartidoPoliticoCandidato, 0, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaCostoCampanhaCandidato, 0, wxEXPAND | wxALL );
    sizerLayout->Add( etiquetaNumeroVotos, 0, wxALIGN_CENTER );
    sizerLayout->Add( botonPorcentajeVotos, wxSizerFlags( 0 ).Center( ).Expand( ));
    sizerLayout->Add( botonVotar, wxSizerFlags( 0 ).Center( ).Expand( ));

    this->SetSizerAndFit( sizerLayout );
}

PanelCandidato::~PanelCandidato( ) = default;
