// Credits.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCredits dialog

class CCredits : public CDialog
{
// Construction
public:
	CCredits(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCredits)
	enum { IDD = IDD_CREDITS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCredits)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCredits)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
