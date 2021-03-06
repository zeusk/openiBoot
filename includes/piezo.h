/**
 *  @file
 *  
 *  Header file for OpeniBoot's piezo electric buzzer interface.
 *
 *  The piezo buzzer interface (iPod Touch 1G only) allows the playing of 
 *  'notes' using the iPod Touch's built in buzzer. The sound is generated by 
 *  distorting the piece of metal inside the buzzer, you can choose the 
 *  frequency and duration through OpeniBoot.
 */

/*
 * piezo.h
 *
 * Copyright 2011 iDroid Project
 *
 * This file is part of iDroid. An android distribution for Apple products.
 * For more information, please visit http://www.idroidproject.org/.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef PIEZO_H
#define PIEZO_H

/**
 *  'Buzz' the piezo electric buzzer at a given frequncy for a given number of
 *  seconds. 
 *
 *  @param Frequency to 'buzz' buzzer at
 *
 *  @param Duration of 'buzz'
 */  
void piezo_buzz(int hertz, unsigned int microseconds);

/**
 *  Play a tune using a string of notes.
 *
 *  @param Input to be played.
 */
void piezo_play(const char* command);

#endif
