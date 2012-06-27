/* BGP VTY interface.
   Copyright (C) 1996, 97, 98, 99, 2000 Kunihiro Ishiguro

This file is part of GNU Zebra.

GNU Zebra is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

GNU Zebra is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Zebra; see the file COPYING.  If not, write to the Free
Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

#ifndef _QUAGGA_BGP_VTY_H
#define _QUAGGA_BGP_VTY_H

#define CMD_AS_RANGE "<1-4294967295>"

struct prefix_rd;

extern void bgp_vty_init (void);
extern void bgp_vty_show_init (void);
extern void bgp_vty_clear_init (void);
extern const char *afi_safi_print (afi_t, safi_t);
extern const char *community_direct_str (int);

extern struct bgp *vty_bgp_get (struct vty *, const char *);
extern int vty_get_arg_afi_safi (struct vty *, struct vty_arg **, afi_t *, safi_t *);
extern int vty_get_rd (struct vty *, const char *, struct prefix_rd *);
extern struct peer *vty_peer_lookup (struct vty *, struct bgp *, afi_t, safi_t,
                                     const char *);

#endif /* _QUAGGA_BGP_VTY_H */
