/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2016, Daniel Roux, EPSITEC SA & TerranovaTeam
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

#include "graphics/model/model.h"
#include "graphics/model/model_format.h"

#include <istream>

namespace Gfx
{

/**
 * \namespace ModelInput
 * \brief Namespace with functions to read model files
 */
namespace ModelInput
{
    //! Reads model from \a stream in given \a format
    /**
     * @throws CModelIOException on read/write error
     */
    CModel Read(std::istream &stream, ModelFormat format);
}

} // namespace Gfx
