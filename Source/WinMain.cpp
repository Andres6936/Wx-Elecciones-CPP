#include <iostream>
#include <wx/wx.h>
#include "../Include/Interfaz/InterfazElecciones.h"

class ApplicationManager : public wxApp
{

public:

    bool OnInit( ) override
    {
        InterfazElecciones *interfazElecciones = new InterfazElecciones( wxT( "Elecciones C++" ) );
        interfazElecciones->Show( true );
        return true;
    }
};

wxDECLARE_APP( ApplicationManager );

wxIMPLEMENT_APP( ApplicationManager );
