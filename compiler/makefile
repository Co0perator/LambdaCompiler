#LambdaLang Compiler makefile
#
#Copyright (C) 2020  Miles Potter
#
#This program is free software; you can redistribute it and/or
#modify it under the terms of the GNU General Public License
#as published by the Free Software Foundation; either version 2
#of the License, or (at your option) any later version.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program; if not, write to the Free Software
#Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

all: LambdaComp.c LambdaReg.c LambdaPreProc.c LambdaLexer.c
	gcc LambdaComp.c LambdaReg.c LambdaPreProc.c LambdaLexer.c -o LambdaComp

LambdaComp: LambdaComp.c
	gcc -c LambdaComp.c

LambdaReg: LambdaReg.c
	gcc -c LambdaReg.c

LambdaPreProc: LambdaPreProc.c
	gcc -c LambdaPreProc.c

LambdaLexer: LambdaLexer.c
	gcc -c LambdaLexer.c

objects: LambdaComp.c LambdaReg.c LambdaPreProc.c LambdaLexer.c
	gcc -c LambdaComp.c -c LambdaReg.c -c LambdaPreProc.c -c LambdaLexer.c

fromobjects: LambdaComp.o LambdaReg.o LambdaPreProc.o LambdaLexer.o
	gcc LambdaComp.o LambdaReg.o LambdaPreProc.o LambdaLexer.o -o LambdaComp
