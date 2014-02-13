/********************************************************************
**  Nulloy Music Player, http://nulloy.com
**  Copyright (C) 2010-2013 Sergey Vlasov <sergey@vlasov.me>
**
**  This program can be distributed under the terms of the GNU
**  General Public License version 3.0 as published by the Free
**  Software Foundation and appearing in the file LICENSE.GPL3
**  included in the packaging of this file.  Please review the
**  following information to ensure the GNU General Public License
**  version 3.0 requirements will be met:
**
**  http://www.gnu.org/licenses/gpl-3.0.html
**
*********************************************************************/

#ifndef N_PLAYLIST_DATA_ITEM_H
#define N_PLAYLIST_DATA_ITEM_H

#include <QString>

struct NPlaylistDataItem
{
	QString title;
	QString path;
	int duration;
	bool failed;
	float position; // reserved

	NPlaylistDataItem(const QString &file = "") : path(file), duration(-1), failed(FALSE), position(0) {};
};

#endif
