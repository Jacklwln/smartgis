#ifndef _GT_DEFS_H
#define _GT_DEFS_H
#include "smt_msg.h"
/*
File:    gt_defs.h

Desc:    grouptool defines

Version: Version 1.0

Writter:  �´���

Date:    2011.3.27

Copyright (c) 2010 CCL. All rights reserved.
*/

enum eViewMode
{
	VM_ZoomOff,
	VM_ZoomIn,
	VM_ZoomOut,
	VM_ZoomMove,
	VM_ZoomRestore,
	VM_ZoomRefresh
} ;

enum eSelectMode
{
	ST_Point,
	ST_Rect,
	ST_Circle,
	ST_Polygon
} ;

enum eFlashMode
{
	FM_2
} ;

enum eView3DMode
{
	V3DM_Normal,
	V3DM_TraceBall,
	V3DM_ShpereCamera,
	V3DM_FirstPerson,
} ;


enum eLineType
{
	LT_Arc,
	LT_Rect,
	LT_LineString,
	LT_LinearRing,
	LT_Spline_Lag,
	LT_Spline_Bzer,
	LT_Spline_B,
	LT_Spline_3
};

enum ePointType
{
	PT_DOT,
	PT_ChildImage,
	PT_Text
};


enum eRegionType
{
	RT_Fan,
	RT_Rect,
	RT_Polygon
};

enum SmtIAType
{
	eSmtIA_AppendFeature,
	eSmtIA_DeleteFeature,
	eSmtIA_ModifyFeature
};

#define				GT_TOOL_MAX_MSG_COUNT					20
#define				GT_TOOL_MAX_CMD_COUNT					30

//smt msg
//2d tool
#define				GT_MSG_DEFAULT_PROCESS					(SMT_MSG_2D_TOOL+0)									//Ĭ�ϴ���
#define				GT_MSG_INVALID							(SMT_MSG_2D_TOOL+1)									//��Ч��Ϣ
#define				GT_MSG_RET_DELEGATE						(SMT_MSG_2D_TOOL+2)									//ί�У�����

//input point tool
#define				GT_MSG_BEGIN_INPUT_POINT				(SMT_MSG_2D_TOOL+GT_TOOL_MAX_MSG_COUNT)				//�����빤�߿�ʼ��Ϣ
#define				GT_MSG_SET_INPUT_POINT_TYPE				(GT_MSG_BEGIN_INPUT_POINT+1)						//�������������
#define				GT_MSG_GET_INPUT_POINT_TYPE				(GT_MSG_BEGIN_INPUT_POINT+2)						//��ȡ���������
#define				GT_MSG_GET_INPUT_ANNO_ANGLE				(GT_MSG_BEGIN_INPUT_POINT+3)						//��ȡ����ע�ǺͽǶ�(���������ע�ǵĻ�)
#define				GT_MSG_RET_INPUT_POINT					(GT_MSG_BEGIN_INPUT_POINT+4)						//���������
#define				GT_MSG_END_INPUT_POINT					(GT_MSG_BEGIN_INPUT_POINT+GT_TOOL_MAX_MSG_COUNT)	//�����빤�߽�����Ϣ

//input line tool
#define				GT_MSG_BEGIN_INPUT_LINE					(GT_MSG_END_INPUT_POINT+1)
#define				GT_MSG_SET_INPUT_LINE_TYPE				(GT_MSG_BEGIN_INPUT_LINE+1)
#define				GT_MSG_GET_INPUT_LINE_TYPE				(GT_MSG_BEGIN_INPUT_LINE+2)
#define				GT_MSG_RET_INPUT_LINE					(GT_MSG_BEGIN_INPUT_LINE+3)
#define				GT_MSG_END_INPUT_LINE					(GT_MSG_BEGIN_INPUT_LINE+GT_TOOL_MAX_MSG_COUNT)

//input region tool
#define				GT_MSG_BEGIN_INPUT_REGION				(GT_MSG_END_INPUT_LINE+1)
#define				GT_MSG_SET_INPUT_REGION_TYPE			(GT_MSG_BEGIN_INPUT_REGION+1)
#define				GT_MSG_GET_INPUT_REGION_TYPE			(GT_MSG_BEGIN_INPUT_REGION+2)
#define				GT_MSG_RET_INPUT_REGION					(GT_MSG_BEGIN_INPUT_REGION+3)
#define				GT_MSG_END_INPUT_REGION					(GT_MSG_BEGIN_INPUT_REGION+GT_TOOL_MAX_MSG_COUNT)

//flash tool
#define				GT_MSG_BEGIN_FLASH						(GT_MSG_END_INPUT_REGION+1)
#define				GT_MSG_SET_FLASH_MODE					(GT_MSG_BEGIN_FLASH+1)
#define				GT_MSG_GET_FLASH_MODE					(GT_MSG_BEGIN_FLASH+2)
#define				GT_MSG_SET_PRA							(GT_MSG_BEGIN_FLASH+3)
#define				GT_MSG_SET_FLASH_DATA					(GT_MSG_BEGIN_FLASH+4)
#define				GT_MSG_GET_STATUS						(GT_MSG_BEGIN_FLASH+5)
#define				GT_MSG_END_FLASH						(GT_MSG_BEGIN_FLASH+GT_TOOL_MAX_MSG_COUNT)

