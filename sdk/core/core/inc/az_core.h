// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#include <stddef.h>

#define AZ_STRING_SIZE(S) (sizeof(S) - 1)

#define AZ_ARRAY_SIZE(A) (sizeof(A) / sizeof(*(A)))

#define AZ_DEFINE_RANGE(TYPE, NAME) typedef struct { TYPE *begin; TYPE *end; } NAME

#define AZ_RANGE(A) { .begin = (A), .end = (A) + AZ_ARRAY_SIZE(A) }

AZ_DEFINE_RANGE(char const, az_string);

#define AZ_STRING(S) { .begin = (S), .end = (S) + AZ_STRING_SIZE(S) }
