#pragma once
#include <d3d9.h>
#pragma warning( disable : 4996 )
#include <strsafe.h>
#pragma warning( default : 4996 )

#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZRHW|D3DFVF_DIFFUSE)
struct CUSTOMVERTEX
{
	FLOAT x, y, z, rhw;
	DWORD color;
};

class DirectX
{
public:
	DirectX();
	~DirectX();

	BOOL Init(HWND hWnd);
	VOID Render();

private:
	HRESULT InitD3D();
	HRESULT InitVB();
	VOID Cleanup();

	HWND mhWnd;
};