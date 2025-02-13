#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

void test_vsseg2e64_v_f64m1x2(float64_t *rs1, vfloat64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m2x2(float64_t *rs1, vfloat64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m4x2(float64_t *rs1, vfloat64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m1x2(int64_t *rs1, vint64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m2x2(int64_t *rs1, vint64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m4x2(int64_t *rs1, vint64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m1x2(uint64_t *rs1, vuint64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m2x2(uint64_t *rs1, vuint64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m4x2(uint64_t *rs1, vuint64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m1x2_m(vbool64_t vm, float64_t *rs1,
                                vfloat64m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m2x2_m(vbool32_t vm, float64_t *rs1,
                                vfloat64m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_f64m4x2_m(vbool16_t vm, float64_t *rs1,
                                vfloat64m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m1x2_m(vbool64_t vm, int64_t *rs1, vint64m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m2x2_m(vbool32_t vm, int64_t *rs1, vint64m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_i64m4x2_m(vbool16_t vm, int64_t *rs1, vint64m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m1x2_m(vbool64_t vm, uint64_t *rs1, vuint64m1x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m2x2_m(vbool32_t vm, uint64_t *rs1, vuint64m2x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}

void test_vsseg2e64_v_u64m4x2_m(vbool16_t vm, uint64_t *rs1, vuint64m4x2_t vs3,
                                size_t vl) {
  return __riscv_vsseg2e64(vm, rs1, vs3, vl);
}
