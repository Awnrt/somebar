// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrainsMono NerdFont 12";

constexpr ColorScheme colorInactive =  {Color(0xa6, 0xad, 0xc8), Color(0x11, 0x11, 0x1b)};
constexpr ColorScheme colorActive = {Color(0xcd, 0xd6, 0xf4), Color(0x11, 0x11, 0x1b)};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
