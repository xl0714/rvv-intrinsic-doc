/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x3_t test_vlseg3e64_v_f64m1x3_tu(vfloat64m1x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m1x3_tu(vd, rs1, vl);
}

vfloat64m2x3_t test_vlseg3e64_v_f64m2x3_tu(vfloat64m2x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m2x3_tu(vd, rs1, vl);
}

vint64m1x3_t test_vlseg3e64_v_i64m1x3_tu(vint64m1x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m1x3_tu(vd, rs1, vl);
}

vint64m2x3_t test_vlseg3e64_v_i64m2x3_tu(vint64m2x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m2x3_tu(vd, rs1, vl);
}

vuint64m1x3_t test_vlseg3e64_v_u64m1x3_tu(vuint64m1x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m1x3_tu(vd, rs1, vl);
}

vuint64m2x3_t test_vlseg3e64_v_u64m2x3_tu(vuint64m2x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m2x3_tu(vd, rs1, vl);
}

vfloat64m1x3_t test_vlseg3e64_v_f64m1x3_tum(vbool64_t vm, vfloat64m1x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m1x3_tum(vm, vd, rs1, vl);
}

vfloat64m2x3_t test_vlseg3e64_v_f64m2x3_tum(vbool32_t vm, vfloat64m2x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m2x3_tum(vm, vd, rs1, vl);
}

vint64m1x3_t test_vlseg3e64_v_i64m1x3_tum(vbool64_t vm, vint64m1x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m1x3_tum(vm, vd, rs1, vl);
}

vint64m2x3_t test_vlseg3e64_v_i64m2x3_tum(vbool32_t vm, vint64m2x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m2x3_tum(vm, vd, rs1, vl);
}

vuint64m1x3_t test_vlseg3e64_v_u64m1x3_tum(vbool64_t vm, vuint64m1x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m1x3_tum(vm, vd, rs1, vl);
}

vuint64m2x3_t test_vlseg3e64_v_u64m2x3_tum(vbool32_t vm, vuint64m2x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m2x3_tum(vm, vd, rs1, vl);
}

vfloat64m1x3_t test_vlseg3e64_v_f64m1x3_tumu(vbool64_t vm, vfloat64m1x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m1x3_tumu(vm, vd, rs1, vl);
}

vfloat64m2x3_t test_vlseg3e64_v_f64m2x3_tumu(vbool32_t vm, vfloat64m2x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m2x3_tumu(vm, vd, rs1, vl);
}

vint64m1x3_t test_vlseg3e64_v_i64m1x3_tumu(vbool64_t vm, vint64m1x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m1x3_tumu(vm, vd, rs1, vl);
}

vint64m2x3_t test_vlseg3e64_v_i64m2x3_tumu(vbool32_t vm, vint64m2x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m2x3_tumu(vm, vd, rs1, vl);
}

vuint64m1x3_t test_vlseg3e64_v_u64m1x3_tumu(vbool64_t vm, vuint64m1x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m1x3_tumu(vm, vd, rs1, vl);
}

vuint64m2x3_t test_vlseg3e64_v_u64m2x3_tumu(vbool32_t vm, vuint64m2x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m2x3_tumu(vm, vd, rs1, vl);
}

vfloat64m1x3_t test_vlseg3e64_v_f64m1x3_mu(vbool64_t vm, vfloat64m1x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m1x3_mu(vm, vd, rs1, vl);
}

vfloat64m2x3_t test_vlseg3e64_v_f64m2x3_mu(vbool32_t vm, vfloat64m2x3_t vd, const float64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_f64m2x3_mu(vm, vd, rs1, vl);
}

vint64m1x3_t test_vlseg3e64_v_i64m1x3_mu(vbool64_t vm, vint64m1x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m1x3_mu(vm, vd, rs1, vl);
}

vint64m2x3_t test_vlseg3e64_v_i64m2x3_mu(vbool32_t vm, vint64m2x3_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_i64m2x3_mu(vm, vd, rs1, vl);
}

vuint64m1x3_t test_vlseg3e64_v_u64m1x3_mu(vbool64_t vm, vuint64m1x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m1x3_mu(vm, vd, rs1, vl);
}

vuint64m2x3_t test_vlseg3e64_v_u64m2x3_mu(vbool32_t vm, vuint64m2x3_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg3e64_v_u64m2x3_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg3e64\.[ivxfswum.]+\s+} 24 } } */
