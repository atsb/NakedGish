/*
Copyright (C) 2005, 2010 - Cryptic Sea

This file is part of Gish.

Gish is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include <ogg/ogg.h>
#include <vorbis/codec.h>
#include <vorbis/vorbisenc.h>
#include <vorbis/vorbisfile.h>

#ifdef __APPLE__
#include <OpenAL/al.h>
#include <OpenAL/alc.h>
#endif

#ifndef __APPLE__
#include <al.h>
#include <alc.h>
#endif

#define OGGBUFFERSIZE 4096*8

void setupaudio(void);
int updateogg(void);
int streamogg(int buffernum);
void shutdownaudio(void);
void loadwav(int buffernum,char *filename);

ALCcontext *alcontext;
ALCdevice *aldevice;

int soundenabled;
ALuint soundbuffer[64];
int bufferloaded[64];

OggVorbis_File oggstream[2];

vorbis_info *vorbisinfo;
vorbis_comment *vorbiscomment;

ALenum oggformat;
char oggdata[OGGBUFFERSIZE];

ALuint oggsource;
ALuint oggbuffer[2];
