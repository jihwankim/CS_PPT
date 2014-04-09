#pragma once
#include <d3d9.h>
#pragma warning( disable : 4996 )
#include <strsafe.h>
#pragma warning( default : 4996 )
#include <d3dx9math.h>
#include "Core.h"

class CGround
{
private:
	DWORD m_dwNumVertices, m_dwNumIndices;
	LPDIRECT3DINDEXBUFFER9	m_pIB;
	LPDIRECT3DVERTEXBUFFER9	m_pVB;
	LPDIRECT3DDEVICE9		m_pd3dDevice;
	int m_nCol, m_nRow;

public:
	void Create(LPDIRECT3DDEVICE9 device, int nRow, int nCol, float fSize);
	void OnRender();
	void OnRelease();

public:
	CGround();
	~CGround(void);
};

