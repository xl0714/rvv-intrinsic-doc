/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vssseg7e32_v_f32mf2x7(float32_t *rs1, ptrdiff_t rs2, vfloat32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_f32m1x7(float32_t *rs1, ptrdiff_t rs2, vfloat32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_i32mf2x7(int32_t *rs1, ptrdiff_t rs2, vint32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_i32m1x7(int32_t *rs1, ptrdiff_t rs2, vint32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_u32mf2x7(uint32_t *rs1, ptrdiff_t rs2, vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_u32m1x7(uint32_t *rs1, ptrdiff_t rs2, vuint32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_f32mf2x7_m(vbool64_t vm, float32_t *rs1, ptrdiff_t rs2, vfloat32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_f32m1x7_m(vbool32_t vm, float32_t *rs1, ptrdiff_t rs2, vfloat32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_i32mf2x7_m(vbool64_t vm, int32_t *rs1, ptrdiff_t rs2, vint32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_i32m1x7_m(vbool32_t vm, int32_t *rs1, ptrdiff_t rs2, vint32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_u32mf2x7_m(vbool64_t vm, uint32_t *rs1, ptrdiff_t rs2, vuint32mf2x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}

void test_vssseg7e32_v_u32m1x7_m(vbool32_t vm, uint32_t *rs1, ptrdiff_t rs2, vuint32m1x7_t vs3, size_t vl) {
  return __riscv_vssseg7e32(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vssseg7e32\.[ivxfswum.]+\s+} 12 } } */
