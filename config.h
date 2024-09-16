/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static const int user_bh = 0;
static unsigned int border_width = 1;
static int fuzzy  = 1;
static const char worddelimiters[] = " ";
static const char *fonts[] = {
				"monospace:size=10:antialias=true:autohint=true",
				"Noto Color Emoji:pixelsize=10:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     			  fg	     bg	       */
	[SchemeNorm] 	      = { "#f0f0f0", "#232323" },
	[SchemeSel] 	      = { "#232323", "#926BFF" },
	[SchemeSelHighlight]  = { "#ffdc7f", "#926BFF" },
	[SchemeNormHighlight] = { "#ffc222", "#232323" },
	[SchemeOut] 	      = { "#f0f0f0", "#232323" },
	[SchemeOutHighlight]  = { "#232323", "#926BFF" },
};
static unsigned int lines = 0;