//select tool
#define				GT_MSG_BEGIN_SELECT						(GT_MSG_END_FLASH+1)
#define				GT_MSG_SET_SEL_MODE						(GT_MSG_BEGIN_SELECT+1)
#define				GT_MSG_GET_SEL_MODE						(GT_MSG_BEGIN_SELECT+2)
#define				GT_MSG_END_SELECT						(GT_MSG_BEGIN_SELECT+GT_TOOL_MAX_MSG_COUNT)

//view ctrl tool
#define				GT_MSG_BEGIN_VIEWCTRL					(GT_MSG_END_SELECT+1)
#define				GT_MSG_GET_VIEW_MODE					(GT_MSG_BEGIN_VIEWCTRL+1)
#define				GT_MSG_SET_VIEW_MODE					(GT_MSG_BEGIN_VIEWCTRL+2)
#define				GT_MSG_SET_SCALEDELT					(GT_MSG_BEGIN_VIEWCTRL+3)
#define				GT_MSG_GET_SCALEDELT					(GT_MSG_BEGIN_VIEWCTRL+4)
#define				GT_MSG_END_VIEWCTRL						(GT_MSG_BEGIN_VIEWCTRL+10)

//WSview ctrl tool
#define				GT_MSG_BEGIN_WSVIEWCTRL					(GT_MSG_END_SELECT+1)
#define				GT_MSG_GET_WSVIEW_MODE					(GT_MSG_BEGIN_WSVIEWCTRL+1)
#define				GT_MSG_SET_WSVIEW_MODE					(GT_MSG_BEGIN_WSVIEWCTRL+2)
#define				GT_MSG_SET_ZOOMLEVEL					(GT_MSG_BEGIN_WSVIEWCTRL+3)
#define				GT_MSG_GET_ZOOMLEVEL					(GT_MSG_BEGIN_WSVIEWCTRL+4)
#define				GT_MSG_END_WSVIEWCTRL					(GT_MSG_BEGIN_WSVIEWCTRL+10)

//3dview ctrl tool
#define				GT_MSG_BEGIN_3DVIEWCTRL					(GT_MSG_END_WSVIEWCTRL+1)
#define				GT_MSG_GET_3DVIEW_MODE					(GT_MSG_BEGIN_3DVIEWCTRL+1)
#define				GT_MSG_SET_3DVIEW_MODE					(GT_MSG_BEGIN_3DVIEWCTRL+2)
#define				GT_MSG_END_3DVIEWCTRL					(GT_MSG_BEGIN_3DVIEWCTRL+GT_TOOL_MAX_MSG_COUNT)

//////////////////////////////////////////////////////////////////////////
//view control tool
#define				GT_MSG_CMD_VIEWCTRL_BEGIN				SMT_MSG_CMD_BEGIN
#define				GT_MSG_VIEW_ZOOMIN						(GT_MSG_CMD_VIEWCTRL_BEGIN+1)
#define				GT_MSG_VIEW_ZOOMOUT						(GT_MSG_CMD_VIEWCTRL_BEGIN+2)
#define				GT_MSG_VIEW_ZOOMMOVE					(GT_MSG_CMD_VIEWCTRL_BEGIN+3)
#define				GT_MSG_VIEW_ZOOMRESTORE					(GT_MSG_CMD_VIEWCTRL_BEGIN+4)
#define				GT_MSG_VIEW_ZOOMREFRESH					(GT_MSG_CMD_VIEWCTRL_BEGIN+5)
#define				GT_MSG_VIEW_ACTIVE						(GT_MSG_CMD_VIEWCTRL_BEGIN+6)
#define				GT_MSG_CMD_VIEWCTRL_END					(GT_MSG_CMD_VIEWCTRL_BEGIN+GT_TOOL_MAX_MSG_COUNT)

//WS control tool
#define				GT_MSG_CMD_WSVIEWCTRL_BEGIN				GT_MSG_CMD_VIEWCTRL_END
#define				GT_MSG_WSVIEW_ZOOMIN					(GT_MSG_CMD_WSVIEWCTRL_BEGIN+1)
#define				GT_MSG_WSVIEW_ZOOMOUT					(GT_MSG_CMD_WSVIEWCTRL_BEGIN+2)
#define				GT_MSG_WSVIEW_ZOOMMOVE					(GT_MSG_CMD_WSVIEWCTRL_BEGIN+3)
#define				GT_MSG_WSVIEW_ZOOMRESTORE				(GT_MSG_CMD_WSVIEWCTRL_BEGIN+4)
#define				GT_MSG_WSVIEW_ZOOMREFRESH				(GT_MSG_CMD_WSVIEWCTRL_BEGIN+5)
#define				GT_MSG_CMD_WSVIEWCTRL_END				(GT_MSG_CMD_WSVIEWCTRL_BEGIN+GT_TOOL_MAX_MSG_COUNT)

