#pragma once

#include <d3d9.h>
#pragma warning( disable : 4996 )
#include <strsafe.h>
#pragma warning( default : 4996 )
#include <d3dx9math.h>

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
	BOOL DrawScene(bool Clear);
	VOID EndScene();
	VOID SetCamera();
	LPDIRECT3DDEVICE9 GetDeveice() { return g_pd3dDevice; }

private:
	HRESULT InitD3D();
	VOID Cleanup();

	HWND mhWnd;
	LPDIRECT3D9             g_pD3D = NULL;
	LPDIRECT3DDEVICE9       g_pd3dDevice = NULL;
};