#ifndef CREATEGAMEDIALOG_HPP
#define CREATEGAMEDIALOG_HPP

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <iostream>

class CreateGameDialog : public wxDialog
{
public:
	CreateGameDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = "Create Game", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
	void createGameBtn(wxCommandEvent& event);
};

#endif /* ifndef CREATEGAMEDIALOG_HPP */
