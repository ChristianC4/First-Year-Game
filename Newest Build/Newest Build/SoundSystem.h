#pragma once
#include "fmod.hpp"
typedef FMOD::Sound* SoundClass;

class M_Sound 
{
public:
	M_Sound() {};
	~M_Sound() {};
	SoundClass sound;
	FMOD::Channel *CurrentPlayinChannel;
};
//#pragma comment(lib, "fmod_vc.lib")
#pragma comment(lib, "fmodex_vc.lib")
//#pragma comment(lib,"fmodL_vc.lib")

class SoundSystemClass 
{
	public:
	FMOD::System *m_pSystem;
	SoundSystemClass();
	~SoundSystemClass() {};
	void createSound(SoundClass *pSound, const char* pFile);
	void playSound(M_Sound &s, bool bLoop = false);
	void releaseSound(SoundClass pSound);
	void SetPause(M_Sound, bool);
};

