
// text36View.h : Ctext36View ��Ľӿ�
//

#pragma once


class Ctext36View : public CView
{
protected: // �������л�����
	Ctext36View();
	DECLARE_DYNCREATE(Ctext36View)

// ����
public:
	Ctext36Doc* GetDocument() const;

// ����
public:
	//CString str;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ctext36View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // text36View.cpp �еĵ��԰汾
inline Ctext36Doc* Ctext36View::GetDocument() const
   { return reinterpret_cast<Ctext36Doc*>(m_pDocument); }
#endif

