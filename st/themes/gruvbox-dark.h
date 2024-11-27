/* gruvbox-dark colorscheme */

static char *font = "BitstromWera Nerd Font Mono:pixelsize=16:antialias=true:autohint=true";
static char *font2[] = { "BitstromWera Nerd Font Mono:pixelsize=16:antialias=true:autohint=true" };
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
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 15;
unsigned int defaultbg = 0;
unsigned int defaultcs = 15;
unsigned int defaultrcs = 15;
