/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint16mf4_t test_vwmulsu_vv_i16mf4(vint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16mf4_t test_vwmulsu_vx_i16mf4(vint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16mf2_t test_vwmulsu_vv_i16mf2(vint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16mf2_t test_vwmulsu_vx_i16mf2(vint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16m1_t test_vwmulsu_vv_i16m1(vint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16m1_t test_vwmulsu_vx_i16m1(vint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16m2_t test_vwmulsu_vv_i16m2(vint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16m2_t test_vwmulsu_vx_i16m2(vint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16m4_t test_vwmulsu_vv_i16m4(vint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16m4_t test_vwmulsu_vx_i16m4(vint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16m8_t test_vwmulsu_vv_i16m8(vint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint16m8_t test_vwmulsu_vx_i16m8(vint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint32mf2_t test_vwmulsu_vv_i32mf2(vint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint32mf2_t test_vwmulsu_vx_i32mf2(vint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint32m1_t test_vwmulsu_vv_i32m1(vint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint32m1_t test_vwmulsu_vx_i32m1(vint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint32m2_t test_vwmulsu_vv_i32m2(vint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint32m2_t test_vwmulsu_vx_i32m2(vint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint32m4_t test_vwmulsu_vv_i32m4(vint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint32m4_t test_vwmulsu_vx_i32m4(vint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint32m8_t test_vwmulsu_vv_i32m8(vint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint32m8_t test_vwmulsu_vx_i32m8(vint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint64m1_t test_vwmulsu_vv_i64m1(vint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint64m1_t test_vwmulsu_vx_i64m1(vint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint64m2_t test_vwmulsu_vv_i64m2(vint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint64m2_t test_vwmulsu_vx_i64m2(vint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint64m4_t test_vwmulsu_vv_i64m4(vint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint64m4_t test_vwmulsu_vx_i64m4(vint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint64m8_t test_vwmulsu_vv_i64m8(vint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vs2, vs1, vl);
}

vint64m8_t test_vwmulsu_vx_i64m8(vint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vs2, rs1, vl);
}

vint16mf4_t test_vwmulsu_vv_i16mf4_m(vbool64_t vm, vint8mf8_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16mf4_t test_vwmulsu_vx_i16mf4_m(vbool64_t vm, vint8mf8_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint16mf2_t test_vwmulsu_vv_i16mf2_m(vbool32_t vm, vint8mf4_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16mf2_t test_vwmulsu_vx_i16mf2_m(vbool32_t vm, vint8mf4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint16m1_t test_vwmulsu_vv_i16m1_m(vbool16_t vm, vint8mf2_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16m1_t test_vwmulsu_vx_i16m1_m(vbool16_t vm, vint8mf2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint16m2_t test_vwmulsu_vv_i16m2_m(vbool8_t vm, vint8m1_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16m2_t test_vwmulsu_vx_i16m2_m(vbool8_t vm, vint8m1_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint16m4_t test_vwmulsu_vv_i16m4_m(vbool4_t vm, vint8m2_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16m4_t test_vwmulsu_vx_i16m4_m(vbool4_t vm, vint8m2_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint16m8_t test_vwmulsu_vv_i16m8_m(vbool2_t vm, vint8m4_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint16m8_t test_vwmulsu_vx_i16m8_m(vbool2_t vm, vint8m4_t vs2, uint8_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint32mf2_t test_vwmulsu_vv_i32mf2_m(vbool64_t vm, vint16mf4_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint32mf2_t test_vwmulsu_vx_i32mf2_m(vbool64_t vm, vint16mf4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint32m1_t test_vwmulsu_vv_i32m1_m(vbool32_t vm, vint16mf2_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint32m1_t test_vwmulsu_vx_i32m1_m(vbool32_t vm, vint16mf2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint32m2_t test_vwmulsu_vv_i32m2_m(vbool16_t vm, vint16m1_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint32m2_t test_vwmulsu_vx_i32m2_m(vbool16_t vm, vint16m1_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint32m4_t test_vwmulsu_vv_i32m4_m(vbool8_t vm, vint16m2_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint32m4_t test_vwmulsu_vx_i32m4_m(vbool8_t vm, vint16m2_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint32m8_t test_vwmulsu_vv_i32m8_m(vbool4_t vm, vint16m4_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint32m8_t test_vwmulsu_vx_i32m8_m(vbool4_t vm, vint16m4_t vs2, uint16_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint64m1_t test_vwmulsu_vv_i64m1_m(vbool64_t vm, vint32mf2_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint64m1_t test_vwmulsu_vx_i64m1_m(vbool64_t vm, vint32mf2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint64m2_t test_vwmulsu_vv_i64m2_m(vbool32_t vm, vint32m1_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint64m2_t test_vwmulsu_vx_i64m2_m(vbool32_t vm, vint32m1_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint64m4_t test_vwmulsu_vv_i64m4_m(vbool16_t vm, vint32m2_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint64m4_t test_vwmulsu_vx_i64m4_m(vbool16_t vm, vint32m2_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}

vint64m8_t test_vwmulsu_vv_i64m8_m(vbool8_t vm, vint32m4_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, vs1, vl);
}

vint64m8_t test_vwmulsu_vx_i64m8_m(vbool8_t vm, vint32m4_t vs2, uint32_t rs1, size_t vl) {
  return __riscv_vwmulsu(vm, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vwmulsu\.[ivxfswum.]+\s+} 60 } } */
