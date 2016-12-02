#include "MainFrame.hpp"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame( "Hearts and Spades", wxPoint(50, 50), wxSize(750,550) );
		// can use wxGetDisplaySize() to get the screen size
    frame->SetBackgroundColour(wxColour(40,150,40));
    frame->Show( true );
    frame->m_lobbyDialog.Show( true );
    frame->m_loginDialog.Show( true );
    //frame->m_serverDialog.Show( true );
    return true;
}
