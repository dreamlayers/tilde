/* Copyright (C) 2011 G.P. Halkes
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 3, as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <t3widget/widget.h>

using namespace t3_widget;

void init_charsets(void);

class buffer_options_dialog_t : public dialog_t {
	protected:
		checkbox_t *tab_spaces_box, *wrap_box, *hide_menu_box, *auto_indent_box;
		text_field_t *tabsize_field;

	public:
		buffer_options_dialog_t(const char *_title);

		void set_values_from_view(edit_window_t *view);
		void set_view_values(edit_window_t *view);
		void set_values_from_options(void);
		void set_options_values(void);
		void handle_activate(void);

	T3_WIDGET_SIGNAL(activate, void);
};

class interface_options_dialog_t : public dialog_t {
	protected:
		checkbox_t *hide_menu_box, *color_box;

	public:
		interface_options_dialog_t(const char *_title);

		void set_values_from_options(void);
		void set_options_values(void);
		void handle_activate(void);

	T3_WIDGET_SIGNAL(activate, void);
};

#endif
