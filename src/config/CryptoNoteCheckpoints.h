// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{       2, "dfcde25994d91da15ff96d038b77e52b7403724bc2eb115da1136362e0c7d4c7"},
{    5000, "d883de89600113c145ebf884d419dff8e450f0a031df19ccb78084afcb1e42b9"},
{   10000, "07ec8b02ac1600641e114c9412c3d55151577fb9268d6dd282db3b77f2c854ce"},
{   15000, "b9b476d4fadcd6e24ee4cc38f108a9e522bdce828669823c8867b458502ee5ae"},
{   20000, "7561179127c0c630dfe9b9438f50d7395b4d1a04d78f7d2dd1bb1ffa74fd0003"},
{   25000, "4be3713a3ce1bb11ce74c6239fd043088ce9d0374132142d2cf6459a95477383"},
{   30000, "096bb7a3b0296433cb533e37989a4de878f6bc9f0aa60653fa35659f7456fdde"},
{   35000, "5d05f6556399be4647b610bbb182e51e8e39e6fcf22b27a468cf5a72d28a1e25"},
{   40000, "51d3124ceee46fcfa8dcc8133d21935cebe499596829f5afa8809d85f5efe222"}
};
}
