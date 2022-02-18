// Copyright 2022 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#pragma once

namespace xsk::arc::t6
{

class resolver
{
public:
    static auto opcode_id(const std::string& name) -> std::uint8_t;
    static auto opcode_name(std::uint8_t id) -> std::string;
    static auto dvar_name(std::uint32_t id) -> std::string;

    static auto make_token(std::string_view str) -> std::string;
    static auto file_data(const std::string& name) -> std::tuple<const std::string*, char*, size_t>;
    static void set_reader(std::function<std::vector<std::uint8_t>(const std::string&)> callback);
};

} // namespace xsk::arc::t6