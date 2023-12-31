/*
 * stockcarddialog.h
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
#ifndef STOCKCARDDIALOG_H
#define STOCKCARDDIALOG_H

#include "messagehandler.h"
#include <QDialog>

namespace Ui {
class StockCardDialog;
}

namespace LibGUI {

class StockCardDialog : public QDialog {
    Q_OBJECT

  public:
    StockCardDialog(const QString &barcode, LibG::MessageBus *bus, QWidget *parent = nullptr);
    ~StockCardDialog();
    void showEvent(QShowEvent *e) override;

  private:
    Ui::StockCardDialog *ui;
};

} // namespace LibGUI
#endif // STOCKCARDDIALOG_H
