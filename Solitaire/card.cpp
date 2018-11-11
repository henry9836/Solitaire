//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : card.cpp
// Description   : card cpp file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#include "utils.h"


#include "card.h"

CCard::CCard()
: m_bFacingUp(false)
{
}

CCard::~CCard()
{
	
}

bool
CCard::Initialise(ESprite _spriteType)
{
	m_eSpriteType = _spriteType;
    VALIDATE(CEntity::Initialise(_spriteType));

	//Assign suit types for each card
	if ((int)m_eSpriteType >= 1 && (int)m_eSpriteType <= 13)
	{
		m_eCardSuit = ESuit::SPADES;
	}
	else if ((int)m_eSpriteType >= 12 && ((int)m_eSpriteType <= 26))
	{
		m_eCardSuit = ESuit::HEARTS;
	}
	else if ((int)m_eSpriteType >= 27 && ((int)m_eSpriteType <= 39))
	{
		m_eCardSuit = ESuit::CLUBS;
	}
	else if ((int)m_eSpriteType >= 40 && ((int)m_eSpriteType <= 52))
	{
		m_eCardSuit = ESuit::DIAMONDS;
	}

    return (true);
}


void
CCard::Draw()
{
     CEntity::Draw();
}

void
CCard::Process(float _fDeltaTick)
{
    CEntity::Process(_fDeltaTick);
}


void
CCard::SetFaceUp(bool _b)
{
	FlipOpenCard(_b, *this);
	m_bFacingUp = _b;
}


bool
CCard::GetIsFaceUp() const
{
    return (m_bFacingUp);
}

bool CCard::GetIsRedSuit()
{
	if (GetCardSuit() == ESuit::DIAMONDS || GetCardSuit() == ESuit::HEARTS)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ESuit CCard::GetCardSuit()
{
	return m_eCardSuit;
}
