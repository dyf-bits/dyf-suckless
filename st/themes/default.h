
/* appearance
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */
static char *font = "BitstromWera Nerd Font Mono:pixelsize=16:antialias=true:autohint=true";
static char *font2[] = { "Ubuntu Nerd Font Propo:pixelsize=16:antialias=true:autohint=true" };
static int borderpx = 2;

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  "#282828", /* hard contrast: #1d2021 / soft contrast: #32302f */
  "#cc241d",
  "#98971a",
  "#d79921",
  "#458588",
  "#b16286",
  "#689d6a",
  "#a89984",
  "#928374",
  "#fb4934",
  "#b8bb26",
  "#fabd2f",
  "#83a598",
  "#d3869b",
  "#8ec07c",
  "#ebdbb2",
  [255] = 0,
  /* more colors can be added after 255 to use with DefaultXX */
  "#add8e6", /* 256 -> cursor */
  "#555555", /* 257 -> rev cursor*/
  "#282828", /* 258 -> bg */
  "#ffffff", /* 259 -> fg */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
unsigned int defaultcs = 256;
unsigned int defaultrcs = 257;
