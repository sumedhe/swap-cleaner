/*
 * commander.h
 *
 * Copyright (C) 2017 - Sumedhe Dissanayake
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <string>

using namespace std;

namespace cmd {

	 string execute(string command) {
    	FILE *in;
    	char buff[50];

    	if (!(in = popen(command.c_str(), "r"))){
    		return "Error in excecution!";
    	}

    	string s;
    	while(fgets(buff, sizeof(buff), in) != NULL){
    		s.append(buff);
    	}

    	cout << s << endl;

    	return s;
    }
	 
 }