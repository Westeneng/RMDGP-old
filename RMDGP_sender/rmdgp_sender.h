/*
 * rmdgp_sender.h
 *
 *  Created on: Mar 2, 2017
 *      Author: Gerald Westeneng
 *
 * This file is part of RMDGP.
 *
 *  RMDGP is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  RMDGP is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RMDGP.  If not, see <http://www.gnu.org/licenses/>. 
*/

#ifndef RMDGP_SENDER_H_
#include <stddef.h>

typedef struct snd_obj_s *snd_obj;

int rmdgp_s_create_sender(snd_obj *obj_p);
int rmdgp_s_send(snd_obj obj, void *data, size_t len);

#define RMDGP_SENDER_H_

#endif /* RMDGP_SENDER_H_ */
