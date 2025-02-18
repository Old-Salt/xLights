/***************************************************************
 * This source files comes from the xLights project
 * https://www.xlights.org
 * https://github.com/smeighan/xLights
 * See the github commit history for a record of contributing
 * developers.
 * Copyright claimed based on commit dates recorded in Github
 * License: https://github.com/smeighan/xLights/blob/master/License.txt
 **************************************************************/

#include "BufferSizeDialog.h"
#include "ValueCurveDialog.h"
#include "UtilFunctions.h"
#include "xLightsMain.h"

//(*InternalHeaders(BufferSizeDialog)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/button.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include <wx/filename.h>

#include <log4cpp/Category.hh>

//(*IdInit(BufferSizeDialog)
const long BufferSizeDialog::ID_STATICTEXT1 = wxNewId();
const long BufferSizeDialog::ID_SPINCTRL1 = wxNewId();
const long BufferSizeDialog::ID_VALUECURVE_BufferTop = wxNewId();
const long BufferSizeDialog::ID_STATICTEXT2 = wxNewId();
const long BufferSizeDialog::ID_SPINCTRL2 = wxNewId();
const long BufferSizeDialog::ID_VALUECURVE_BufferLeft = wxNewId();
const long BufferSizeDialog::ID_STATICTEXT3 = wxNewId();
const long BufferSizeDialog::ID_SPINCTRL3 = wxNewId();
const long BufferSizeDialog::ID_VALUECURVE_BufferBottom = wxNewId();
const long BufferSizeDialog::ID_STATICTEXT4 = wxNewId();
const long BufferSizeDialog::ID_SPINCTRL4 = wxNewId();
const long BufferSizeDialog::ID_VALUECURVE_BufferRight = wxNewId();
const long BufferSizeDialog::ID_COMBOBOX_BUFFER_PRESET = wxNewId();
const long BufferSizeDialog::ID_BITMAPBUTTON_SAVE = wxNewId();
const long BufferSizeDialog::ID_BITMAPBUTTON_DELETE = wxNewId();
const long BufferSizeDialog::ID_STATICLINE1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BufferSizeDialog,wxDialog)
	//(*EventTable(BufferSizeDialog)
	//*)
END_EVENT_TABLE()

