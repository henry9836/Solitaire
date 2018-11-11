//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name     : game.h
// Description   : game headder file
// Author        : Vaughan Webb, Harrison Orsbourne, henry oliver
// Mail          : Vaughan.web8091@mediadesign.school.nz Harrison.ors7919@mediadesign.school.nz henery.oli7939@mediadesign.school.nz

#if !defined(__GAME_H__)
#define __GAME_H__
#include <windows.h>
#include "clock.h"
#include "level.h"

class CBackBuffer;

class CGame
{
    // Member Functions
public:



    ~CGame();

	int draw3 = 0;

    bool Initialise(HINSTANCE _hInstance, HWND _hWnd, int _iWidth, int _iHeight);

    void Draw();
    void Process(float _fDeltaTick);

    void ExecuteOneFrame();
	void GameOverWon();

    CBackBuffer* GetBackBuffer();
    HINSTANCE GetAppInstance();
    HWND GetWindow();

	void NewGame();

    // Singleton Methods
    static CGame& GetInstance();
    static void DestroyInstance();
	CLevel* GetLevelInstance();

	static int m_MouseX;
	static int m_MouseY;

protected:

private:
    CGame();
    CGame(const CGame& _kr);
    CGame& operator= (const CGame& _kr);

    // Member Variables
public:



protected:
    CClock* pClock;
	CLevel* pLevel;

    CBackBuffer* pBackbuffer;

    //Application data
    HINSTANCE hInstance;
    HWND _hwnd;

    // Singleton Instance
    static CGame* pGame;

private:

};

#endif    // __GAME_H__
