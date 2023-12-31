/*
 * router.h
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
#ifndef ROUTER_H
#define ROUTER_H

#include "message.h"
#include "server_global.h"

namespace LibServer {

class ServerAction;

class SERVERSHARED_EXPORT Router {
  public:
    Router();
    LibG::Message handler(LibG::Message msg);

  private:
    ServerAction *getServerAction(int type);
};

} // namespace LibServer
#endif // ROUTER_H
