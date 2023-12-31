/*
 * autoupdatedialog.h
 * Copyright 2017 - ~, Apin <apin.klas@gmail.com>
 *
 * This file is part of JayaSentosa.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef AUTOUPDATEDIALOG_H
#define AUTOUPDATEDIALOG_H

#include <QDialog>
#include <QNetworkReply>

class QNetworkAccessManager;

namespace Ui {
class AutoUpdateDialog;
}

namespace LibGUI {

class AutoUpdateDialog : public QDialog {
    Q_OBJECT

  public:
    AutoUpdateDialog(QWidget *parent = nullptr);
    ~AutoUpdateDialog();

  protected:
    void closeEvent(QCloseEvent *e);

  private:
    Ui::AutoUpdateDialog *ui;
    QList<QWidget *> mGroupWidget;
    QNetworkAccessManager *mNetworkManager;
    QString mArc;
    QString mNewVersion;

  private slots:
    void checkDone();
    void httpError(QNetworkReply::NetworkError error);
    void updateClicked();
    void downloadDone();
    void downloadProgress(qint64 receive, qint64 total);
};

} // namespace LibGUI
#endif // AUTOUPDATEDIALOG_H
