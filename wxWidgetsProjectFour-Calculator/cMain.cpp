#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10000, OnNumberZero)
	EVT_BUTTON(10001, OnNumberOne)
	EVT_BUTTON(10002, OnNumberTwo)
	EVT_BUTTON(10003, OnNumberThree)
	EVT_BUTTON(10004, OnNumberFour)
	EVT_BUTTON(10005, OnNumberFive)
	EVT_BUTTON(10006, OnNumberSix)
	EVT_BUTTON(10007, OnNumberSeven)
	EVT_BUTTON(10008, OnNumberEight)
	EVT_BUTTON(10009, OnNumberNine)

	EVT_BUTTON(20001, OnExtraClearChar)
	EVT_BUTTON(20002, OnExtraMemoryPlus)
	EVT_BUTTON(20003, OnExtraDecimal)
	EVT_BUTTON(20004, OnExtraSign)
	EVT_BUTTON(20005, OnExtraClearNumber)

	EVT_BUTTON(30001, OnOperationPlus)
	EVT_BUTTON(30002, OnOperationMinus)
	EVT_BUTTON(30003, OnOperationMultiply)
	EVT_BUTTON(30004, OnOperationDivide)

	EVT_BUTTON(30009, OnEquals)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "wxWidgets Calculator", wxPoint(30, 30), wxSize(310, 645))
{
	SetMinSize(wxSize(310, 645));
	SetMaxSize(wxSize(310, 645));

	m_number_0 = new wxButton(this, 10000, L"0", wxPoint(10, 460), wxSize(130, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_1 = new wxButton(this, 10001, L"1", wxPoint(10, 390), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_2 = new wxButton(this, 10002, L"2", wxPoint(80, 390), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_3 = new wxButton(this, 10003, L"3", wxPoint(150, 390), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_4 = new wxButton(this, 10004, L"4", wxPoint(10, 320), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_5 = new wxButton(this, 10005, L"5", wxPoint(80, 320), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_6 = new wxButton(this, 10006, L"6", wxPoint(150, 320), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_7 = new wxButton(this, 10007, L"7", wxPoint(10, 250), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_8 = new wxButton(this, 10008, L"8", wxPoint(80, 250), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_number_9 = new wxButton(this, 10009, L"9", wxPoint(150, 250), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);

	m_extra_clear_char =	new wxButton(this, 20001, L"c", wxPoint(80, 180), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_extra_memory_plus =	new wxButton(this, 20002, L"m+", wxPoint(150, 180), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_extra_decimal_point = new wxButton(this, 20003, L".", wxPoint(150, 460), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_extra_sign =			new wxButton(this, 20004, L"+-", wxPoint(220, 180), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_extra_clear_number =	new wxButton(this, 20005, L"clr", wxPoint(10, 180), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);

	m_op_plus =		new wxButton(this, 30001, L"+", wxPoint(220, 460), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_op_minus =	new wxButton(this, 30002, L"-", wxPoint(220, 390), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_op_multiply = new wxButton(this, 30003, L"*", wxPoint(220, 320), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_op_divide =	new wxButton(this, 30004, L"/", wxPoint(220, 250), wxSize(60, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);

	m_equals = new wxButton(this, 30009, L"=", wxPoint(10, 110), wxSize(270, 60), wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);

	m_results_list = new wxListBox(this, 30092, wxPoint(10, 530), wxSize(270, 70));

	m_active_number = new wxTextCtrl(this, 30091, wxEmptyString, wxPoint(10, 10), wxSize(270, 90), wxTE_LEFT | wxTE_BESTWRAP | wxBORDER_DEFAULT, wxDefaultValidator, wxEmptyString);
	m_active_number->Enable(false);

	wxFont myFont(16, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	m_active_number->SetFont(myFont);
	m_active_number->SetMaxLength(18);

}

void cMain::OnNumberZero(wxCommandEvent& evt)
{
	m_active_number->AppendText("0");
	evt.Skip();
}

void cMain::OnNumberOne(wxCommandEvent& evt)
{
	m_active_number->AppendText("1");
	evt.Skip();
}

void cMain::OnNumberTwo(wxCommandEvent& evt)
{
	m_active_number->AppendText("2");
	evt.Skip();
}

void cMain::OnNumberThree(wxCommandEvent& evt)
{
	m_active_number->AppendText("3");
	evt.Skip();
}

void cMain::OnNumberFour(wxCommandEvent& evt)
{
	m_active_number->AppendText("4");
	evt.Skip();
}

void cMain::OnNumberFive(wxCommandEvent& evt)
{
	m_active_number->AppendText("5");
	evt.Skip();
}

void cMain::OnNumberSix(wxCommandEvent& evt)
{
	m_active_number->AppendText("6");
	evt.Skip();
}

void cMain::OnNumberSeven(wxCommandEvent& evt)
{
	m_active_number->AppendText("7");
	evt.Skip();
}

void cMain::OnNumberEight(wxCommandEvent& evt)
{
	m_active_number->AppendText("8");
	evt.Skip();
}

void cMain::OnNumberNine(wxCommandEvent& evt)
{
	m_active_number->AppendText("9");
	evt.Skip();
}

void cMain::OnOperationPlus(wxCommandEvent& evt)
{
	if (!AdditionFlag)
	{
		op1 = StringToFloat(m_active_number->GetValue());
		AdditionFlag = true;
		m_results_list->AppendAndEnsureVisible(" + " + m_active_number->GetValue());
		ResetNumber();
	}
	else if (AdditionFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 + op2;
		op1 = ret;
		m_results_list->AppendAndEnsureVisible(" + " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetNumber();
	}

	evt.Skip();
}

void cMain::OnOperationMinus(wxCommandEvent& evt)
{
	if (!SubtractionFlag)
	{
		op1 = StringToFloat(m_active_number->GetValue());
		SubtractionFlag = true;
		m_results_list->AppendAndEnsureVisible(" - " + m_active_number->GetValue());
		ResetNumber();
	}
	else if (SubtractionFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 - op2;
		op1 = ret;
		m_results_list->AppendAndEnsureVisible(" - " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetNumber();
	}

	evt.Skip();
}

void cMain::OnOperationDivide(wxCommandEvent& evt)
{
	if (!DivisionFlag)
	{
		op1 = StringToFloat(m_active_number->GetValue());
		DivisionFlag = true;
		m_results_list->AppendAndEnsureVisible(" / " + m_active_number->GetValue());
		ResetNumber();
	}
	else if (DivisionFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 / op2;
		op1 = ret;
		m_results_list->AppendAndEnsureVisible(" / " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetNumber();
	}

	evt.Skip();
}

void cMain::OnOperationMultiply(wxCommandEvent& evt)
{
	if (!MultiplyFlag)
	{
		op1 = StringToFloat(m_active_number->GetValue());
		MultiplyFlag = true;
		m_results_list->AppendAndEnsureVisible(" * " + m_active_number->GetValue());
		ResetNumber();
	}
	else if (MultiplyFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 * op2;
		op1 = ret;
		m_results_list->AppendAndEnsureVisible(" * " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetNumber();
	}

	evt.Skip();
}

void cMain::OnEquals(wxCommandEvent& evt)
{
	if (AdditionFlag) 
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 + op2;
		m_results_list->AppendAndEnsureVisible(" + " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetFlags();
		ResetNumber();
	}
	else if (MultiplyFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 * op2;
		m_results_list->AppendAndEnsureVisible(" * " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetFlags();
		ResetNumber();
	}
	else if (DivisionFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 / op2;
		m_results_list->AppendAndEnsureVisible(" / " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetFlags();
		ResetNumber();
	}
	else if (SubtractionFlag)
	{
		op2 = StringToFloat(m_active_number->GetValue());
		ret = op1 - op2;
		m_results_list->AppendAndEnsureVisible(" - " + m_active_number->GetValue());
		m_results_list->AppendAndEnsureVisible(" = " + FloatToString(ret));
		ResetFlags();
		ResetNumber();
	}

	evt.Skip();
}

void cMain::OnExtraDecimal(wxCommandEvent& evt)
{
	// TODO: Remove IsDecimal flag if the decimal point is removed
	if (!isDecimal)
	{
		m_active_number->AppendText(".");
		isDecimal = true;
	}
	evt.Skip();
}

void cMain::OnExtraSign(wxCommandEvent& evt)
{
	float aux = StringToFloat(m_active_number->GetValue());
	float ret = aux * -1;
	wxString mystring = FloatToString(ret);

	m_active_number->SetValue(mystring);

	evt.Skip();
}

void cMain::OnExtraMemoryPlus(wxCommandEvent& evt)
{
	evt.Skip();
}

void cMain::OnExtraClearNumber(wxCommandEvent& evt)
{
	ResetFlags();
	ResetNumber();
	evt.Skip();
}

void cMain::OnExtraClearChar(wxCommandEvent& evt)
{
	if (m_active_number->GetLineLength(1) == 0)
		ResetNumber();
	else
		m_active_number->Remove(m_active_number->GetLastPosition()-1, m_active_number->GetLastPosition());

	evt.Skip();
}

void cMain::ResetNumber()
{
	isDecimal = false;
	m_active_number->Clear();
}

void cMain::ResetFlags()
{
	AdditionFlag = false;
	DivisionFlag = false;
	MultiplyFlag = false;
	SubtractionFlag = false;
	isDecimal = false;
}

float cMain::StringToFloat(wxString str)
{
	return std::stof(std::string(str));
}

wxString cMain::FloatToString(float f)
{
	return wxString::Format(wxT("%f"), f);
}

cMain::~cMain()
{
}