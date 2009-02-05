/* $XFree86: xc/programs/Xserver/Xi/chgptr.h,v 3.2 2003/11/17 22:20:29 dawes Exp $ */
/************************************************************

Copyright 1996 by Thomas E. Dickey <dickey@clark.net>

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of the above listed
copyright holder(s) not be used in advertising or publicity pertaining
to distribution of the software without specific, written prior
permission.

THE ABOVE LISTED COPYRIGHT HOLDER(S) DISCLAIM ALL WARRANTIES WITH REGARD
TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS, IN NO EVENT SHALL THE ABOVE LISTED COPYRIGHT HOLDER(S) BE
LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

********************************************************/

#ifndef CHGPTR_H
#define CHGPTR_H 1

int
SProcXChangePointerDevice(
	ClientPtr              /* client */
	);

int
ProcXChangePointerDevice (
	ClientPtr              /* client */
	);

void
DeleteFocusClassDeviceStruct(
	DeviceIntPtr           /* dev */
	);

void
SendEventToAllWindows (
	DeviceIntPtr           /* dev */,
	Mask                   /* mask */,
	xEvent *               /* ev */,
	int                    /* count */
	);

void
FindInterestedChildren ( /* FIXME: could be static? */
	DeviceIntPtr           /* dev */,
	WindowPtr              /* p1 */,
	Mask                   /* mask */,
	xEvent *               /* ev */,
	int                    /* count */
	);

void
SRepXChangePointerDevice (
	ClientPtr              /* client */,
	int                    /* size */,
	xChangePointerDeviceReply * /* rep */
	);

#endif /* CHGPTR_H */
