/*
 *    ft5606.h : 31/05/2012
 *    g.revaillot, revaillot@archos.com
 */

#ifndef __LINUX_FT5606_H__
#define __LINUX_FT5606_H__

#define FOCALTECH_FT5606_NAME "ft5606"
#define FOCALTECH_FT5606_ADDR (0x38)
#define TOUCH_FT5X0X_RESET_PIN RK30_PIN4_PD0
#define TOUCH_FT5X0X_INT_PIN RK30_PIN4_PC2
#define TOUCH_FT5X0X_PWR_PIN INVALID_GPIO

struct focaltech_ft5606_platform_data {
	int irq;
	int flags;
	const char * regulator;

	int     (*get_pendown_state)(void);
  int     (*init_platform_hw)(void);
  int     (*platform_sleep)(void);
  int     (*platform_wakeup)(void);
  void    (*exit_platform_hw)(void);
};

#endif

