/*
 * messagebus.cpp
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
#include "messagebus.h"
#include "message.h"
#include "messagehandler.h"

using namespace LibG;

MessageBus::MessageBus(QObject *parent) : QObject(parent) {}

void MessageBus::sendMessage(Message *msg) { emit newMessageToSend(msg); }

void MessageBus::registerHandler(MessageHandler *handler) {
    if (!mMessageHandler.contains(handler))
        mMessageHandler.append(handler);
}

void MessageBus::removeHandler(MessageHandler *handler) {
    if (mMessageHandler.contains(handler))
        mMessageHandler.removeOne(handler);
}

void MessageBus::messageRecieved(LibG::Message *msg) {
    for (auto handler : mMessageHandler) {
        if (handler->consumeMessage(msg))
            break;
    }
}
