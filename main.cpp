/*
	@File 		main.cpp
	@Author		JOSIMAR PEREIRA LEITE
	@country	Brazil
	@Date		20/06/21
	

    Copyright (C) 2021  JOSIMAR PEREIRA LEITE

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
*/

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>

#include "st7735.h"

ST7735 st7735;

int main(void)
{
	st7735.Init();
	
	st7735.WriteString("St7735", 5, 5, Font_Arial_10x10, ST7735_COLOR_BLUE);

	while(1);
}
