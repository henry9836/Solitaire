//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : backgrounds.h
// Description   : backgrounds headder file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#pragma once

#if !defined(__BACKGROUND_H__)
#define __BACKGROUND_H__

#include "entity.h"
#include "EEnums.h"
class CSprite;

class CBackGround : public CEntity
{

public:
	CBackGround();
	virtual ~CBackGround();

	virtual bool Initialise();

	virtual void Draw();
	virtual void Process(float _fDeltaTick);


protected:

private:
	CBackGround(const CBackGround& _kr);
	CBackGround& operator= (const CBackGround& _kr);

	// Member Variables
public:

protected:


private:

};

#endif    // __BACKGROUND_H__