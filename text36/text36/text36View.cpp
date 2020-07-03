
// text36View.cpp : Ctext36View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "text36.h"
#endif

#include "text36Doc.h"
#include "text36View.h"
#include "MyShow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctext36View

IMPLEMENT_DYNCREATE(Ctext36View, CView)

BEGIN_MESSAGE_MAP(Ctext36View, CView)
	ON_COMMAND(ID_Show, &Ctext36View::OnShow)
	ON_COMMAND(ID_FILE_OPEN, &Ctext36View::OnFileOpen)
END_MESSAGE_MAP()

// Ctext36View ����/����

Ctext36View::Ctext36View()
{
	// TODO: �ڴ˴���ӹ������

}

Ctext36View::~Ctext36View()
{
}

BOOL Ctext36View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ctext36View ����

void Ctext36View::OnDraw(CDC* /*pDC*/)
{
	Ctext36Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ctext36View ���

#ifdef _DEBUG
void Ctext36View::AssertValid() const
{
	CView::AssertValid();
}

void Ctext36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctext36Doc* Ctext36View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctext36Doc)));
	return (Ctext36Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctext36View ��Ϣ�������


void Ctext36View::OnShow()
{
	// TODO: �ڴ���������������
	MyShow dlg;
	Ctext36Doc* pDoc = GetDocument();
	int k = dlg.DoModal();
		if (k == IDOK)
		{
			
		}
}


void Ctext36View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	Ctext36Doc* pDoc = GetDocument();
	CClientDC dc(this);

	int r = cfd.DoModal();
	if (r == IDOK)
	{
		pDoc->str = cfd.GetPathName();
		dc.TextOutW(20, 20, pDoc->str);
	}
}
