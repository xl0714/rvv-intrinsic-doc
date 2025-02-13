/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vuint16m1_t test_vwredsumu_vs_u8mf8_u16m1_tu(vuint16m1_t vd, vuint8mf8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf8_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf4_u16m1_tu(vuint16m1_t vd, vuint8mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf4_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf2_u16m1_tu(vuint16m1_t vd, vuint8mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf2_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m1_u16m1_tu(vuint16m1_t vd, vuint8m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m1_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m2_u16m1_tu(vuint16m1_t vd, vuint8m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m2_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m4_u16m1_tu(vuint16m1_t vd, vuint8m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m4_u16m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m8_u16m1_tu(vuint16m1_t vd, vuint8m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m8_u16m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf4_u32m1_tu(vuint32m1_t vd, vuint16mf4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16mf4_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf2_u32m1_tu(vuint32m1_t vd, vuint16mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16mf2_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m1_u32m1_tu(vuint32m1_t vd, vuint16m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m1_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m2_u32m1_tu(vuint32m1_t vd, vuint16m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m2_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m4_u32m1_tu(vuint32m1_t vd, vuint16m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m4_u32m1_tu(vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m8_u32m1_tu(vuint32m1_t vd, vuint16m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m8_u32m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32mf2_u64m1_tu(vuint64m1_t vd, vuint32mf2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32mf2_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m1_u64m1_tu(vuint64m1_t vd, vuint32m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m1_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m2_u64m1_tu(vuint64m1_t vd, vuint32m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m2_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m4_u64m1_tu(vuint64m1_t vd, vuint32m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m4_u64m1_tu(vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m8_u64m1_tu(vuint64m1_t vd, vuint32m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m8_u64m1_tu(vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf8_u16m1_tum(vbool64_t vm, vuint16m1_t vd, vuint8mf8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf8_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf4_u16m1_tum(vbool32_t vm, vuint16m1_t vd, vuint8mf4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf4_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8mf2_u16m1_tum(vbool16_t vm, vuint16m1_t vd, vuint8mf2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8mf2_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m1_u16m1_tum(vbool8_t vm, vuint16m1_t vd, vuint8m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m1_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m2_u16m1_tum(vbool4_t vm, vuint16m1_t vd, vuint8m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m2_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m4_u16m1_tum(vbool2_t vm, vuint16m1_t vd, vuint8m4_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m4_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint16m1_t test_vwredsumu_vs_u8m8_u16m1_tum(vbool1_t vm, vuint16m1_t vd, vuint8m8_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u8m8_u16m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf4_u32m1_tum(vbool64_t vm, vuint32m1_t vd, vuint16mf4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16mf4_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16mf2_u32m1_tum(vbool32_t vm, vuint32m1_t vd, vuint16mf2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16mf2_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m1_u32m1_tum(vbool16_t vm, vuint32m1_t vd, vuint16m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m1_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m2_u32m1_tum(vbool8_t vm, vuint32m1_t vd, vuint16m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m2_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m4_u32m1_tum(vbool4_t vm, vuint32m1_t vd, vuint16m4_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m4_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint32m1_t test_vwredsumu_vs_u16m8_u32m1_tum(vbool2_t vm, vuint32m1_t vd, vuint16m8_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u16m8_u32m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32mf2_u64m1_tum(vbool64_t vm, vuint64m1_t vd, vuint32mf2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32mf2_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m1_u64m1_tum(vbool32_t vm, vuint64m1_t vd, vuint32m1_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m1_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m2_u64m1_tum(vbool16_t vm, vuint64m1_t vd, vuint32m2_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m2_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m4_u64m1_tum(vbool8_t vm, vuint64m1_t vd, vuint32m4_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m4_u64m1_tum(vm, vd, vs2, vs1, vl);
}

vuint64m1_t test_vwredsumu_vs_u32m8_u64m1_tum(vbool4_t vm, vuint64m1_t vd, vuint32m8_t vs2, vuint64m1_t vs1, size_t vl) {
  return __riscv_vwredsumu_vs_u32m8_u64m1_tum(vm, vd, vs2, vs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwredsumu\.[ivxfswum.]+\s+} 36 } } */
