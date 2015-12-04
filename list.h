/* See LICENSE file for copyright and license details. */
#ifndef LIST_H
#define LIST_H

extern void attach(Client *c);
extern void attachstack(Client *c);
extern void detach(Client *c);
extern void detachstack(Client *c);
extern void focus(Client *c);
extern void focusstack(bool next);

#endif

