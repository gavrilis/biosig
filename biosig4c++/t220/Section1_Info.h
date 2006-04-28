/*
---------------------------------------------------------------------------
Copyright (C) 2005-2006  Franco Chiarugi
Developed at the Foundation for Research and Technology - Hellas, Heraklion, Crete

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
---------------------------------------------------------------------------
*/
/*
// Section1_Info.h: interface for the cSection1_Info class.
*/

#if !defined SECTION1_INFO
#define SECTION1_INFO

#ifndef VS_DEF
#include "../biosig.h"
#else
#include "biosig_vs.h"
#endif

typedef struct _DATE {
	uint8_t		dd;
	uint8_t		mm;
	int16_t		yyyy;
} DATE, *PDATE;

typedef struct _TIME {
	uint8_t		hh;
	uint8_t		mm;
	uint8_t		ss;
} TIME, *PTIME;

class cSection1_Info
{
public:
	cSection1_Info(void);
	virtual ~cSection1_Info(void);

public:
	char szLastName[64];
	char szFirstName[64];
	char szPatientID[64];
	char szSecondLastName[64];
	DATE DOB;
	uint16_t wSCPECGRevNum;
	uint16_t wHeight;
	uint8_t bHeightUnit;
	uint16_t wWeight;
	uint8_t bWeightUnit;
	uint8_t bSex;
	uint16_t wSBP;
	uint16_t wDBP;
	uint16_t wInstNum;
	uint16_t wDeptNum;
	uint16_t wDevID;
	uint8_t bDevType;
	uint8_t bManCode;
	char szModDesc[6];
	uint8_t bSCPECGProtRevNum;
	uint8_t bSCPECGProtCompLev;
	uint8_t bLangSuppCode;
	uint8_t bCapECGDev;
	uint8_t bMainsFreq;
	char szAnalProgRevNum[25];
	char szSerNumAcqDev[25];
	char szAcqDevSystSW[25];
	char szSCPImplSW[25];
	char szAcqDevManuf[25];
	char szRefPhys[64];
	char szLCPhys[64];
	char szTechnician[64];
	uint8_t bStatCode;
	DATE DOA;
	TIME TOA;
	uint16_t wBaseLineFilter;
	uint8_t bFilterBitMap;
	char szSeqNum[12];			// Suggested is 12, but we need to put more info in it
	uint16_t wDateTimeZoneOffset;
	uint16_t wDateTimeZoneIndex;
	char szDateTimeZoneDesc[25];
};

#endif
