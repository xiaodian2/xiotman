#ifndef _LED_H_
#define _LED_H_

int smart_led_init(void *arg);
int sys_led_init(void *arg);
int sys_led_loop(void);
int smart_led_on(void);
int smart_led_off(void);

#endif  /* led.h */
