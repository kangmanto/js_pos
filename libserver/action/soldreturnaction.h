/*
 * soldreturnaction.h
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
#ifndef SOLDRETURNACTION_H
#define SOLDRETURNACTION_H

#include "serveraction.h"

namespace LibServer {

class SoldReturnAction : public ServerAction {
  public:
    SoldReturnAction();
    LibG::Message summary(LibG::Message *msg);

  protected:
    void selectAndJoin() override;
    void afterInsert(const QVariantMap &data) override;
    void afterUpdate(const QVariantMap &oldData, const QVariantMap &newData) override;
    void afterDelete(const QVariantMap &oldData) override;
};

} // namespace LibServer
#endif // SOLDRETURNACTION_H
