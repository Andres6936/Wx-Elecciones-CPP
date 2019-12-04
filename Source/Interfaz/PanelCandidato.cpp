#include "Interfaz/PanelCandidato.h"

PanelCandidato::PanelCandidato( wxWindow *parent, Candidato &candidato ) : wxPanel( parent, wxID_ANY, wxDefaultPosition,
                                                                                    wxDefaultSize )
{
    this->SetBackgroundColour( "White" );

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

    const std::string numberVotos = "Número de Votos: " + std::to_string( candidato.getVotos( ));
    etiquetaNumeroVotos = new wxStaticText( this, wxID_ANY, numberVotos );

    wxFlexGridSizer *sizerLayout = new wxFlexGridSizer( 9, 1, 1, 1 );

    wxBitmap bitmap = wxBitmap( candidato.getPathImage( ), wxBITMAP_TYPE_JPEG );
    wxStaticBitmap *image = new wxStaticBitmap( this, wxID_ANY, bitmap );

    sizerLayout->Add( image, 1 );
    sizerLayout->Add( etiquetaNombreCandidato, 1 );
    sizerLayout->Add( etiquetaApellidoCandidato, 1 );
    sizerLayout->Add( etiquetaEdadCandidato, 1 );
    sizerLayout->Add( etiquetaPartidoPoliticoCandidato, 1 );
    sizerLayout->Add( etiquetaCostoCampanhaCandidato, 1 );
    sizerLayout->Add( etiquetaNumeroVotos, 1, wxALIGN_CENTER );
    sizerLayout->Add( botonPorcentajeVotos, 0, wxALIGN_CENTER );
    sizerLayout->Add( botonVotar, 0, wxALIGN_CENTER );

    this->SetSizerAndFit( sizerLayout );
}

PanelCandidato::~PanelCandidato( ) = default;
