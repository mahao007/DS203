#ifndef __INPUTMENU_H__
#define __INPUTMENU_H__

#include <Source/Core/Controls.h>
#include <Source/Core/ListItems.h>
#include <Source/Core/Settings.h>
#include <Source/Gui/Oscilloscope/Graph.h>

#include "ListAnalog.h"
#include "ListDigital.h"
#include "ListTrigger.h"
#include "ItemAnalog.h"
#include "ItemDigital.h"
#include "ItemTime.h"
#include "ItemTrigger.h"

class CWndMenuInput : public CWnd
{
public:
	// Menu items
	CItemAnalog		m_itmCH1;
	CItemAnalog		m_itmCH2;
	CItemDigital	m_itmCH3;
	CItemDigital	m_itmCH4;
	CItemTime		m_itmTime;
	CItemWindow		m_itmWindow;
	CItemTrigger	m_itmTrig;

	// Lists
	CWndListAInput	m_wndListAInput;
	CWndListDInput	m_wndListDInput;
	CComboSelector	m_wndComboSelector;
	CWndListTrigger	m_wndListTrigger;

	// modal
//	CWnd*			m_pListSource;
//	CWnd*			m_pComboSource;

	// dev
	static void ConfigureAdc();
	static void ConfigureTrigger();

	CWndMenuInput();

	virtual void Create(CWnd *pParent, ui16 dwFlags);
	virtual void OnMessage(CWnd* pSender, ui16 code, ui32 data);
};

#endif