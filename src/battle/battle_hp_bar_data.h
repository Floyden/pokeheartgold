#include <nitro.h>

// clang-format off

ALIGN(4) const u8 gBattleHpBar_RawGraphicComponents[] = {
    // 0x00
    0xE3, 0xEE, 0xEE, 0xEE, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xE3, 0xEE, 0xEE, 0xEE, 0x32, 0x33, 0x33, 0x33,
    // 0x01
    0xEE, 0xEE, 0xEE, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0xEE, 0xEE, 0xEE, 0x88, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x02
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x22, 0x22, 0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x03
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x25, 0x22, 0x22, 0x22, 0x46, 0x44, 0x44, 0x44, 0x46, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x04
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x22, 0x22, 0x22, 0x66, 0x44, 0x44, 0x44, 0x66, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x05
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x25, 0x22, 0x22, 0x66, 0x46, 0x44, 0x44, 0x66, 0x46, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x06
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x55, 0x22, 0x22, 0x66, 0x66, 0x44, 0x44, 0x66, 0x66, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x07
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x55, 0x25, 0x22, 0x66, 0x66, 0x46, 0x44, 0x66, 0x66, 0x46, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x08
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x55, 0x55, 0x22, 0x66, 0x66, 0x66, 0x44, 0x66, 0x66, 0x66, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x09
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x55, 0x55, 0x25, 0x66, 0x66, 0x66, 0x46, 0x66, 0x66, 0x66, 0x46, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0a
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x55, 0x55, 0x55, 0x55, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0b
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x22, 0x22, 0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0c
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x27, 0x22, 0x22, 0x22, 0x48, 0x44, 0x44, 0x44, 0x48, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0d
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x22, 0x22, 0x22, 0x88, 0x44, 0x44, 0x44, 0x88, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0e
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x27, 0x22, 0x22, 0x88, 0x48, 0x44, 0x44, 0x88, 0x48, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x0f
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x77, 0x22, 0x22, 0x88, 0x88, 0x44, 0x44, 0x88, 0x88, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x10
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x77, 0x27, 0x22, 0x88, 0x88, 0x48, 0x44, 0x88, 0x88, 0x48, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x11
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x77, 0x77, 0x22, 0x88, 0x88, 0x88, 0x44, 0x88, 0x88, 0x88, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x12
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x77, 0x77, 0x27, 0x88, 0x88, 0x88, 0x48, 0x88, 0x88, 0x88, 0x48, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x13
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x77, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x14
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x22, 0x22, 0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x15
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x29, 0x22, 0x22, 0x22, 0x4A, 0x44, 0x44, 0x44, 0x4A, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x16
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x22, 0x22, 0x22, 0xAA, 0x44, 0x44, 0x44, 0xAA, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x17
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x29, 0x22, 0x22, 0xAA, 0x4A, 0x44, 0x44, 0xAA, 0x4A, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x18
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x99, 0x22, 0x22, 0xAA, 0xAA, 0x44, 0x44, 0xAA, 0xAA, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x19
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x99, 0x29, 0x22, 0xAA, 0xAA, 0x4A, 0x44, 0xAA, 0xAA, 0x4A, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x1a
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x99, 0x99, 0x22, 0xAA, 0xAA, 0xAA, 0x44, 0xAA, 0xAA, 0xAA, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x1b
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x99, 0x99, 0x29, 0xAA, 0xAA, 0xAA, 0x4A, 0xAA, 0xAA, 0xAA, 0x4A, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x1c
    0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x99, 0x99, 0x99, 0x99, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x1d
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x22, 0x22, 0x22, 0x22, 0x44, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x1e
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x2B, 0x22, 0x22, 0x22, 0x4C, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x1f
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0x22, 0x22, 0x22, 0xCC, 0x44, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x20
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0x2B, 0x22, 0x22, 0xCC, 0x4C, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x21
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0xBB, 0x22, 0x22, 0xCC, 0xCC, 0x44, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x22
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0xBB, 0x2B, 0x22, 0xCC, 0xCC, 0x4C, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x23
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0xBB, 0xBB, 0x22, 0xCC, 0xCC, 0xCC, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x24
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0xBB, 0xBB, 0x2B, 0xCC, 0xCC, 0xCC, 0x4C, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x25
    0x33, 0x33, 0x33, 0x33, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xBB, 0xBB, 0xBB, 0xBB, 0xCC, 0xCC, 0xCC, 0xCC, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x44, 0x44, 0x44,
    // 0x26
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x27
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x28
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x29
    0xFF, 0x88, 0x88, 0x88, 0x82, 0x48, 0x44, 0x44, 0x8F, 0x48, 0x77, 0x47, 0x82, 0x48, 0x87, 0x48, 0x82, 0x48, 0x44, 0x44, 0x82, 0x48, 0x77, 0x77, 0x82, 0x48, 0x87, 0x88, 0x22, 0x78, 0x87, 0x88,
    // 0x2a
    0x88, 0x88, 0x88, 0x88, 0x47, 0x44, 0x44, 0x47, 0x47, 0x77, 0x47, 0x47, 0x47, 0x87, 0x48, 0x47, 0x47, 0x44, 0x44, 0x47, 0x47, 0x77, 0x47, 0x47, 0x48, 0x87, 0x48, 0x47, 0x78, 0x87, 0x78, 0x77,
    // 0x2b
    0x88, 0x88, 0x88, 0xFF, 0x44, 0x74, 0x88, 0x28, 0x77, 0x47, 0x87, 0xF8, 0x87, 0x48, 0x87, 0x28, 0x44, 0x44, 0x87, 0x28, 0x47, 0x77, 0x87, 0x28, 0x47, 0x44, 0x87, 0x28, 0x77, 0x77, 0x87, 0x22,
    // 0x2c
    0xFF, 0xCC, 0xCC, 0xCC, 0xC2, 0x4C, 0x44, 0x44, 0xCF, 0x4C, 0xBB, 0xBB, 0xC2, 0x4C, 0x44, 0x44, 0xC2, 0x4C, 0xBB, 0xBB, 0xC2, 0x4C, 0xCB, 0xCC, 0xC2, 0x4C, 0xCB, 0xCC, 0x22, 0xBC, 0xCB, 0xCC,
    // 0x2d
    0xCC, 0xCC, 0xCC, 0xCC, 0x4B, 0x44, 0xB4, 0x4C, 0x4B, 0xBB, 0x4B, 0xBB, 0x4B, 0xCB, 0x4C, 0xCB, 0x4B, 0x44, 0x44, 0x4B, 0x4C, 0x4B, 0xBB, 0x4B, 0x4C, 0x4B, 0x44, 0x4B, 0xBC, 0xBB, 0xBB, 0xBB,
    // 0x2e
    0xCC, 0xCC, 0xCC, 0xFF, 0x44, 0x44, 0xCB, 0x2C, 0xBB, 0x4B, 0xCB, 0xFC, 0x44, 0xB4, 0xCB, 0x2C, 0xBB, 0xBB, 0xCC, 0x2C, 0xCB, 0xCC, 0xCC, 0x2C, 0x44, 0x44, 0xCB, 0x2C, 0xBB, 0xBB, 0xCB, 0x22,
    // 0x2f
    0xFF, 0x33, 0x33, 0x33, 0x32, 0x43, 0x44, 0x44, 0x3F, 0x43, 0x11, 0x11, 0x32, 0x43, 0x44, 0x44, 0x32, 0x13, 0x11, 0x41, 0x32, 0x33, 0x33, 0x43, 0x32, 0x43, 0x44, 0x44, 0x22, 0x13, 0x11, 0x11,
    // 0x30
    0x33, 0x33, 0x33, 0x33, 0x41, 0x31, 0x33, 0x43, 0x41, 0x31, 0x33, 0x43, 0x41, 0x31, 0x33, 0x43, 0x41, 0x31, 0x33, 0x43, 0x41, 0x31, 0x33, 0x43, 0x41, 0x44, 0x44, 0x41, 0x11, 0x11, 0x11, 0x11,
    // 0x31
    0x33, 0x33, 0x33, 0xFF, 0x44, 0x44, 0x31, 0x23, 0x11, 0x41, 0x31, 0xF3, 0x31, 0x43, 0x31, 0x23, 0x44, 0x44, 0x31, 0x23, 0x11, 0x11, 0x31, 0x23, 0x31, 0x33, 0x33, 0x23, 0x31, 0x33, 0x33, 0x22,
    // 0x32
    0xFF, 0xDD, 0xDD, 0xDD, 0xD2, 0x4D, 0x44, 0x44, 0xDF, 0x4D, 0x99, 0x49, 0xD2, 0x4D, 0xD9, 0x4D, 0xD2, 0x4D, 0x44, 0x44, 0xD2, 0x4D, 0x99, 0x99, 0xD2, 0x4D, 0xD9, 0xDD, 0x22, 0x9D, 0xD9, 0xDD,
    // 0x33
    0xDD, 0xDD, 0xDD, 0xDD, 0x49, 0x44, 0x44, 0x49, 0x49, 0x99, 0x99, 0x49, 0x49, 0x44, 0x44, 0x49, 0x99, 0x99, 0x49, 0x49, 0xD9, 0xDD, 0x4D, 0x49, 0x4D, 0x44, 0x44, 0x49, 0x9D, 0x99, 0x99, 0x99,
    // 0x34
    0xDD, 0xDD, 0xDD, 0xFF, 0x44, 0x49, 0xD9, 0x2D, 0x49, 0x49, 0xD9, 0xFD, 0x49, 0x49, 0xD9, 0x2D, 0x49, 0x49, 0xD9, 0x2D, 0x49, 0x49, 0xD9, 0x2D, 0x49, 0x44, 0xD9, 0x2D, 0x99, 0x99, 0xD9, 0x22,
    // 0x35
    0xFF, 0xAA, 0xAA, 0xAA, 0xA2, 0x4A, 0x44, 0x94, 0xAF, 0x4A, 0x99, 0x49, 0xA2, 0x4A, 0x44, 0x44, 0xA2, 0x4A, 0x99, 0x49, 0xA2, 0x4A, 0xA9, 0x4A, 0xA2, 0x4A, 0x44, 0x44, 0x22, 0x9A, 0x99, 0x99,
    // 0x36
    0xAA, 0xAA, 0xAA, 0xAA, 0x4A, 0x44, 0x94, 0x4A, 0x49, 0x99, 0x49, 0x49, 0x49, 0xA9, 0x4A, 0x49, 0x49, 0x44, 0x44, 0x49, 0x49, 0x49, 0x99, 0x49, 0x49, 0x49, 0x44, 0x49, 0x99, 0x99, 0x99, 0x99,
    // 0x37
    0xAA, 0xAA, 0xAA, 0xFF, 0x44, 0x49, 0xA9, 0x2A, 0x49, 0x49, 0xA9, 0xFA, 0x49, 0x49, 0xA9, 0x2A, 0x49, 0x49, 0xA9, 0x2A, 0x49, 0x49, 0xA9, 0x2A, 0x49, 0x44, 0xA9, 0x2A, 0x99, 0x99, 0xA9, 0x22,
    // 0x38
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x39
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x3a
    0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x3b
    0x2F, 0xEE, 0x2E, 0xFF, 0xE2, 0xAA, 0xEA, 0x22, 0xAE, 0xE9, 0xA9, 0xFE, 0xEE, 0x4E, 0xEE, 0x2E, 0x4E, 0xE2, 0x42, 0x2E, 0xE3, 0x44, 0xE4, 0x23, 0x32, 0xEE, 0x3E, 0x22, 0x22, 0x22, 0x22, 0x22,
    // 0x3c
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xAA, 0xF2, 0xFF, 0x2A, 0x22, 0x2A, 0xFF, 0x2A, 0xFF, 0x2A, 0xEF, 0xA2, 0xAA, 0x22, 0xEF, 0x2F, 0x2A, 0xF2, 0xEF,
    // 0x3d
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xEF, 0x2E, 0x2E,
    // 0x3e
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2B, 0xFF, 0xFF, 0xBF, 0xBB, 0xF2, 0xFF, 0x2B, 0x2B, 0x2B, 0xEF, 0xF2, 0x2B, 0x22, 0xEF, 0xBF, 0xBB, 0xF2, 0xEF,
    // 0x3f
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xEF, 0x2E, 0x2E,
    // 0x40
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF,
    // 0x41
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xFF, 0x2E, 0xEF, 0x2E, 0x2E,
    // 0x42
    0xE3, 0xEE, 0xEE, 0xEE, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xE3, 0xEE, 0xEE, 0xEE, 0x32, 0x33, 0x33, 0x33,
    // 0x43
    0xEE, 0xEE, 0xEE, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0x8E, 0xE8, 0xEE, 0x88, 0x88, 0xE8, 0xEE, 0x88, 0xEE, 0xEE, 0xEE, 0x88, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x33, 0x33, 0x33, 0x33,
    // 0x44
    0x3E, 0xFF, 0xFF, 0xFF, 0xEE, 0x22, 0x22, 0x22, 0xEE, 0xFF, 0xFF, 0xFF, 0xEE, 0x22, 0x22, 0x22, 0xEE, 0x22, 0x22, 0x22, 0xEE, 0x22, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x22, 0x23, 0x22, 0x22, 0x22,
    // 0x45
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFE, 0xFF, 0xFF, 0xEE, 0xF2, 0xFF, 0xEF, 0x2E, 0xF2, 0xFF, 0xEE, 0x22, 0xFF, 0xEF, 0x2E, 0xF2, 0xFF, 0xEF, 0x22, 0xFF, 0xFF, 0x2F, 0xF2, 0xFF, 0xFF,
    // 0x46
    0xEE, 0xEE, 0xEE, 0xF3, 0x88, 0x88, 0xE8, 0xFE, 0x88, 0x8E, 0xE8, 0xFE, 0x88, 0x88, 0xE8, 0xFE, 0x88, 0xEE, 0xEE, 0xFE, 0x88, 0xEE, 0xEE, 0xFE, 0xEE, 0xEE, 0xEE, 0xF3, 0x33, 0x33, 0x33, 0xFF,
    // 0x47
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x48
    0xAA, 0xAA, 0x2A, 0xEF, 0x22, 0x2A, 0x22, 0xEF, 0xFF, 0x2A, 0xFF, 0xEF, 0xFF, 0x22, 0xFF, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x49
    0x2E, 0xEF, 0x2E, 0x2E, 0x2E, 0xEF, 0x2E, 0x2E, 0xEE, 0x2E, 0xEE, 0x22, 0x22, 0x22, 0x22, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x4a
    0x2B, 0x22, 0x2B, 0xEF, 0x2B, 0xFF, 0x2B, 0xEF, 0xB2, 0xBB, 0x22, 0xEF, 0x2F, 0x22, 0xF2, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x4b
    0x2E, 0xE4, 0x2E, 0x2E, 0x2E, 0xE4, 0x2E, 0x2E, 0xEE, 0x2E, 0xEE, 0x22, 0x22, 0x22, 0x22, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x4c
    0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    // 0x4d
    0x2E, 0xE4, 0x2E, 0x2E, 0x2E, 0xE4, 0x2E, 0x2E, 0xEE, 0x2E, 0xEE, 0x22, 0x22, 0x22, 0x22, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
