/* Metacity compositing manager */

/* 
 * Copyright (C) 2003 Red Hat, Inc.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef META_COMPOSITOR_H
#define META_COMPOSITOR_H

#include "util.h"
#include "display.h"

typedef struct MetaCompositor MetaCompositor;

MetaCompositor* meta_compositor_new           (MetaDisplay       *display);
void            meta_compositor_unref         (MetaCompositor    *compositor);
void            meta_compositor_process_event (MetaCompositor    *compositor,
                                               XEvent            *xevent,
                                               MetaWindow        *window);
void            meta_compositor_add_window    (MetaCompositor    *compositor,
                                               Window             xwindow,
                                               XWindowAttributes *attrs);


#endif /* META_COMPOSITOR_H */








