/*
 * Copyright © 2016 Aidan Holm <aidanholm@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LUAKIT_EXTENSION_EXTENSION_H
#define LUAKIT_EXTENSION_EXTENSION_H

#include <webkit2/webkit-web-extension.h>
#include <lauxlib.h>
#include <lualib.h>
#include "extension/ipc.h"

typedef struct _extension_t {
    /** Web Lua VM state */
    lua_State *WL;
    /** Handle to the WebKit Web Extension */
    WebKitWebExtension *ext;
    /** Channel for IPC with ui process */
    ipc_endpoint_t *ipc;
    /** Isolated JavaScript context */
    WebKitScriptWorld *script_world;
} extension_t;

extension_t extension;

#endif

// vim: ft=c:et:sw=4:ts=8:sts=4:tw=80
