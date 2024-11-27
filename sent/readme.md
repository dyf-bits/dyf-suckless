# Introduction

sent is a simple plaintext presentation tool.

sent uses plaintext files to describe the slides and can include images via farbfeld.
Every paragraph represents a slide in the presentation.

The presentation is displayed in a simple X11 window. The content of each slide
is automatically scaled so you also don't have to worry about alignment. Instead you can really concentrate on the content.


## Dependencies

You need Xlib and Xft to build sent and the [farbfeld](https://tools.suckless.org/farbfeld/) tools installed to use
images in your presentations.

## Installation

	make

Start a presentation by feeding a file to sent
	```./sent example```

You can navigate with the arrow keys and quit with `q`.

## Patches

Patches applied to this build:

- [bidi](https://tools.suckless.org/sent/patches/bidi/): to render arabic/farsi text correctly
- [inverted colors](https://tools.suckless.org/sent/patches/inverted-colors/): self-explanatory
- [toggle scm](https://tools.suckless.org/sent/patches/toggle-scm/): to invert colors using the `i` hotkey at run time
- [toggle cursor](https://tools.suckless.org/sent/patches/toggle_cursor/): toggle mouse cursor with the `x` hotkey 
