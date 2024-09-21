/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar 		         = 1;
static unsigned int lines      	         = 0;
static const int user_bh 	         = 0;
static unsigned int border_width         = 1;
static int fuzzy  		         = 1;
static const char worddelimiters[]       = " ";
static const char *fonts[] 	         = {
	"sans:size=10:antialias=true:hinting=true"
};
static const char *prompt                = NULL;
static const char *colors[SchemeLast][2] = {
	/*     		 	  fg         bg       */
	[SchemeNorm] 	      = { "#f0f0f0", "#232323" },
	[SchemeSel]           = { "#232323", "#9871ff" },
	[SchemeSelHighlight]  = { "#ffff87", "#9871ff" },
	[SchemeNormHighlight] = { "#ffc222", "#232323" },
	[SchemeOut]           = { "#f0f0f0", "#232323" },
};
