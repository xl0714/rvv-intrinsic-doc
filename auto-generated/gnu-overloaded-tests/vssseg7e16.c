/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg7e16_v_f16mf4x7(float16_t *rs1, ptrdiff_t rs2, vfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_f16mf2x7(float16_t *rs1, ptrdiff_t rs2, vfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_f16m1x7(float16_t *rs1, ptrdiff_t rs2, vfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf4x7(int16_t *rs1, ptrdiff_t rs2, vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf2x7(int16_t *rs1, ptrdiff_t rs2, vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16m1x7(int16_t *rs1, ptrdiff_t rs2, vint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf4x7(uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf2x7(uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16m1x7(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_f16mf4x7_m(vbool64_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_f16mf2x7_m(vbool32_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_f16m1x7_m(vbool16_t vm, float16_t *rs1, ptrdiff_t rs2, vfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf4x7_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16mf2x7_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2, vint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_i16m1x7_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2, vint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf4x7_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf4x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16mf2x7_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e16_v_u16m1x7_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2, vuint16m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e16(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg7e16\.[ivxfswum.]+\s+} 18 } } */
