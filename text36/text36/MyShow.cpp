// MyShow.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "text36.h"
#include "MyShow.h"
#include "afxdialogex.h"
#include"text36Doc.h"
#include"text36View.h"

// MyShow �Ի���

IMPLEMENT_DYNAMIC(MyShow, CDialogEx)

MyShow::MyShow(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

MyShow::~MyShow()
{
}

void MyShow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
}


BEGIN_MESSAGE_MAP(MyShow, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &MyShow::OnEnChangeEdit1)
END_MESSAGE_MAP()


// MyShow ��Ϣ�������


void MyShow::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	
}


BOOL MyShow::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Ctext36Doc* pDoc =((Ctext36View *)((CFrameWnd *)AfxGetMainWnd())->GetActiveView())->GetDocument();
	this->UpdateData(true);
	s = pDoc->str;
	this->UpdateData(false);
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
