#pragma once
class Canon
{
public:
	Canon();
	~Canon();

	void Update();
	void Draw(ID3DXSprite* spriteBatch);

private:
	// Sprite
	IDirect3DTexture9* texture;
	D3DXIMAGE_INFO info;
	D3DXVECTOR3 position;
	D3DXVECTOR3 center;
	D3DXVECTOR3 direction;
	float speed;
	float angle;
};

