# Slock

[slock](https://tools.suckless.org/slock/) is a simple screen locker utility for X.

## Requirements

In order to build slock you need the Xlib header files.

## Patches

Patches applied to this build of slock:

- [quickcancel](https://tools.suckless.org/slock/patches/quickcancel/): cancels slock when you move the mouse during the first few seconds
- [dwmlogo](https://tools.suckless.org/slock/patches/dwmlogoandblurscreen/): places the dwm logo when you enter the password instead of flashing the whole screen
- [blurscreen](https://tools.suckless.org/slock/patches/dwmlogoandblurscreen/): blurs the screen when it is locked
- [capscolor](https://tools.suckless.org/slock/patches/capscolor/): dwm logo turns bright red when capslock is activated

## Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.
