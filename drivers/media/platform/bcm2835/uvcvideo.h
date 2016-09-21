/*
 *	uvc_video.c  --  USB Video Class Gadget driver
 *
 *	Copyright (C) 2009-2010
 *	    Laurent Pinchart (laurent.pinchart@ideasonboard.com)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 */

#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/errno.h>
#include <linux/usb/ch9.h>
//#include <linux/usb/gadget.h>

#include <media/v4l2-dev.h>

#include "uvc.h"
#include "uvc_queue.h"

/* --------------------------------------------------------------------------
 * Video codecs
 */


/* --------------------------------------------------------------------------
 * Request handling
 */


/* --------------------------------------------------------------------------
 * Video streaming
 */

/*
 * uvc_video_pump - Pump video data into the USB requests
 *
 * This function fills the available USB requests (listed in req_free) with
 * video data from the queued buffers.
 */
