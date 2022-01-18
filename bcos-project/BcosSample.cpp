/*
 *  Copyright (C) 2021 FISCO BCOS.
 *  SPDX-License-Identifier: Apache-2.0
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * @file BcosTemplate.cpp
 * @author: octopus
 * @date 2022-01-18
 */

#include <bcos-project/BcosSample.h>
#include <bcos-utilities/BoostLog.h>
#include <bcos-utilities/BoostLogInitializer.h>
#include <bcos-utilities/Common.h>
#include <iostream>

using namespace bcos;
using namespace bcos::sample;

void Sample::func()
{
    //
    std::cout << " bcos sample func call ..." << std::endl;
}