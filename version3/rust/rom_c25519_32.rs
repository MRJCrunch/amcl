/*
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
*/

use c25519::big::NLEN;
use arch::Chunk;

// Curve25519 Modulus 
pub const MODULUS:[Chunk;NLEN]=[0x1FFFFFED,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x7FFFFF];
pub const MCONST:Chunk=19;

// c25519 Curve 
pub const CURVE_A:isize = 486662;
pub const CURVE_B:[Chunk;NLEN]=[0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0];
pub const CURVE_ORDER:[Chunk;NLEN]=[0x1CF5D3ED,0x9318D2,0x1DE73596,0x1DF3BD45,0x14D,0x0,0x0,0x0,0x100000];
pub const CURVE_GX:[Chunk;NLEN]=[0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0];
pub const CURVE_GY:[Chunk;NLEN]=[0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0];

