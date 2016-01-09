#include <sys/ioctl.h>

/* DVB Card Drivers */
#include <linux/dvb/version.h>
#include <linux/dvb/dmx.h>
#include <linux/dvb/frontend.h>
#include <linux/dvb/ca.h>

static inline int set_buffer_size(int fd, int new_buffer_size) {
  return ioctl(fd, DMX_SET_BUFFER_SIZE, new_buffer_size);
}
