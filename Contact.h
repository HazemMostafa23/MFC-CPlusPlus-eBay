#pragma once


// Contact dialog

class Contact : public CDialogEx
{
	DECLARE_DYNAMIC(Contact)

public:
	Contact(CWnd* pParent = NULL);   // standard constructor
	virtual ~Contact();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton12();
};
