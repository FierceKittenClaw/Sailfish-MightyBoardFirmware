/*
* Copyright 2011 by Alison Leonard	 <alison@makerbot.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifndef TWI_HH
#define TWI_HH

#define SCL_CLOCK  100000L

void TWI_init(bool force_reinit = false);

uint8_t TWI_write_data(uint8_t address, uint8_t * data, uint8_t length);
uint8_t TWI_read_byte(uint8_t address, uint8_t * data, uint8_t length);
uint8_t TWI_write_byte(uint8_t address, uint8_t data);

#endif
