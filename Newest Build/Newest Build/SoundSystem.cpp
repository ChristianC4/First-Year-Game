#include "SoundSystem.h"
#include "fmod_errors.h"

SoundSystemClass::SoundSystemClass() 
{
	if (FMOD::System_Create(&m_pSystem) != FMOD_OK)
	{
		// Report Error
		return;
	}

	int driverCount = 0;
	m_pSystem->getNumDrivers(&driverCount);

	if (driverCount == 0)
	{
		// Report Error
		return;
	}

	// Initialize our Instance with 36 Channels
	int check = m_pSystem->init(36, FMOD_INIT_NORMAL, 0);
}

void SoundSystemClass::createSound(SoundClass *pSound, const char* pFile)
{
	int check = m_pSystem->createSound(pFile, FMOD_HARDWARE, 0, pSound);
}

void SoundSystemClass::playSound(M_Sound &pSound, bool bLoop)
{
	if (!bLoop)
		pSound.sound->setMode(FMOD_LOOP_OFF);
	else
	{
		pSound.sound->setMode(FMOD_LOOP_NORMAL);
		pSound.sound->setLoopCount(-1);
	}

	unsigned int check = m_pSystem->playSound(FMOD_CHANNEL_FREE, pSound.sound, false, &pSound.CurrentPlayinChannel);
}

void SoundSystemClass::releaseSound(SoundClass pSound)
{
	pSound->release();
}

void SoundSystemClass::SetPause(M_Sound s, bool Pause)
{
	s.CurrentPlayinChannel->setPaused(Pause);
}