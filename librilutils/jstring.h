/*
 * Copyright (C) 2006 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CUTILS_STRING16_H
#define __CUTILS_STRING16_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(__cplusplus) || (201103L > __cplusplus) /* these are builtin types for C++11 */
typedef unsigned short char16_t;
#endif

char* strndup16to8(const char16_t* s, size_t n);
char16_t* strdup8to16(const char* s, size_t* out_len);

#ifdef __cplusplus
}
#endif

#endif /* __CUTILS_STRING16_H */