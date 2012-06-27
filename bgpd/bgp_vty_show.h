/* Functions used by the "show bgp ..." CLI commands.
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

#ifndef _QUAGGA_BGP_VTY_SHOW_H
#define _QUAGGA_BGP_VTY_SHOW_H

#include "bgpd/bgp_vty.h"

extern int bgp_show_normal (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_cidr_only (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_prefix_list (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_filter_list (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_route_map (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_community_list (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_regexp (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_prefix_longer (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_community (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_neighbor_route (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_summary (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_neighbor (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_route (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_route_flap (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_paths (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_stats (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_community_list (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_adj (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_received_prefix_filter (struct vty *vty, struct vty_arg *args[]);
extern int bgp_peer_counts (struct vty *vty, struct vty_arg *args[]);
extern int bgp_show_labels (struct vty *vty, struct vty_arg *args[]);

#endif /* _QUAGGA_BGP_VTY_SHOW_H */
