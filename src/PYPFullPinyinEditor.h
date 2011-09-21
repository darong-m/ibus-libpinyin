/* vim:set et ts=4 sts=4:
 *
 * ibus-pinyin - The Chinese PinYin engine for IBus
 *
 * Copyright (c) 2011 Peng Wu <alexepico@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef __PY_LIB_PINYIN_FULL_PINYIN_EDITOR_H
#define __PY_LIB_PINYIN_FULL_PINYIN_EDITOR_H

#include "PYPPinyinEditor.h"

namespace PY {

class LibPinyinFullPinyinEditor : public LibPinyinPinyinEditor {

public:
    LibPinyinFullPinyinEditor (PinyinProperties & props, Config & config);
    ~LibPinyinFullPinyinEditor (void);

public:
    gboolean insert (gint ch);

    gboolean removeCharBefore (void);
    gboolean removeCharAfter (void);
    gboolean removeWordBefore (void);
    gboolean removeWordAfter (void);

    gboolean moveCursorLeft (void);
    gboolean moveCursorRight (void);
    gboolean moveCursorLeftByWord (void);
    gboolean moveCursorRightByWord (void);
    gboolean moveCursorToBegin (void);
    gboolean moveCursorToEnd (void);

    /* virtual functions */
    virtual gboolean processKeyEvent (guint keyval, guint keycode, guint modifiers);
    virtual void reset (void);

protected:
    /* TODO: to be implemented. */
    void updatePinyin (void);

    guint getCursorLeftByWord (void);
    guint getCursorRightByWord (void);

};

};

#endif