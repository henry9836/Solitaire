//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : sprite.h
// Description   : sprite headder file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#if !defined(__SPRITE_H__)
#define __SPRITE_H__
#include "windows.h"
#include <vector>

#include "EEnums.h"

class CSprite
{
    // Member Functions
public:
    CSprite(ESprite _eType);
	CSprite();
    ~CSprite();

	bool Initialise();

    void Draw();
    void Process(float _fDeltaTick);

    int GetWidth() const;
    int GetHeight() const;

    int GetX() const;
    int GetY() const;
    void SetX(int _i);
    void SetY(int _i);

    void TranslateRelative(int _iX, int _iY);
    void TranslateAbsolute(int _iX, int _iY);

protected:

private:
    CSprite(const CSprite& _kr);
    CSprite& operator= (const CSprite& _kr);

    // Member Variables
public:

protected:
    //Center handle
    int m_iX;
    int m_iY;
	int m_iW;
	int m_iH;
	int m_iFramePositionW;
	int m_iFramePositionH;

	ESprite m_eSpriteType;

    HBITMAP m_hSprite;
    HBITMAP m_hMask;

    BITMAP m_bitmapSprite;
    BITMAP m_bitmapMask;

    static HDC s_hSharedSpriteDC;
    static int s_iRefCount;

private:

};

#endif    // __SPRITE_H__
