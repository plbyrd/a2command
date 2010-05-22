/**************************************************************
Copyright (c) 2010, Payton Byrd
All rights reserved.

Redistribution and use in source and binary forms, with or 
without modification, are permitted provided that the following 
conditions are met:

* Redistributions of source code must retain the above 
  copyright notice, this list of conditions and the following 
  disclaimer.

* Redistributions in binary form must reproduce the above 
  copyright notice, this list of conditions and the following 
  disclaimer in the documentation and/or other materials 
  provided with the distribution.

* Neither the name of A2-Command Team nor the names of its 
  contributors may be used to endorse or promote products 
  derived from this software without specific prior written 
  permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***************************************************************/

#ifndef _INPUT_H
#define _INPUT_H

// Global Hotkeys
#define HK_REREAD_LEFT		KEY_CTRL_E	// CTRL-E
#define HK_REREAD_RIGHT		KEY_ALT_E	// C=-E
#define HK_DRIVE_LEFT		KEY_CTRL_D	// CTRL-D
#define HK_DRIVE_RIGHT		KEY_ALT_D	// C=-D
#define HK_TOGGLE_PANELS	KEY_CTRL_T	// CTRL-T
#define HK_SELECT_ALL		KEY_CTRL_A	// CTRL-A
#define HK_DESELECT_ALL		KEY_CTRL_S	// CTRL-S
#define HK_QUIT				KEY_CTRL_U	// CTRL-U
#define HK_COPY				KEY_CTRL_C	// CTRL-C
#define HK_RENAME			KEY_CTRL_R	// CTRL-R
#define HK_DELETE			KEY_CTRL_L	// CTRL-L
#define HK_MAKE_DIRECTORY	KEY_CTRL_K	// CTRL-K
#define HK_TO_TOP			'{'		// ^
#define HK_TO_BOTTOM		'}'		// SHIFT-^
#define HK_PAGE_UP			'['
#define HK_PAGE_DOWN		']'
#define HK_SELECT			32



void  readKeyboard(void);

#endif