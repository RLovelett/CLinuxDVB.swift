#include <sys/ioctl.h>

/* DVB Card Drivers */
#include <linux/dvb/audio.h>
#include <linux/dvb/ca.h>
#include <linux/dvb/dmx.h>
#include <linux/dvb/frontend.h>
#include <linux/dvb/net.h>
#include <linux/dvb/osd.h>
#include <linux/dvb/version.h>
#include <linux/dvb/video.h>

//===----------------------------------------------------------------------===//
// linux/dvb/audio.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/ca.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/dmx.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/frontend.h
//===----------------------------------------------------------------------===//

extern inline
int _swift_frontend_read_status(int fd, fe_status_t *status) {
  return ioctl(fd, FE_READ_STATUS, status);
}

extern inline
int _swift_frontend_read_ber(int fd, uint32_t *ber) {
  return ioctl(fd, FE_READ_BER, ber);
}

extern inline
int _swift_frontend_read_snr(int fd, int16_t *snr) {
  return ioctl(fd, FE_READ_SNR, snr);
}

extern inline
int _swift_frontend_read_signal_strength(int fd, int16_t *strength) {
  return ioctl(fd, FE_READ_SIGNAL_STRENGTH, strength);
}

extern inline
int _swift_frontend_read_uncorrected_blocks(int fd, uint32_t *ublocks) {
  return ioctl(fd, FE_READ_UNCORRECTED_BLOCKS, ublocks);
}

extern inline
int _swift_frontend_set_frontend(int fd, struct dvb_frontend_parameters *p) {
  return ioctl(fd, FE_SET_FRONTEND, p);
}

extern inline
int _swift_frontend_get_frontend(int fd, struct dvb_frontend_parameters *p) {
  return ioctl(fd, FE_GET_FRONTEND, p);
}

extern inline
int _swift_frontend_get_event(int fd, struct dvb_frontend_event *ev) {
  return ioctl(fd, FE_GET_EVENT, ev);
}

extern inline
int _swift_frontend_get_info(int fd, struct dvb_frontend_info *info) {
  return ioctl(fd, FE_GET_INFO, info);
}

extern inline
int _swift_frontend_diseqc_reset_overload(int fd) {
  return ioctl(fd, FE_DISEQC_RESET_OVERLOAD);
}

extern inline
int _swift_frontend_diseqc_send_master_cmd(int fd, struct dvb_diseqc_master_cmd *cmd) {
  return ioctl(fd, FE_DISEQC_SEND_MASTER_CMD, cmd);
}

extern inline
int _swift_frontend_diseqc_recv_slave_reply(int fd, struct dvb_diseqc_slave_reply *reply) {
  return ioctl(fd, FE_DISEQC_RECV_SLAVE_REPLY, reply);
}

extern inline
int _swift_frontend_diseqc_send_burst(int fd, fe_sec_mini_cmd_t burst) {
  return ioctl(fd, FE_DISEQC_SEND_BURST, burst);
}

extern inline
int _swift_frontend_set_tone(int fd, fe_sec_tone_mode_t tone) {
  return ioctl(fd, FE_SET_TONE, tone);
}

extern inline
int _swift_frontend_set_voltage(int fd, fe_sec_voltage_t voltage) {
  return ioctl(fd, FE_SET_VOLTAGE, voltage);
}

extern inline
int _swift_frontend_enable_high_lnb_voltage(int fd, int high) {
  return ioctl(fd, FE_ENABLE_HIGH_LNB_VOLTAGE, high);
}

//===----------------------------------------------------------------------===//
// linux/dvb/net.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/osd.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/version.h
//===----------------------------------------------------------------------===//

// TODO

//===----------------------------------------------------------------------===//
// linux/dvb/video.h
//===----------------------------------------------------------------------===//

// TODO
