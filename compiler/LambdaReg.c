/***********************************************
LambdaLang Compiler

Copyright (C) 2020  Miles Potter

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
***********************************************/

#include <stdio.h>
#include <string.h>
#include "LambdaReg.h"

int lregcomp(char* input, char* expression)
{
	int matches = 0;
	for(int i = 0; i < strlen(input); i++)
	{
		for(int j = 0; j < strlen(expression); j++)
		{
			if(*(input + i) == *(expression + j)) matches = 1;
		}
		if(matches == 0) return 0;
		matches = 0;
	}
	return 1;
}
