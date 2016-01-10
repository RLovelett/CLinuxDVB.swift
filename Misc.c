//===--- Misc.c - ioctl overlay helpers -----------------------------------===//
//
// These headers are blah blah blah
//
//===----------------------------------------------------------------------===//

#include <stdint.h>
#include <sys/ioctl.h>

/* DVB Card Drivers */
#include <linux/dvb/version.h>
#include <linux/dvb/dmx.h>
#include <linux/dvb/frontend.h>
#include <linux/dvb/ca.h>

extern uint64_t test = DMX_SET_BUFFER_SIZE;

extern inline int
_swift_Glibc_ioctl(int fd, unsigned long cmd, int value) {
  return ioctl(fd, cmd, value);
}

extern inline int
set_buffer_size(int fd, int new_buffer_size) {
  return ioctl(fd, DMX_SET_BUFFER_SIZE, new_buffer_size);
}
