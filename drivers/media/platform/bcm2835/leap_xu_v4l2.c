/*
 *
 * Copyright © 2016 Leap Motion, Inc.
 *
 * V4L2 driver Leap Motion extension unit code
 */
include <linux/uvcvideo.h>

long xu_ioctl_default(struct file *file, void *fh, bool valid_prio, unsigned int cmd, void *arg) {
 
         switch (cmd) {
        /* Dynamic controls. */
         case UVCIOC_CTRL_QUERY:
                 return handle_xu_operation(fh, valid_prio, arg);

         case UVCIOC_CTRL_MAP:
                 return -ENOTTY;

         default:
                 return -ENOTTY;
}

static long handle_xu_operation(void *fh, bool valid_prio, void *arg){
   uvc_xu_control_query control_query = (uvc_xu_control_query *) arg;
   return 0;
}