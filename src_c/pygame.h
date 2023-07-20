/*
    pygame-ce - Python Game Library
    Copyright (C) 2000-2001  Pete Shinners

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Pete Shinners
    pete@shinners.org
*/

/* This will use PYGAMEAPI_DEFINE_SLOTS instead
 * of PYGAMEAPI_EXTERN_SLOTS for base modules.
 */
#ifndef PYGAME_INTERNAL_H
#define PYGAME_INTERNAL_H

#define PYGAME_H
#include "_pygame.h"

#endif /* ~PYGAME_INTERNAL_H */

/* Python macro for comparing to Py_None
 * Py_IsNone is naturally supported by Python 3.10 or higher
 * so this macro can be removed after the minimum supported
 * Python version reaches 3.10
 */ 
#ifndef Py_IsNone
#define Py_IsNone(x) x == Py_None
#endif
