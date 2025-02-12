﻿
// SaleSysDlg.h: 头文件
//

#pragma once
#include "UserinfoDlg.h"

// CSaleSysDlg 对话框
class CSaleSysDlg : public CDialog
{
// 构造
public:
	CSaleSysDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SALESYS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_salesys_tab;
	CUserinfoDlg m_uerinfo_dlg;

	CDialog p_list_dlg;
};
