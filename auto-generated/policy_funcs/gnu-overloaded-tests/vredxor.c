/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8m1_t test_vredxor_vs_i8mf8_i8m1_tu(vint8m1_t vd, vint8mf8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf4_i8m1_tu(vint8m1_t vd, vint8mf4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf2_i8m1_tu(vint8m1_t vd, vint8mf2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m1_i8m1_tu(vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m2_i8m1_tu(vint8m1_t vd, vint8m2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m4_i8m1_tu(vint8m1_t vd, vint8m4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m8_i8m1_tu(vint8m1_t vd, vint8m8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf4_i16m1_tu(vint16m1_t vd, vint16mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf2_i16m1_tu(vint16m1_t vd, vint16mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m1_i16m1_tu(vint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m2_i16m1_tu(vint16m1_t vd, vint16m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m4_i16m1_tu(vint16m1_t vd, vint16m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m8_i16m1_tu(vint16m1_t vd, vint16m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32mf2_i32m1_tu(vint32m1_t vd, vint32mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m1_i32m1_tu(vint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m2_i32m1_tu(vint32m1_t vd, vint32m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m4_i32m1_tu(vint32m1_t vd, vint32m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m8_i32m1_tu(vint32m1_t vd, vint32m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m1_i64m1_tu(vint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m2_i64m1_tu(vint64m1_t vd, vint64m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m4_i64m1_tu(vint64m1_t vd, vint64m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m8_i64m1_tu(vint64m1_t vd, vint64m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf8_u8m1_tu(vuint8m1_t vd, vuint8mf8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf4_u8m1_tu(vuint8m1_t vd, vuint8mf4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf2_u8m1_tu(vuint8m1_t vd, vuint8mf2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m1_u8m1_tu(vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m2_u8m1_tu(vuint8m1_t vd, vuint8m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m4_u8m1_tu(vuint8m1_t vd, vuint8m4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m8_u8m1_tu(vuint8m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf4_u16m1_tu(vuint16m1_t vd, vuint16mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf2_u16m1_tu(vuint16m1_t vd, vuint16mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m1_u16m1_tu(vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m2_u16m1_tu(vuint16m1_t vd, vuint16m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m4_u16m1_tu(vuint16m1_t vd, vuint16m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m8_u16m1_tu(vuint16m1_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32mf2_u32m1_tu(vuint32m1_t vd, vuint32mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m1_u32m1_tu(vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m2_u32m1_tu(vuint32m1_t vd, vuint32m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m4_u32m1_tu(vuint32m1_t vd, vuint32m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m8_u32m1_tu(vuint32m1_t vd, vuint32m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m1_u64m1_tu(vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m2_u64m1_tu(vuint64m1_t vd, vuint64m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m4_u64m1_tu(vuint64m1_t vd, vuint64m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m8_u64m1_tu(vuint64m1_t vd, vuint64m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tu(vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf8_i8m1_tum(vbool64_t vm, vint8m1_t vd, vint8mf8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf4_i8m1_tum(vbool32_t vm, vint8m1_t vd, vint8mf4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8mf2_i8m1_tum(vbool16_t vm, vint8m1_t vd, vint8mf2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m1_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m2_i8m1_tum(vbool4_t vm, vint8m1_t vd, vint8m2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m4_i8m1_tum(vbool2_t vm, vint8m1_t vd, vint8m4_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint8m1_t test_vredxor_vs_i8m8_i8m1_tum(vbool1_t vm, vint8m1_t vd, vint8m8_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf4_i16m1_tum(vbool64_t vm, vint16m1_t vd, vint16mf4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16mf2_i16m1_tum(vbool32_t vm, vint16m1_t vd, vint16mf2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m1_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m2_i16m1_tum(vbool8_t vm, vint16m1_t vd, vint16m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m4_i16m1_tum(vbool4_t vm, vint16m1_t vd, vint16m4_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint16m1_t test_vredxor_vs_i16m8_i16m1_tum(vbool2_t vm, vint16m1_t vd, vint16m8_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32mf2_i32m1_tum(vbool64_t vm, vint32m1_t vd, vint32mf2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m1_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m2_i32m1_tum(vbool16_t vm, vint32m1_t vd, vint32m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m4_i32m1_tum(vbool8_t vm, vint32m1_t vd, vint32m4_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint32m1_t test_vredxor_vs_i32m8_i32m1_tum(vbool4_t vm, vint32m1_t vd, vint32m8_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m1_i64m1_tum(vbool64_t vm, vint64m1_t vd, vint64m1_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m2_i64m1_tum(vbool32_t vm, vint64m1_t vd, vint64m2_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m4_i64m1_tum(vbool16_t vm, vint64m1_t vd, vint64m4_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vint64m1_t test_vredxor_vs_i64m8_i64m1_tum(vbool8_t vm, vint64m1_t vd, vint64m8_t vs2, vint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf8_u8m1_tum(vbool64_t vm, vuint8m1_t vd, vuint8mf8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf4_u8m1_tum(vbool32_t vm, vuint8m1_t vd, vuint8mf4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8mf2_u8m1_tum(vbool16_t vm, vuint8m1_t vd, vuint8mf2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m1_u8m1_tum(vbool8_t vm, vuint8m1_t vd, vuint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m2_u8m1_tum(vbool4_t vm, vuint8m1_t vd, vuint8m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m4_u8m1_tum(vbool2_t vm, vuint8m1_t vd, vuint8m4_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint8m1_t test_vredxor_vs_u8m8_u8m1_tum(vbool1_t vm, vuint8m1_t vd, vuint8m8_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf4_u16m1_tum(vbool64_t vm, vuint16m1_t vd, vuint16mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16mf2_u16m1_tum(vbool32_t vm, vuint16m1_t vd, vuint16mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m1_u16m1_tum(vbool16_t vm, vuint16m1_t vd, vuint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m2_u16m1_tum(vbool8_t vm, vuint16m1_t vd, vuint16m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m4_u16m1_tum(vbool4_t vm, vuint16m1_t vd, vuint16m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vredxor_vs_u16m8_u16m1_tum(vbool2_t vm, vuint16m1_t vd, vuint16m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32mf2_u32m1_tum(vbool64_t vm, vuint32m1_t vd, vuint32mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m1_u32m1_tum(vbool32_t vm, vuint32m1_t vd, vuint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m2_u32m1_tum(vbool16_t vm, vuint32m1_t vd, vuint32m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m4_u32m1_tum(vbool8_t vm, vuint32m1_t vd, vuint32m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vredxor_vs_u32m8_u32m1_tum(vbool4_t vm, vuint32m1_t vd, vuint32m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m1_u64m1_tum(vbool64_t vm, vuint64m1_t vd, vuint64m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m2_u64m1_tum(vbool32_t vm, vuint64m1_t vd, vuint64m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m4_u64m1_tum(vbool16_t vm, vuint64m1_t vd, vuint64m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vredxor_vs_u64m8_u64m1_tum(vbool8_t vm, vuint64m1_t vd, vuint64m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vredxor_tum(vm, vd, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vredxor\.[ivxfswum.]+\s+} 88 } } */
