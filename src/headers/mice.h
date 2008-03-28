/*
 * Mice related
 *
 * Copyright (c) 2008    Nico Schottelius <nico-gpm2008 at schottelius.org>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _GPM_MICE_H
#define _GPM_MICE_H

/*************************************************************************
 * Includes
 */
#include "gpm.h"           /* Gpm_Event         */
#include "types.h"         /* Gpm_Type          */


/*************************************************************************
 * Macros
 */

#define STD_FLG (CREAD|CLOCAL|HUPCL)
#define GPM_B_BOTH (GPM_B_LEFT|GPM_B_RIGHT)
#define REALPOS_MAX 16383 /*  min 0 max=16383, but due to change.  */


/*************************************************************************
 * Global variables
 */
int realposx=-1,
    realposy=-1;


/*************************************************************************
 * Mice functions
 */

int check_no_argv(int argc, char **argv);
int parse_argv(argv_helper *info, int argc, char **argv);

#endif
