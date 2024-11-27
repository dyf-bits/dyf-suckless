/* appearance
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */
static char *font = "BitstromWera Nerd Font Mono:pixelsize=16:antialias=true:autohint=true";
static char *font2[] = { "Noto Naskh Arabic:pixelsize=16:antialias=true:autohint=true" };
static int borderpx = 2;
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#45475A",
	"#F38BA8",
	"#A6E3A1",
	"#F9E2AF",
	"#89B4FA",
	"#F5C2E7",
	"#94E2D5",
	"#BAC2DE",

	/* 8 bright colors */
	"#585B70",
	"#F38BA8",
	"#A6E3A1",
	"#F9E2AF",
	"#89B4FA",
	"#F5C2E7",
	"#94E2D5",
	"#A6ADC8",

[256] = "#CDD6F4", /* default foreground colour */
[257] = "#1E1E2E", /* default background colour */
[258] = "#F5E0DC", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
