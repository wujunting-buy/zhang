#pragma once


// MyShow �Ի���

class MyShow : public CDialogEx
{
	DECLARE_DYNAMIC(MyShow)

public:
	MyShow(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyShow();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString s;
	virtual BOOL OnInitDialog();
};
