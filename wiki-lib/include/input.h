#ifndef WL_EVENT_H
#define WL_EVENT_H

enum {
	WL_INPUT_EV_TYPE_KEYBOARD = 0,
	WL_INPUT_EV_TYPE_TOUCH,
	WL_INPUT_EV_TYPE_SYSTEM
};

struct wl_input_event {
	unsigned int type;
	unsigned int val_a;
	unsigned int val_b;
};

int wl_input_wait(struct wl_input_event *ev);

#endif /* WL_INPUT_H */
