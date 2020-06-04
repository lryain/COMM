#if !defined(AFX_MSCOMM_H__90EFF4EC_4972_4552_982D_9E61DB2E8956__INCLUDED_)
#define AFX_MSCOMM_H__90EFF4EC_4972_4552_982D_9E61DB2E8956__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMSComm wrapper class

class CMSComm : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMSComm)
public:
	enum Handshake {
		comNone = 0, // 无握手
		comXonXoff, // 握手
		comRTS, // Request-to-send/clear-to-send 握手
		comRTSXOnXOff
	};
	enum OnComm {
		comEvSend = 1, // 发送事件
		comEvReceive, // 接收事件
		comEvCTS, // clear-to-send 线变化
		comEvDSR, // data-set ready 线变化
		comEvCD, // carroer detect 线变化
		comEvRing, // 振铃检测
		comEvEOF // 文件结束
	};
	enum Error {
		comEventBreak = 1001, // 接收到中断信号
		comEventCTSTO, // clear-to-send 超时
		comEventDSRTO, // Data-set ready 超时
		comEventFrame, // 帧错误
		comEventOverrun, // 端口超速
		comEventCDTO, // carrier detect 超时
		comEventRxOver, // 接收缓冲区溢出
		comEventRxParity, // Parity 错误
		comEventTxFull, // 传输缓冲区满
		comEventDCB // 检索端口，设备控制块(DCB)时意外错误
	};
	enum InputMode {
		comInputModeText, // （缺省）通过文本方式取回数据
		comInputModeBinary // 通过二进制方式取回数据
	};
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x648a5600, 0x2c6e, 0x101b, { 0x82, 0xb6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetCDHolding(BOOL bNewValue);
	BOOL GetCDHolding();
	void SetCommID(long nNewValue);
	long GetCommID();
	void SetCommPort(short nNewValue);
	short GetCommPort();
	void SetCTSHolding(BOOL bNewValue);
	BOOL GetCTSHolding();
	void SetDSRHolding(BOOL bNewValue);
	BOOL GetDSRHolding();
	void SetDTREnable(BOOL bNewValue);
	BOOL GetDTREnable();
	void SetHandshaking(long nNewValue);
	long GetHandshaking();
	void SetInBufferSize(short nNewValue);
	short GetInBufferSize();
	void SetInBufferCount(short nNewValue);
	short GetInBufferCount();
	void SetBreak(BOOL bNewValue);
	BOOL GetBreak();
	void SetInputLen(short nNewValue);
	short GetInputLen();
	void SetNullDiscard(BOOL bNewValue);
	BOOL GetNullDiscard();
	void SetOutBufferSize(short nNewValue);
	short GetOutBufferSize();
	void SetOutBufferCount(short nNewValue);
	short GetOutBufferCount();
	void SetParityReplace(LPCTSTR lpszNewValue);
	CString GetParityReplace();
	void SetPortOpen(BOOL bNewValue);
	BOOL GetPortOpen();
	void SetRThreshold(short nNewValue);
	short GetRThreshold();
	void SetRTSEnable(BOOL bNewValue);
	BOOL GetRTSEnable();
	void SetSettings(LPCTSTR lpszNewValue);
	CString GetSettings();
	void SetSThreshold(short nNewValue);
	short GetSThreshold();
	void SetOutput(const VARIANT& newValue);
	VARIANT GetOutput();
	void SetInput(const VARIANT& newValue);
	VARIANT GetInput();
	void SetCommEvent(short nNewValue);
	short GetCommEvent();
	void SetEOFEnable(BOOL bNewValue);
	BOOL GetEOFEnable();
	void SetInputMode(long nNewValue);
	long GetInputMode();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MSCOMM_H__90EFF4EC_4972_4552_982D_9E61DB2E8956__INCLUDED_)
