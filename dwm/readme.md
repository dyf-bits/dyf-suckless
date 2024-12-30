# Introduction
This is my build of [dwm](https://dwm.suckless.org/), the tiling window manager of suckless.

## Patches Applied
The following patches were applied to add functionality to dwm:
- [actualfullscreen](https://dwm.suckless.org/patches/actualfullscreen/): make programs go full-screen
- [alwayscenter](https://dwm.suckless.org/patches/alwayscenter/): start floating windows at the center of screen
- [attachbottom](https://dwm.suckless.org/patches/attachbottom/): attach new windows to the bottom of stack
- [autostart](https://dwm.suckless.org/patches/autostart/): autostart a script when dwm loads
- [colorbar](https://dwm.suckless.org/patches/colorbar/): color the top bar
- [hide_vacant_tags](https://dwm.suckless.org/patches/hide_vacant_tags/): hide tags that have no windows opened on them
- [layoutmenu](https://dwm.suckless.org/patches/layoutmenu/): choose between layouts by right-clicking the layout icon in the top bar
- [movestack](https://dwm.suckless.org/patches/movestack/): move windows with keybindings
- [pertag](https://dwm.suckless.org/patches/pertag/): each tag can have its default layout
- [resizehere](https://dwm.suckless.org/patches/resizehere/): don't move mouse cursor when resizing a window
- [restartsig](https://dwm.suckless.org/patches/restartsig/): restart dwm with a keybinding
- [status2d](https://dwm.suckless.org/patches/status2d/): add color to status bar text (mainly used for dwmblocks)
- [systray](https://dwm.suckless.org/patches/systray/): add system tray functionality to the topbar
- [statusallmons](https://dwm.suckless.org/patches/statusallmons/): status bar is visible on all monitors, not only the active one
- [statuscmd](https://dwm.suckless.org/patches/statuscmd/): make blocks in the status bar clickable
- [tiledmove](https://dwm.suckless.org/patches/tiledmove/): keep windows tiled when moving them with ```super-mouse drag```
- [vanitygaps](https://dwm.suckless.org/patches/vanitygaps/): add gaps between windows
- [warp](https://dwm.suckless.org/patches/warp/): mouse cursor follows active window

## Installation

```sudo make clean install```

Make sure you have ```libxft``` and ```libxinerama``` installed or the compilation will fail.

## Optional Packages

- Fonts: ```Ubuntu Nerd Font Propo``` for the statusbar, ```BitstromWera Nerd Font Mono``` for the **st** terminal emulator
- ```sx``` to start X with a custom script instead of ```~/.xinitrc```
- ```xmenu``` - simple custom menu for X
- ```picom``` for round borders and fade-in/out animations

## Notes
- **layoutmenu** requires ```xmenu``` to be installed. modify ```layoutmenu.sh``` if necessary then place it in your ```PATH```
- **colorbar** makes the status bar gray, but cannot modify the right part of the bar. This is because it would conflict with the **status2d** patch
- **dwmblocks** was tested with "Ubuntu Nerd Font Propo". Choosing a different font might require some formatting modifications
- **st** has its default font set to "BitstromWera Nerd Font Mono"
- if you also use my build of dwmblocks, make sure to modify the ```sb-kbselect``` script to your desired keyboard layouts
- ```alt-shift``` switches the keyboard layout to Arabic. You can change this behaviour in ```config.h```
- default Mod key is ```super```
- most of my builds use the catppuccin theme
- my startup script is ```sdwm```. I start my X session with ```sx sh sdwm``` instead of ```startx```

