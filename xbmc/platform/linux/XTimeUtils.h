#pragma once

/*
 *      Copyright (C) 2005-2015 Team Kodi
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Kodi; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "PlatformDefs.h"

void GetLocalTime(LPSYSTEMTIME);

void WINAPI Sleep(uint32_t dwMilliSeconds);

int FileTimeToLocalFileTime(const FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);
int SystemTimeToFileTime(const SYSTEMTIME* lpSystemTime,  LPFILETIME lpFileTime);
long CompareFileTime(const FILETIME* lpFileTime1, const FILETIME* lpFileTime2);
int FileTimeToSystemTime( const FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);
int LocalFileTimeToFileTime( const FILETIME* lpLocalFileTime, LPFILETIME lpFileTime);
void GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime);

int FileTimeToTimeT(const FILETIME* lpLocalFileTime, time_t *pTimeT);
int TimeTToFileTime(time_t timeT, FILETIME* lpLocalFileTime);
