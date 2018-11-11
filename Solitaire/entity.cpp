//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : entinity.cpp
// Description   : entinity cpp file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz


#include "resource.h"
#include "Sprite.h"
#include "utils.h"

#include "entity.h"

CEntity::CEntity()
: m_fX(0.0f)
, m_fY(0.0f)
, m_fWidth(121.0f)
, m_fHeight(177.0f)

{

}

CEntity::~CEntity()
{
    delete m_pSprite;
    m_pSprite = 0;
}

//Initialises entity with specified sprite,

bool CEntity::Initialise()
{
    return (true);
}

// Initialises entity with specified sprite,

bool CEntity::Initialise(ESprite _eType)
{
	m_pSpriteFront = new CSprite(_eType);
	m_pSprite = m_pSpriteFront;

	m_eSpriteType = _eType;
	VALIDATE(m_pSpriteFront->Initialise());
	if (_eType != ESprite::BACKGROUND && _eType != ESprite::NONE)
	{
		m_pSpriteBack = new CSprite(ESprite::CARDBACK);
		VALIDATE(m_pSpriteBack->Initialise());
		m_pSprite = m_pSpriteBack;
	}

	return (true);
}

void CEntity::Draw()
{
	m_pSprite->Draw();
}

// Calls the sprite's process function

void
CEntity::Process(float _fDeltaTick)
{
    m_pSprite->SetX(static_cast<int>(m_fX));
    m_pSprite->SetY(static_cast<int>(m_fY));

    m_pSprite->Process(_fDeltaTick);
}


// Checks if the current entity is colliding with another

bool CEntity::IsCollidingWith(CEntity& e)
{
	bool colliding = false;
	
	int e1 = m_pSprite->GetWidth() / 2;
	int e1X = m_pSprite->GetX();
	int e1Y = m_pSprite->GetY();

	int e2 = e.m_pSprite->GetWidth() / 2;
	int e2X = e.m_pSprite->GetX();
	int e2Y = e.m_pSprite->GetY();

	int collision = e1 + e2;
	int actualdistance = static_cast<int> (sqrt(pow((e2X - e1X), 2) + pow((e2Y - e1Y), 2)));

	if (actualdistance < collision)
	{
		colliding = true;
	}

	return colliding;
}

ESprite CEntity::GetCardType()
{
	return m_eSpriteType;
}


//Gets the height of the entity/sprite

float  CEntity::GetHeight() const
{
    return (static_cast<float>(m_pSprite->GetHeight()));
}


//Sets the height of the entity

void CEntity::SetHeight(float _f)
{
	m_fHeight = _f;
}

//Sets the width of the entity

void CEntity::SetWidth(float _f)
{
	m_fWidth = _f;
}

// Gets the width of the entity/sprite

float CEntity::GetWidth() const
{
	return (static_cast<float>(m_pSprite->GetWidth()));
}

// Sets the X position of the entity

void CEntity::SetX(float _f)
{
	m_fX = _f;
}

//Sets the Y position of the entity

void CEntity::SetY(float _f)
{
	m_fY = _f;
}

//Gets the X position of the entity

float CEntity::GetX() const
{
	return (m_fX);
}

//Gets the Y position of the entity

float CEntity::GetY() const
{
	return (m_fY);
}


//Flips open the 

void CEntity::FlipOpenCard(bool _open, CEntity& e)
{
	//Switch sprites
	if (_open)
	{
		//if true, set current sprite as front of card
		e.m_pSpriteFront->SetX(e.m_pSprite->GetX()); //Fixes first time draw at 0,0
		e.m_pSpriteFront->SetY(e.m_pSprite->GetY());
		e.m_pSprite = e.m_pSpriteFront;
	}
	else
	{
		//if false, set current sprite as back of card
		e.m_pSprite = e.m_pSpriteBack;
	}
}
