// ----------------------------------------------------------------
// SDL-OpenGL-Animation : using OpenGL v3.3 and FMOD
// Copyright (C) 2020 Jonathan Harrison. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#include <string>

class Texture
{
public:
	Texture();
	~Texture();
	
	bool Load(const std::string& fileName);
	void Unload();
	void CreateFromSurface(struct SDL_Surface* surface);
	
	void SetActive();
	
	int GetWidth() const { return mWidth; }
	int GetHeight() const { return mHeight; }
private:
	unsigned int mTextureID;
	int mWidth;
	int mHeight;
};
