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

#include <glew.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <io.h>
#include <windows.h>
#include <winsock.h>
#else
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#endif

#ifdef __linux__
#include <sys/statfs.h>
#endif

#ifdef _WIN32
#include <SDL.h>
#include <SDL_stdinc.h>
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_stdinc.h>
#endif

#ifdef __APPLE__
#include <OpenGL/gl.h>
#endif

#ifndef __APPLE__
#include <GL/gl.h>
#endif

void listvideomodes(void);

extern int numofsdlvideomodes;

extern SDL_Window* globalwindow;
extern SDL_GLContext* glcontext;
extern SDL_Surface* windowicon;
