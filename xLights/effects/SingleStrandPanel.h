#pragma once

/***************************************************************
 * This source files comes from the xLights project
 * https://www.xlights.org
 * https://github.com/smeighan/xLights
 * See the github commit history for a record of contributing
 * developers.
 * Copyright claimed based on commit dates recorded in Github
 * License: https://github.com/smeighan/xLights/blob/master/License.txt
 **************************************************************/

//(*Headers(SingleStrandPanel)
#include <wx/panel.h>
class wxBitmapButton;
class wxCheckBox;
class wxChoice;
class wxFlexGridSizer;
class wxNotebook;
class wxNotebookEvent;
class wxSlider;
class wxStaticText;
class wxTextCtrl;
//*)

#include "../BulkEditControls.h"
#include "EffectPanelUtils.h"

class SingleStrandPanel: public xlEffectPanel
{
	void ValidateWindow();

	public:

		SingleStrandPanel(wxWindow* parent);
		virtual ~SingleStrandPanel();

		//(*Declarations(SingleStrandPanel)
		BulkEditCheckBox* CheckBox_Chase_3dFade1;
		BulkEditCheckBox* CheckBox_Chase_Group_All;
		BulkEditChoice* Choice_Chase_Type1;
		BulkEditChoice* Choice_SingleStrand_Colors;
		BulkEditChoice* Choice_Skips_Direction;
		BulkEditSlider* Slider_Color_Mix1;
		BulkEditSlider* Slider_Number_Chases;
		BulkEditSlider* Slider_Skips_Advance;
		BulkEditSlider* Slider_Skips_BandSize;
		BulkEditSlider* Slider_Skips_SkipSize;
		BulkEditSlider* Slider_Skips_StartPos;
		BulkEditSliderF1* Slider_Chase_Rotations;
		BulkEditValueCurveButton* BitmapButton_Chase_Rotations;
		BulkEditValueCurveButton* BitmapButton_Color_Mix1VC;
		BulkEditValueCurveButton* BitmapButton_Number_ChasesVC;
		wxNotebook* SingleStrandEffectType;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStaticText* StaticText101;
		wxStaticText* StaticText105;
		wxStaticText* StaticText106;
		wxStaticText* StaticText109;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText179;
		wxStaticText* StaticText60;
		wxStaticText* StaticText61;
		wxStaticText* StaticText9;
		xlLockButton* BitmapButton_ChaseRotations;
		xlLockButton* BitmapButton_Chase_3dFade1;
		xlLockButton* BitmapButton_Chase_Group_All;
		xlLockButton* BitmapButton_Chase_Type1;
		xlLockButton* BitmapButton_Color_Mix1;
		xlLockButton* BitmapButton_Number_Chases;
		xlLockButton* BitmapButton_SingleStrand_Colors;
		xlLockButton* BitmapButton_SkipsAdvance;
		xlLockButton* BitmapButton_Skips_BandSize;
		xlLockButton* BitmapButton_Skips_Direction;
		xlLockButton* BitmapButton_Skips_SkipSize;
		xlLockButton* BitmapButton_Skips_StartingPosition;
		//*)

	protected:

		//(*Identifiers(SingleStrandPanel)
		static const long ID_STATICTEXT_SingleStrand_Colors;
		static const long ID_CHOICE_SingleStrand_Colors;
		static const long ID_BITMAPBUTTON_CHOICE_SingleStrand_Colors;
		static const long ID_STATICTEXT_Number_Chases;
		static const long ID_SLIDER_Number_Chases;
		static const long ID_VALUECURVE_Number_Chases;
		static const long IDD_TEXTCTRL_Number_Chases;
		static const long ID_BITMAPBUTTON_SLIDER_Number_Chases;
		static const long ID_STATICTEXT_Color_Mix1;
		static const long ID_SLIDER_Color_Mix1;
		static const long ID_VALUECURVE_Color_Mix1;
		static const long IDD_TEXTCTRL_Color_Mix1;
		static const long ID_BITMAPBUTTON_SLIDER_Color_Mix1;
		static const long ID_STATICTEXT_Chase_Rotations;
		static const long IDD_SLIDER_Chase_Rotations;
		static const long ID_VALUECURVE_Chase_Rotations;
		static const long ID_TEXTCTRL_Chase_Rotations;
		static const long ID_BITMAPBUTTON_SLIDER_Chase_Rotations;
		static const long ID_STATICTEXT_Chase_Type1;
		static const long ID_CHOICE_Chase_Type1;
		static const long ID_BITMAPBUTTON_CHOICE_Chase_Type1;
		static const long ID_CHECKBOX_Chase_3dFade1;
		static const long ID_BITMAPBUTTON_CHECKBOX_Chase_3dFade1;
		static const long ID_CHECKBOX_Chase_Group_All;
		static const long ID_BITMAPBUTTON_CHECKBOX_Chase_Group_All;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT_Skips_BandSize;
		static const long ID_SLIDER_Skips_BandSize;
		static const long IDD_TEXTCTRL_Skips_BandSize;
		static const long ID_BITMAPBUTTON_SLIDER_Skips_BandSize;
		static const long ID_STATICTEXT_Skips_SkipSize;
		static const long ID_SLIDER_Skips_SkipSize;
		static const long IDD_TEXTCTRL_Skips_SkipSize;
		static const long ID_BITMAPBUTTON_SLIDER_Skips_SkipSize;
		static const long ID_STATICTEXT_Skips_StartPos;
		static const long ID_SLIDER_Skips_StartPos;
		static const long IDD_TEXTCTRL_Skips_StartPos;
		static const long ID_BITMAPBUTTON_SLIDER_Skips_StartPos;
		static const long ID_STATICTEXT_Skips_Advance;
		static const long ID_SLIDER_Skips_Advance;
		static const long IDD_TEXTCTRL_Skips_Advance;
		static const long ID_BITMAPBUTTON_SLIDER_Skips_Advance;
		static const long ID_STATICTEXT_Skips_Direction;
		static const long ID_CHOICE_Skips_Direction;
		static const long ID_BITMAPBUTTON_CHOICE_Skips_Direction;
		static const long ID_PANEL21;
		static const long ID_NOTEBOOK_SSEFFECT_TYPE;
		//*)

	public:

		//(*Handlers(SingleStrandPanel)
		//*)

		DECLARE_EVENT_TABLE()
};
