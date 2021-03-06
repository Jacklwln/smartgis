// SmartGisDoc.cpp : CSmartGisDoc 类的实现
//

#include "stdafx.h"
#include "SmartGis.h"

#include "SmartGisDoc.h"
#include "SmartGisView.h"
#include "SmartMapEditView.h"

#include "smt_logmanager.h"

using namespace Smt_Core;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CSmartGisDoc

IMPLEMENT_DYNCREATE(CSmartGisDoc, CDocument)

BEGIN_MESSAGE_MAP(CSmartGisDoc, CDocument)
	

END_MESSAGE_MAP()


// CSmartGisDoc 构造/析构

CSmartGisDoc::CSmartGisDoc()
{
	// TODO: 在此添加一次性构造代码
	m_hCurMainMenu = NULL;
}

CSmartGisDoc::~CSmartGisDoc()
{

}

BOOL CSmartGisDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}

// CSmartGisDoc 序列化

void CSmartGisDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}

HMENU CSmartGisDoc::GetDefaultMenu()
{
	return m_hCurMainMenu;
}

// CSmartGisDoc 诊断

#ifdef _DEBUG
void CSmartGisDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSmartGisDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSmartGisDoc 命令
//////////////////////////////////////////////////////////////////////////
