/*********************************************************************
 * This is a part of Angry IP Scanner source code                    *
 * http://www.angryziber.com/ipscan/                                 *
 *                                                                   *
 * Written by Angryziber                                             *
 *                                                                   *
 * You may distribute this code as long as this message is not       *
 * removed and it is clear who has written it.                       *
 * You may not rename the program and distribute it.                 *
 *********************************************************************/

// NetBIOSUtils.h: interface for the CScanFunc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCANFUNC_H__15CE10D2_FC18_44BA_A9CA_52346AC446E3__INCLUDED_)
#define AFX_SCANFUNC_H__15CE10D2_FC18_44BA_A9CA_52346AC446E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CNetBIOSUtils
{
protected:
	int RetrieveData(char *buf, int nBufSize);	
	CString m_szIP;	

public:			
	CNetBIOSUtils();
	virtual ~CNetBIOSUtils();
	void setIP(LPCSTR szIP);
	void setIP(DWORD nIP);
	BOOL GetNames(CString *szUserName, CString *szComputerName, CString *szGroupName, CString *szMacAddress);	
	
};

#endif // !defined(AFX_SCANFUNC_H__15CE10D2_FC18_44BA_A9CA_52346AC446E3__INCLUDED_)
