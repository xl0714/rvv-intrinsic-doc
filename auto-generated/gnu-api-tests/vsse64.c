/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsse64_v_f64m1(float64_t *rs1, ptrdiff_t rs2, vfloat64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m1(rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m2(float64_t *rs1, ptrdiff_t rs2, vfloat64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m2(rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m4(float64_t *rs1, ptrdiff_t rs2, vfloat64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m4(rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m8(float64_t *rs1, ptrdiff_t rs2, vfloat64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m8(rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m1(int64_t *rs1, ptrdiff_t rs2, vint64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m1(rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m2(int64_t *rs1, ptrdiff_t rs2, vint64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m2(rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m4(int64_t *rs1, ptrdiff_t rs2, vint64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m4(rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m8(int64_t *rs1, ptrdiff_t rs2, vint64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m8(rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m1(uint64_t *rs1, ptrdiff_t rs2, vuint64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m1(rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m2(uint64_t *rs1, ptrdiff_t rs2, vuint64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m2(rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m4(uint64_t *rs1, ptrdiff_t rs2, vuint64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m4(rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m8(uint64_t *rs1, ptrdiff_t rs2, vuint64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m8(rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m1_m(vbool64_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m1_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m2_m(vbool32_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m4_m(vbool16_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_f64m8_m(vbool8_t vm, float64_t *rs1, ptrdiff_t rs2, vfloat64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_f64m8_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m1_m(vbool64_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m1_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m2_m(vbool32_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m4_m(vbool16_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_i64m8_m(vbool8_t vm, int64_t *rs1, ptrdiff_t rs2, vint64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_i64m8_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m1_m(vbool64_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m1_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m1_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m2_m(vbool32_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m2_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m4_m(vbool16_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m4_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsse64_v_u64m8_m(vbool8_t vm, uint64_t *rs1, ptrdiff_t rs2, vuint64m8_t vs3, size_t vl) {
  return __riscv_vsse64_v_u64m8_m(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsse64\.[ivxfswum.]+\s+} 24 } } */
