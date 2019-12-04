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

    etiquetaNombreCandidato = new wxStaticText( this, wxID_ANY,
                                                wxT( "Nombre: " + candidato.getNombre( )));

    etiquetaApellidoCandidato = new wxStaticText( this, wxID_ANY,
                                                  wxT( "Apellido: " + candidato.getApellido( )));

    etiquetaEdadCandidato = new wxStaticText( this, wxID_ANY,
                                              wxT( "Edad: " + std::to_string( candidato.getEdad( ))));

    etiquetaPartidoPoliticoCandidato = new wxStaticText( this, wxID_ANY,
                                                         wxT( "Partido Político: " + candidato.getPartidoPolitico( )));

    etiquetaCostoCampanhaCandidato = new wxStaticText( this, wxID_ANY,
                                                       wxT( "Costo Campaña: $ " +
                                                            std::to_string( candidato.getCostoCampanha( ))));

    etiquetaNumeroVotos = new wxStaticText( this, wxID_ANY,
                                            wxT( "Número de Votos: " + std::to_string( candidato.getVotos( ))));

    wxFlexGridSizer *sizerLayout = new wxFlexGridSizer( 9, 1, 1, 1 );
    //wxBoxSizer *sizerLayoutImage = new wxBoxSizer(wxVERTICAL);

    wxBitmap bitmap = wxBitmap( candidato.getPathImage( ), wxBITMAP_TYPE_JPEG );
    wxStaticBitmap *image = new wxStaticBitmap( this, wxID_ANY, bitmap );

    //sizerLayoutImage->Add(image, 1, wxEXPAND);
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
