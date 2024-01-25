#
# Copyright (C) 2024 The Android Open Source Project
# Copyright (C) 2024 SebaUbuntu's TWRP device tree generator
#
# SPDX-License-Identifier: Apache-2.0
#

PRODUCT_MAKEFILES := \
    $(LOCAL_DIR)/twrp_m33x.mk

COMMON_LUNCH_CHOICES := \
    twrp_m33x-user \
    twrp_m33x-userdebug \
    twrp_m33x-eng