//select tool
#define				GT_MSG_CMD_SELECT_BEGIN					(GT_MSG_CMD_WSVIEWCTRL_END+1)
#define				GT_MSG_SELECT_POINTSEL					(GT_MSG_CMD_SELECT_BEGIN+1)
#define				GT_MSG_SELECT_RECTSEL					(GT_MSG_CMD_SELECT_BEGIN+2)
#define				GT_MSG_SELECT_POLYGONSEL				(GT_MSG_CMD_SELECT_BEGIN+3)
#define				GT_MSG_SELECT_CLEAR						(GT_MSG_CMD_SELECT_BEGIN+4)
#define				GT_MSG_CMD_SELECT_END					(GT_MSG_CMD_SELECT_BEGIN+GT_TOOL_MAX_MSG_COUNT)

//flash tool
#define				GT_MSG_CMD_FLASH_BEGIN					(GT_MSG_CMD_SELECT_END+1)
#define				GT_MSG_START_FLASH						(GT_MSG_CMD_FLASH_BEGIN+1)
#define				GT_MSG_STOP_FLASH						(GT_MSG_CMD_FLASH_BEGIN+2)
#define				GT_MSG_CMD_FLASH_END					(GT_MSG_CMD_FLASH_BEGIN+GT_TOOL_MAX_MSG_COUNT)

//append feature tool
#define				GT_MSG_CMD_APPEND_FEATURE_BEGIN			(GT_MSG_CMD_FLASH_END+1)
//point feature
#define				GT_MSG_APPEND_POINT_CHILDIMAGE_FEATURE	(GT_MSG_CMD_APPEND_FEATURE_BEGIN+1)
#define				GT_MSG_APPEND_POINT_ANNO_FEATURE		(GT_MSG_CMD_APPEND_FEATURE_BEGIN+2)
#define				GT_MSG_APPEND_POINT_DOT_FEATURE			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+3)

//line feature
#define				GT_MSG_APPEND_LINE_SPLINE_LAG_FEATURE	(GT_MSG_CMD_APPEND_FEATURE_BEGIN+4)
#define				GT_MSG_APPEND_LINE_SPLINE_BZER_FEATURE	(GT_MSG_CMD_APPEND_FEATURE_BEGIN+5)
#define				GT_MSG_APPEND_LINE_SPLINE_B_FEATURE		(GT_MSG_CMD_APPEND_FEATURE_BEGIN+6)
#define				GT_MSG_APPEND_LINE_SPLINE_3_FEATURE		(GT_MSG_CMD_APPEND_FEATURE_BEGIN+7)
#define				GT_MSG_APPEND_LINE_LINESTRING_FEATURE	(GT_MSG_CMD_APPEND_FEATURE_BEGIN+8)
#define				GT_MSG_APPEND_LINE_RECT_FEATURE			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+9)
#define				GT_MSG_APPEND_LINE_ARC_FEATURE			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+10)
#define				GT_MSG_APPEND_LINE_LINEARRING_FEATURE	(GT_MSG_CMD_APPEND_FEATURE_BEGIN+11)

//surf feature
#define				GT_MSG_APPEND_SURF_FAN_FEATURE			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+12)
#define				GT_MSG_APPEND_SURF_RECT_FEATURE			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+13)
#define				GT_MSG_APPEND_SURF_POLYGON_FEATURE		(GT_MSG_CMD_APPEND_FEATURE_BEGIN+14)
#define				GT_MSG_CMD_APPEND_FEATURE_END			(GT_MSG_CMD_APPEND_FEATURE_BEGIN+GT_TOOL_MAX_CMD_COUNT)

//3dview ctrl tool
#define				GT_MSG_CMD_3DVIEWCTRL_BEGIN				(GT_MSG_CMD_APPEND_FEATURE_END+1)
#define				GT_MSG_3DVIEW_TRACEBALL					(GT_MSG_CMD_3DVIEWCTRL_BEGIN+1)
#define				GT_MSG_3DVIEW_SPHERECAMERA				(GT_MSG_CMD_3DVIEWCTRL_BEGIN+2)
#define				GT_MSG_3DVIEW_FIRSTPERSON				(GT_MSG_CMD_3DVIEWCTRL_BEGIN+3)
#define				GT_MSG_3DVIEW_ACTIVE					(GT_MSG_CMD_3DVIEWCTRL_BEGIN+4)
#define				GT_MSG_3DVIEW_RESIZE					(GT_MSG_CMD_3DVIEWCTRL_BEGIN+5)
#define				GT_MSG_3DVIEW_RESTORE					(GT_MSG_CMD_3DVIEWCTRL_BEGIN+6)
#define				GT_MSG_CMD_3DVIEWCTRL_END				(GT_MSG_CMD_3DVIEWCTRL_BEGIN+GT_TOOL_MAX_CMD_COUNT)

#endif //_GT_DEFS_H