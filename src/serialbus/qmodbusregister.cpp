/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtSerialBus module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmodbusregister.h"

QT_BEGIN_NAMESPACE

/*!
    \class QModBusRegister
    \inmodule QtSerialBus
    \since 5.6

    \brief QModBusRegister is a container class indicating the size of
    the ModBus register maintained by a QModBusSlave instance.

 */

/*!
    \fn QModBusRegister::QModBusRegister()

    Constructs a ModBus register instance. The resulting object
    sets the size of each register type to 0.
 */

/*!
    \enum QModBusRegister::RegisterType
    This enum describes different registers used in Modbus.

    \value DiscreteInputs       Register with read-only bits.
    \value Coils                Register with read/write bits.
    \value InputRegisters       Register with read-only 16 bit words.
    \value HoldingRegisters     Register with read/write 16 bit words.
 */

/*!
    \fn void QModBusRegister::setRegisterSize(QModBusRegister::RegisterType type, quint16 size)

    Sets the size of the register with \a type to \a size.
 */

/*!
    \fn quint16 QModBusRegister::registerSize(QModBusRegister::RegisterType type) const

    Returns the size of the register \a type.
 */

QT_END_NAMESPACE