/*
    This file is part of choqok-facebook, a Facebook plugin for Choqok, the KDE micro-blogging client

    Copyright (C) 2012 Pankaj Bhambhani <pankajb64@gmail.com>

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 2 of
    the License or (at your option) version 3 or any later version
    accepted by the membership of KDE e.V. (or its successor approved
    by the membership of KDE e.V.), which shall act as a proxy
    defined in Section 14 of version 3 of the license.


    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, see http://www.gnu.org/licenses/
*/

#ifndef FACEBOOKCOMMENTDIALOG_H
#define FACEBOOKCOMMENTDIALOG_H

#include <KDialog>
#include <QLabel>
#include <KLineEdit>
#include <KPushButton>
#include "facebookaccount.h"

class FacebookInputDialog : public KDialog
{
	Q_OBJECT

	public:
	  FacebookInputDialog (FacebookAccount* theAccount,  QString labelText, QString captionText=QString(), QString placeholderText=QString(), bool closewithSignal=false, QWidget* parent=0);

	Q_SIGNALS:
	  void inputEntered(FacebookAccount*, QString);

	protected slots:
	  void slotSubmitInput();

	protected:
	  void initUi();

    private:
      QLabel* label;
      KLineEdit* lineEdit;
      KPushButton* button;
      bool mCloseWithSignal;
      QString mLabelText;
      QString mCaptionText;
      QString mPlaceholderText;
      FacebookAccount* mAccount;
};

#endif
