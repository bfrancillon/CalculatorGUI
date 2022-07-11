#pragma once
#include "wx/wx.h"


class Main : public wxFrame
{
public:
	Main();
	~Main();

public:
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;
	wxButton* m_btn10 = nullptr;
	wxButton* m_btn11 = nullptr;
	wxButton* m_btn12 = nullptr;
	wxButton* m_btn13= nullptr;
	wxButton* m_btn14 = nullptr;
	wxButton* m_btn15 = nullptr;
	wxButton* m_btn16 = nullptr;
	wxButton* m_btn17 = nullptr;
	wxButton* m_btn18 = nullptr;
	wxButton* m_btn19 = nullptr;
	wxButton* m_btn20 = nullptr;
	wxButton* m_btn21 = nullptr;


	wxTextCtrl* m_txt1 = nullptr;
	//wxListBox *m_list1 = nullptr;

	void OnButtonClicked(wxCommandEvent& event); 
	void BindButton(wxButton* button);

	wxDECLARE_EVENT_TABLE();
};

