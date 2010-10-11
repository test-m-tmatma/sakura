/*!	@file
	@brief �A�E�g���C�����  �f�[�^�v�f

	@author Norio Nakatani
	@date	1998/06/23 �쐬
*/
/*
	Copyright (C) 1998-2001, Norio Nakatani
	Copyright (C) 2002, YAZAKI
	Copyright (C) 2003, Moca

	This source code is designed for sakura editor.
	Please contact the copyright holder to use this code for other purpose.
*/

class CFuncInfo;

#ifndef _CFUNCINFO_H_
#define _CFUNCINFO_H_

#include "CMemory.h"

// CDlgFuncList::SetTree()�p m_Info
//	2003.06.27 Moca
#define FUNCINFO_NOCLIPTEXT 0x10000


//! �A�E�g���C�����  �f�[�^�v�f
//@date 2002.04.01 YAZAKI �[������
class CFuncInfo {
	public:
		CFuncInfo( int, int, const char*, int );	/* CFuncInfo�N���X�\�z */
		~CFuncInfo();	/* CFuncInfo�N���X���� */

		//! �N���b�v�{�[�h�ɒǉ�����v�f���H
		//	2003.06.27 Moca
		inline bool IsAddClipText( void ){
			return ( FUNCINFO_NOCLIPTEXT != ( m_nInfo & FUNCINFO_NOCLIPTEXT ) );
		};

//	private:
		int			m_nFuncLineCRLF;	/*!< �֐��̂���s(CRLF�P��) */
		int			m_nFuncLineLAYOUT;	/*!< �֐��̂���s(�܂�Ԃ��P��) */
		CMemory		m_cmemFuncName;	/*!< �֐��� */
		int			m_nInfo;		/*!< �t����� */
		int			m_nDepth;		/*!< �[�� */
};



///////////////////////////////////////////////////////////////////////
#endif /* _CFUNCINFO_H_ */


/*[EOF]*/