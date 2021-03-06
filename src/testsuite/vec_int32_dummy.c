/*
 Copyright (c) [2018] IBM Corporation.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 vec_int32_dummy.c

 Contributors:
      IBM Corporation, Steven Munroe
      Created on: Mar 29, 2018
 */

#include <vec_int32_ppc.h>

vui64_t
__test_muleuw (vui32_t a, vui32_t b)
{
  return vec_muleuw (a, b);
}

vui64_t
__test_mulouw (vui32_t a, vui32_t b)
{
  return vec_mulouw (a, b);
}

vui32_t
__test_muluwm (vui32_t a, vui32_t b)
{
  return vec_muluwm (a, b);
}

vui32_t
test_slwi_1 (vui32_t a)
{
  return vec_slwi (a, 1);
}

vui32_t
test_slwi_15 (vui32_t a)
{
  return vec_slwi (a, 15);
}

vui32_t
test_slwi_16 (vui32_t a)
{
  return vec_slwi (a, 16);
}

vui32_t
test_slwi_31 (vui32_t a)
{
  return vec_slwi (a, 31);
}

vui32_t
test_slwi_32 (vui32_t a)
{
  return vec_slwi (a, 32);
}

vui32_t
test_srwi_1 (vui32_t a)
{
  return vec_srwi (a, 1);
}

vui32_t
test_srwi_15 (vui32_t a)
{
  return vec_srwi (a, 15);
}

vui32_t
test_srwi_16 (vui32_t a)
{
  return vec_srwi (a, 16);
}

vui32_t
test_srwi_31 (vui32_t a)
{
  return vec_srwi (a, 31);
}

vui32_t
test_srwi_32 (vui32_t a)
{
  return vec_srwi (a, 32);
}

vi32_t
test_srawi_1 (vi32_t a)
{
  return vec_srawi (a, 1);
}

vi32_t
test_srawi_15 (vi32_t a)
{
  return vec_srawi (a, 15);
}

vi32_t
test_srawi_16 (vi32_t a)
{
  return vec_srawi (a, 16);
}

vi32_t
test_srawi_31 (vi32_t a)
{
  return vec_srawi (a, 31);
}

vi32_t
test_srawi_32 (vi32_t a)
{
  return vec_srawi (a, 32);
}

vui32_t
test_cmpgtuw (vui32_t a, vui32_t b)
{
  return (vui32_t)vec_cmpgt (a, b);
}

vui32_t
test_cmpleuw (vui32_t a, vui32_t b)
{
  return (vui32_t)vec_cmple (a, b);
}

int
test_cmpuw_all_gt (vui32_t a, vui32_t b)
{
  return vec_all_gt (a, b);
}

int
test_cmpuw_all_le (vui32_t a, vui32_t b)
{
  return vec_all_le (a, b);
}

vui32_t
__test_popcntw (vui32_t a)
{
  return (vec_popcntw (a));
}

vui32_t
__test_clzw (vui32_t a)
{
  return (vec_clzw (a));
}

vui32_t
__test_revbw (vui32_t vra)
{
  return vec_revbw (vra);
}
