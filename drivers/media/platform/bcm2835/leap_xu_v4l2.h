/*
 * Copyright © 2016 Leap Motion, Inc.
 *
 */

#ifndef LEAP_XU_V4L2_H
#define LEAP_XU_V4L2_H

long xu_ioctl_default(struct file *file, void *fh, bool valid_prio, unsigned int cmd, void *arg);

#endif /* LEAP_XU_V4L2_H */