BufferSizeDialog::BufferSizeDialog(wxWindow* parent, bool usevc,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(BufferSizeDialog)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxStdDialogButtonSizer* StdDialogButtonSizer1;

	Create(parent, id, _("Buffer Size"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer2->AddGrowableCol(1);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Top"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Top = new wxSpinCtrlDouble(this, ID_SPINCTRL1, _T("100"), wxDefaultPosition, wxDefaultSize, 0, 1, 200, 100, 1, _T("ID_SPINCTRL1"));
	SpinCtrl_Top->SetValue(_T("100"));
	FlexGridSizer2->Add(SpinCtrl_Top, 1, wxALL|wxEXPAND, 5);
	ValueCurve_Top = new ValueCurveButton(this, ID_VALUECURVE_BufferTop, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_valuecurve_notselected")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE, wxDefaultValidator, _T("ID_VALUECURVE_BufferTop"));
	FlexGridSizer2->Add(ValueCurve_Top, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Left"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Left = new wxSpinCtrlDouble(this, ID_SPINCTRL2, _T("0"), wxDefaultPosition, wxDefaultSize, 0, -100, 99, 0, 1, _T("ID_SPINCTRL2"));
	SpinCtrl_Left->SetValue(_T("0"));
	FlexGridSizer2->Add(SpinCtrl_Left, 1, wxALL|wxEXPAND, 5);
	ValueCurve_Left = new ValueCurveButton(this, ID_VALUECURVE_BufferLeft, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_valuecurve_notselected")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE, wxDefaultValidator, _T("ID_VALUECURVE_BufferLeft"));
	FlexGridSizer2->Add(ValueCurve_Left, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Bottom"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Bottom = new wxSpinCtrlDouble(this, ID_SPINCTRL3, _T("0"), wxDefaultPosition, wxDefaultSize, 0, -100, 99, 0, 1, _T("ID_SPINCTRL3"));
	SpinCtrl_Bottom->SetValue(_T("0"));
	FlexGridSizer2->Add(SpinCtrl_Bottom, 1, wxALL|wxEXPAND, 5);
	ValueCurve_Bottom = new ValueCurveButton(this, ID_VALUECURVE_BufferBottom, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_valuecurve_notselected")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE, wxDefaultValidator, _T("ID_VALUECURVE_BufferBottom"));
	FlexGridSizer2->Add(ValueCurve_Bottom, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Right"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Right = new wxSpinCtrlDouble(this, ID_SPINCTRL4, _T("100"), wxDefaultPosition, wxDefaultSize, 0, 1, 200, 100, 1, _T("ID_SPINCTRL4"));
	SpinCtrl_Right->SetValue(_T("100"));
	FlexGridSizer2->Add(SpinCtrl_Right, 1, wxALL|wxEXPAND, 5);
	ValueCurve_Right = new ValueCurveButton(this, ID_VALUECURVE_BufferRight, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_valuecurve_notselected")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxBORDER_NONE, wxDefaultValidator, _T("ID_VALUECURVE_BufferRight"));
	FlexGridSizer2->Add(ValueCurve_Right, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	ComboBoxBufferPresets = new wxComboBox(this, ID_COMBOBOX_BUFFER_PRESET, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX_BUFFER_PRESET"));
	FlexGridSizer3->Add(ComboBoxBufferPresets, 1, wxALL|wxEXPAND, 5);
	BitmapButtonSave = new xlSizedBitmapButton(this, ID_BITMAPBUTTON_SAVE, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_colorpanel_save_xpm")),wxART_BUTTON), wxDefaultPosition, wxSize(24,24), wxBU_AUTODRAW|wxBORDER_NONE, wxDefaultValidator, _T("ID_BITMAPBUTTON_SAVE"));
	BitmapButtonSave->SetToolTip(_("Save Buffer Preset"));
	FlexGridSizer3->Add(BitmapButtonSave, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButtonDelete = new xlSizedBitmapButton(this, ID_BITMAPBUTTON_DELETE, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_colorpanel_delete_xpm")),wxART_BUTTON), wxDefaultPosition, wxSize(24,24), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_DELETE"));
	BitmapButtonDelete->SetToolTip(_("Delete Buffer Preset"));
	FlexGridSizer3->Add(BitmapButtonDelete, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxEXPAND, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND, 5);
	StdDialogButtonSizer1 = new wxStdDialogButtonSizer();
	StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_OK, wxEmptyString));
	StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_CANCEL, wxEmptyString));
	StdDialogButtonSizer1->Realize();
	FlexGridSizer1->Add(StdDialogButtonSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_SPINCTRL1,wxEVT_SPINCTRLDOUBLE,(wxObjectEventFunction)&BufferSizeDialog::OnSpinCtrl_TopChange);
	Connect(ID_VALUECURVE_BufferTop,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnValueCurve_Click);
	Connect(ID_SPINCTRL2,wxEVT_SPINCTRLDOUBLE,(wxObjectEventFunction)&BufferSizeDialog::OnSpinCtrl_LeftChange);
	Connect(ID_VALUECURVE_BufferLeft,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnValueCurve_Click);
	Connect(ID_SPINCTRL3,wxEVT_SPINCTRLDOUBLE,(wxObjectEventFunction)&BufferSizeDialog::OnSpinCtrl_BottomChange);
	Connect(ID_VALUECURVE_BufferBottom,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnValueCurve_Click);
	Connect(ID_SPINCTRL4,wxEVT_SPINCTRLDOUBLE,(wxObjectEventFunction)&BufferSizeDialog::OnSpinCtrl_RightChange);
	Connect(ID_VALUECURVE_BufferRight,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnValueCurve_Click);
	Connect(ID_BITMAPBUTTON_SAVE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnBitmapButtonSaveClick);
	Connect(ID_BITMAPBUTTON_DELETE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BufferSizeDialog::OnBitmapButtonDeleteClick);
	//*)

    Connect(wxID_ANY, wxEVT_COMBOBOX_DROPDOWN, (wxObjectEventFunction)&BufferSizeDialog::OnBufferChoiceDropDown, 0, this);
    Connect(wxID_ANY, wxEVT_COMBOBOX, (wxObjectEventFunction)&BufferSizeDialog::OnBuffer_PresetsSelect, 0, this);

    Connect(wxID_ANY, EVT_VC_CHANGED, (wxObjectEventFunction)&BufferSizeDialog::OnVCChanged, nullptr, this);

    int item = 1;
    wxWindow* ok_btn = StdDialogButtonSizer1->GetItem(item)->GetWindow();
    SetDefaultItem(ok_btn);
    SetEscapeId(wxID_CANCEL);

    SpinCtrl_Top->SetDigits(2);
    SpinCtrl_Left->SetDigits(2);
    SpinCtrl_Bottom->SetDigits(2);
    SpinCtrl_Right->SetDigits(2);

    if (usevc)
    {
        ValueCurve_Top->GetValue()->SetLimits(-100, 200);
        ValueCurve_Bottom->GetValue()->SetLimits(-100, 200);
        ValueCurve_Left->GetValue()->SetLimits(-100, 200);
        ValueCurve_Right->GetValue()->SetLimits(-100, 200);
    }
    else
    {
        ValueCurve_Top->Enable(false);
        ValueCurve_Bottom->Enable(false);
        ValueCurve_Left->Enable(false);
        ValueCurve_Right->Enable(false);
    }
}

BufferSizeDialog::~BufferSizeDialog()
{
	//(*Destroy(BufferSizeDialog)
	//*)
}

void BufferSizeDialog::SetSizes(double top, double left, double bottom, double right, const std::string& topvc, const std::string& leftvc, const std::string& bottomvc, const std::string& rightvc)
{
    SpinCtrl_Top->SetValue(top);
    SpinCtrl_Bottom->SetValue(bottom);
    if (SpinCtrl_Top->GetValue() <= SpinCtrl_Bottom->GetValue()) SpinCtrl_Bottom->SetValue(SpinCtrl_Bottom->GetValue() - 1);

    SpinCtrl_Left->SetValue(left);
    SpinCtrl_Right->SetValue(right);
    if (SpinCtrl_Left->GetValue() >= SpinCtrl_Right->GetValue()) SpinCtrl_Right->SetValue(SpinCtrl_Left->GetValue() + 1);

    ValueCurve_Top->SetValue(topvc);
    ValueCurve_Bottom->SetValue(bottomvc);
    ValueCurve_Left->SetValue(leftvc);
    ValueCurve_Right->SetValue(rightvc);
    ValueCurve_Top->GetValue()->SetLimits(-100, 200);
    ValueCurve_Bottom->GetValue()->SetLimits(-100, 200);
    ValueCurve_Left->GetValue()->SetLimits(-100, 200);
    ValueCurve_Right->GetValue()->SetLimits(-100, 200);

    ValidateWindow();
}

void BufferSizeDialog::OnSpinCtrl_TopChange(wxSpinDoubleEvent & event)
{
    if (SpinCtrl_Top->GetValue() <= SpinCtrl_Bottom->GetValue()) SpinCtrl_Bottom->SetValue(SpinCtrl_Top->GetValue() - 1);
    ValidateWindow();
}

void BufferSizeDialog::OnSpinCtrl_LeftChange(wxSpinDoubleEvent & event)
{
    if (SpinCtrl_Left->GetValue() >= SpinCtrl_Right->GetValue()) SpinCtrl_Right->SetValue(SpinCtrl_Left->GetValue() + 1);
    ValidateWindow();
}

void BufferSizeDialog::OnSpinCtrl_BottomChange(wxSpinDoubleEvent & event)
{
    if (SpinCtrl_Top->GetValue() <= SpinCtrl_Bottom->GetValue()) SpinCtrl_Top->SetValue(SpinCtrl_Bottom->GetValue() + 1);
    ValidateWindow();
}

void BufferSizeDialog::OnSpinCtrl_RightChange(wxSpinDoubleEvent & event)
{
    if (SpinCtrl_Left->GetValue() >= SpinCtrl_Right->GetValue()) SpinCtrl_Left->SetValue(SpinCtrl_Right->GetValue() - 1);
    ValidateWindow();
}

void BufferSizeDialog::OnValueCurve_Click(wxCommandEvent& event)
{
    ValueCurveButton * vc = (ValueCurveButton*)event.GetEventObject();
    int id = event.GetId();
    wxSpinCtrlDouble* spin = nullptr;
    if (id == ID_VALUECURVE_BufferTop)
    {
        spin = SpinCtrl_Top;
    }
    else if (id == ID_VALUECURVE_BufferBottom)
    {
        spin = SpinCtrl_Bottom;
    }
    else if (id == ID_VALUECURVE_BufferLeft)
    {
        spin = SpinCtrl_Left;
    }
    else if (id == ID_VALUECURVE_BufferRight)
    {
        spin = SpinCtrl_Right;
    }

    vc->ToggleActive();
    if (vc->GetValue()->IsActive())
    {
        ValueCurveDialog vcd(vc->GetParent(), vc->GetValue(), true, ValueCurve::GetSequenceElements());
        OptimiseDialogPosition(&vcd);
        if (vcd.ShowModal() != wxOK)
        {
            vc->SetActive(false);
        }
        else
        {
            if (vc->GetValue()->GetType() == "Flat")
            {
                spin->SetValue(vc->GetValue()->GetParameter1());
            }
        }
        vc->UpdateState();
    }

    ValidateWindow();
}

void BufferSizeDialog::ValidateWindow()
{
    if (ValueCurve_Top->GetValue()->IsActive())
    {
        SpinCtrl_Top->Enable(false);
    }
    else
    {
        SpinCtrl_Top->Enable();
    }
    if (ValueCurve_Bottom->GetValue()->IsActive())
    {
        SpinCtrl_Bottom->Enable(false);
    }
    else
    {
        SpinCtrl_Bottom->Enable();
    }
    if (ValueCurve_Left->GetValue()->IsActive())
    {
        SpinCtrl_Left->Enable(false);
    }
    else
    {
        SpinCtrl_Left->Enable();
    }
    if (ValueCurve_Right->GetValue()->IsActive())
    {
        SpinCtrl_Right->Enable(false);
    }
    else
    {
        SpinCtrl_Right->Enable();
    }

    if (ValueCurve_Top->GetValue()->GetType() == "Flat")
    {
        ValueCurve_Top->GetValue()->SetParameter1(SpinCtrl_Top->GetValue());
    }
    if (ValueCurve_Bottom->GetValue()->GetType() == "Flat")
    {
        ValueCurve_Bottom->GetValue()->SetParameter1(SpinCtrl_Bottom->GetValue());
    }
    if (ValueCurve_Left->GetValue()->GetType() == "Flat")
    {
        ValueCurve_Left->GetValue()->SetParameter1(SpinCtrl_Left->GetValue());
    }
    if (ValueCurve_Right->GetValue()->GetType() == "Flat")
    {
        ValueCurve_Right->GetValue()->SetParameter1(SpinCtrl_Right->GetValue());
    }

    if (_loadedBufferPresets.size() == 0)
    {
        BitmapButtonDelete->Disable();
        BitmapButtonSave->Disable();
    }
}

void BufferSizeDialog::OnVCChanged(wxCommandEvent& event)
{
    ValidateWindow();
}

void BufferSizeDialog::SaveBufferPreset(wxString const& name)
{
    wxLogNull logNo; //kludge: avoid "error 0" message from wxWidgets after new file is written

    if (!wxDir::Exists(xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers"))
    {
        wxDir::Make(xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers");
    }
    const wxString filename = xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers" + wxFileName::GetPathSeparator() + name + ".xbuffer";

    wxXmlNode* n = new wxXmlNode(wxXmlNodeType::wxXML_ELEMENT_NODE, "Buffer");

    n->AddAttribute("Left", wxString::Format("%g", SpinCtrl_Left->GetValue()));
    n->AddAttribute("Right", wxString::Format("%g", SpinCtrl_Right->GetValue()));
    n->AddAttribute("Top", wxString::Format("%g", SpinCtrl_Top->GetValue()));
    n->AddAttribute("Bottom", wxString::Format("%g", SpinCtrl_Bottom->GetValue()));
    n->AddAttribute("VCLeft", ValueCurve_Left->GetValue()->Serialise());
    n->AddAttribute("VCRight", ValueCurve_Right->GetValue()->Serialise());
    n->AddAttribute("VCTop", ValueCurve_Top->GetValue()->Serialise());
    n->AddAttribute("VCBottom", ValueCurve_Bottom->GetValue()->Serialise());

    wxXmlDocument doc;
    doc.SetRoot(n);
    doc.Save(filename);
}

void BufferSizeDialog::LoadBufferPreset(wxString const& name)
{
    static log4cpp::Category& logger_base = log4cpp::Category::getInstance(std::string("log_base"));

    if (name.IsEmpty())
        return;

    const wxString filename = FindBufferPreset(name);

    logger_base.debug("Loading buffer file %s.", (const char *)filename.c_str());

    wxXmlDocument doc;
    if (wxFile::Exists(filename) && doc.Load(filename) && doc.IsOk()) {
        auto n = doc.GetRoot();
        if (n != nullptr && n->GetName() == "Buffer") {
            SpinCtrl_Left->SetValue(wxAtof(n->GetAttribute("Left", "0.0")));
            SpinCtrl_Right->SetValue(wxAtof(n->GetAttribute("Right", "100.0")));
            SpinCtrl_Top->SetValue(wxAtof(n->GetAttribute("Top", "100.0")));
            SpinCtrl_Bottom->SetValue(wxAtof(n->GetAttribute("Bottom", "0.0")));
            ValueCurve_Left->GetValue()->Deserialise(n->GetAttribute("VCLeft", "Active=FALSE|"), true);
            ValueCurve_Right->GetValue()->Deserialise(n->GetAttribute("VCRight", "Active=FALSE|"), true);
            ValueCurve_Top->GetValue()->Deserialise(n->GetAttribute("VCTop", "Active=FALSE|"), true);
            ValueCurve_Bottom->GetValue()->Deserialise(n->GetAttribute("VCBottom", "Active=FALSE|"), true);
            ValueCurve_Left->UpdateBitmap();
            ValueCurve_Right->UpdateBitmap();
            ValueCurve_Top->UpdateBitmap();
            ValueCurve_Bottom->UpdateBitmap();
            ValueCurve_Left->NotifyChange();
            ValueCurve_Right->NotifyChange();
            ValueCurve_Top->NotifyChange();
            ValueCurve_Bottom->NotifyChange();
            ValidateWindow();
            logger_base.debug("buffer file loaded.");
            return;
        }
    }
    logger_base.warn("buffer file load failed.");
    wxMessageBox("Unable to load buffer file.");
}

void BufferSizeDialog::OnBitmapButtonSaveClick(wxCommandEvent& event)
{
    int const sel = ComboBoxBufferPresets->GetSelection();
    wxString name = ComboBoxBufferPresets->GetString(sel);

    if (name == "(New)")
    {
        name = wxGetTextFromUser("What is the New Buffer Preset Name?", "New Buffer Preset Name");
    }
    if (name.IsEmpty())
        return;

    _loadedBufferPresets.push_back(name.ToStdString());
    SaveBufferPreset(name);
    LoadAllBufferPresets();

    ComboBoxBufferPresets->SetStringSelection(name);
}

void BufferSizeDialog::OnBitmapButtonDeleteClick(wxCommandEvent& event)
{
    int const sel = ComboBoxBufferPresets->GetSelection();
    const wxString name = ComboBoxBufferPresets->GetString(sel);
    //wxString name = event.GetString();
    if (name == "(New)" || name.IsEmpty())
    {
        return;
    }

    const wxString filename = FindBufferPreset(name);
    if (!name.IsEmpty())
    {
        ::wxRemoveFile(filename);
    }

    LoadAllBufferPresets();
    ValidateWindow();
}

void BufferSizeDialog::LoadAllBufferPresets()
{
    _loadedBufferPresets.clear();
    wxDir dir;
    if (wxDir::Exists(xLightsFrame::CurrentDir))
    {
        dir.Open(xLightsFrame::CurrentDir);
        CreateBufferPresetsList(dir, false);
    }

    wxString d = xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers";
    if (wxDir::Exists(d))
    {
        dir.Open(d);
        CreateBufferPresetsList(dir, true);
    }

    if (ComboBoxBufferPresets->GetCount() != 0) {
        ComboBoxBufferPresets->Clear();
    }
    ComboBoxBufferPresets->AppendString("(New)");

    _loadedBufferPresets.sort();

    for (auto it = _loadedBufferPresets.begin(); it != _loadedBufferPresets.end(); ++it)
    {
        ComboBoxBufferPresets->AppendString(*it);
    }

    if (_loadedBufferPresets.size() == 0)
    {
        BitmapButtonDelete->Disable();
        BitmapButtonSave->Disable();
    }
}

void BufferSizeDialog::CreateBufferPresetsList(wxDir& directory, bool subdirs)
{
    wxString filename;
    bool cont = directory.GetFirst(&filename, "*.xbuffer", wxDIR_FILES);

    while (cont)
    {
        wxFileName fn(directory.GetNameWithSep() + filename);
        const wxString name = fn.GetName();
        //const wxString name = fn.GetFullName().ToStdString();

        if (!name.IsEmpty() && std::find(_loadedBufferPresets.begin(), _loadedBufferPresets.end(), name) == _loadedBufferPresets.end())
        {
            _loadedBufferPresets.push_back(name.ToStdString());
        }

        cont = directory.GetNext(&filename);
    }
}

wxString BufferSizeDialog::FindBufferPreset(const wxString& name) const
{
    if (wxFile::Exists(xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + name + ".xbuffer"))
    {
        return xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + name + ".xbuffer";
    }

    if (wxFile::Exists(xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers" + wxFileName::GetPathSeparator() + name + ".xbuffer"))
    {
        return xLightsFrame::CurrentDir + wxFileName::GetPathSeparator() + "buffers" + wxFileName::GetPathSeparator() + name + ".xbuffer";
    }

    return "";
}

void BufferSizeDialog::OnBuffer_PresetsSelect(wxCommandEvent& event)
{
    long sel = event.GetInt();
    wxString name = ComboBoxBufferPresets->GetString(sel);
    //wxString name = event.GetString();
    if (name == "(New)")
    {
        name = wxGetTextFromUser("What is the New Buffer Name?", "New Buffer Name");
        if (name.IsEmpty())
        {
            BitmapButtonDelete->Disable();
            return;
        }

        _loadedBufferPresets.push_back(name.ToStdString());
        SaveBufferPreset(name);
        LoadAllBufferPresets();

        ComboBoxBufferPresets->SetStringSelection(name);
        //return;
    }
    if (name.IsEmpty())
        return;

    BitmapButtonDelete->Enable();
    BitmapButtonSave->Enable();

    LoadBufferPreset(name);
}

void BufferSizeDialog::OnBufferChoiceDropDown(wxCommandEvent& WXUNUSED(event))
{
    if (_lastShowDir != xLightsFrame::CurrentDir)
    {
        _lastShowDir = xLightsFrame::CurrentDir;
        LoadAllBufferPresets();
        ValidateWindow();
    }
}
