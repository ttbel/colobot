/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2015, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsitec.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

#pragma once

#include "CBot/CBotInstr/CBotInstr.h"

namespace CBot
{

/*!
 * \brief The CBotFloat class Definition of a real/float variable int a, b = 12.4;
 */
class CBotFloat : public CBotInstr
{
public:

    /*!
     * \brief CBotFloat
     */
    CBotFloat();

    /*!
     * \brief ~CBotFloat
     */
    ~CBotFloat();

    /*!
     * \brief Compile
     * \param p
     * \param pStack
     * \param cont
     * \param noskip
     * \return
     */
    static CBotInstr* Compile(CBotToken* &p, CBotCStack* pStack, bool cont = false, bool noskip=false);

    /*!
     * \brief Execute Executes the definition of a real variable.
     * \param pj
     * \return
     */
    bool Execute(CBotStack* &pj) override;

    /*!
     * \brief RestoreState
     * \param pj
     * \param bMain
     */
    void RestoreState(CBotStack* &pj, bool bMain) override;

private:
    //! Variable to initialise.
    CBotInstr* m_var;
    //! A value to put, if there is.
    CBotInstr* m_expr;
};

} // namespace CBot
