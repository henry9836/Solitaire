//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : entity.h
// Description   : entinity headder file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#pragma once

#if !defined(__ENTITY_H__)
#define __ENTITY_H__
#include "EEnums.h"


class CSprite;

class CEntity
{
public:
	CEntity();
	virtual ~CEntity();

	virtual bool Initialise();
	virtual bool Initialise(ESprite enemyType);

	virtual void Draw() = 0;
	virtual void Process(float _fDeltaTick);

	void SetX(float _f);
	void SetY(float _f);

	float GetX() const;
	float GetY() const;

	void SetHeight(float _f);
	void SetWidth(float _f);

	float GetHeight() const;
	float GetWidth() const;

	ESprite GetCardType();
	void FlipOpenCard(bool _open, CEntity& e);
	bool IsCollidingWith(CEntity& e);

protected:
	CSprite* m_pSprite;
	CSprite* m_pSpriteBack;
	CSprite* m_pSpriteFront;
	ESprite m_eSpriteType;

	float m_fX;
	float m_fY;
	float m_fWidth;
	float m_fHeight;

private:
	CEntity(const CEntity& _kr);
	CEntity& operator= (const CEntity& _kr);

};


#endif // __ENTITY_H__
