/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar 		 = 1;		/* -b  option; if 0, dmenu appears at bottom     	*/
static int fuzzy  		 = 1;           /* -F  option; if 0, dmenu doesn't use fuzzy matching   */
static const int user_bh 	 = 0;		/* add an defined amount of pixels to the bar height    */
static unsigned int border_width = 1;
static unsigned int lines  	 = 0;
static const char *fonts[] 	 = { "mono:size=10:antialias=true:autohint=true",
			       	     "Noto Color Emoji:pixelsize=10:antialias=true:autohint=true"
};
static const char worddelimiters[] = " ";
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	/*     			 fg          bg       	*/
	[SchemeNorm] = 		{ "#f0f0f0", "#232323" },
	[SchemeSel] = 		{ "#232323", "#926BFF" },
	[SchemeSelHighlight] = 	{ "#ffdc7f", "#926BFF" },
	[SchemeNormHighlight] = { "#ffc222", "#232323" },
	[SchemeOut] = 		{ "#232323", "#7debe0" },
	[SchemeOutHighlight] = 	{ "#ffdc7f", "#7debe0" },
};
