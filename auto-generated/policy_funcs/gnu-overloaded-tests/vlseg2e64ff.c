/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tu(vfloat64m1x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tu(vfloat64m2x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tu(vfloat64m4x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tu(vint64m1x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tu(vint64m2x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tu(vint64m4x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tu(vuint64m1x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tu(vuint64m2x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tu(vuint64m4x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tu(vd, rs1, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tum(vbool64_t vm, vfloat64m1x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tum(vbool32_t vm, vfloat64m2x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tum(vbool16_t vm, vfloat64m4x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tum(vbool64_t vm, vint64m1x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tum(vbool32_t vm, vint64m2x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tum(vbool16_t vm, vint64m4x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tum(vbool64_t vm, vuint64m1x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tum(vbool32_t vm, vuint64m2x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tum(vbool16_t vm, vuint64m4x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tum(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_tumu(vbool64_t vm, vfloat64m1x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_tumu(vbool32_t vm, vfloat64m2x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_tumu(vbool16_t vm, vfloat64m4x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_tumu(vbool64_t vm, vint64m1x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_tumu(vbool32_t vm, vint64m2x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_tumu(vbool16_t vm, vint64m4x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_tumu(vbool64_t vm, vuint64m1x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_tumu(vbool32_t vm, vuint64m2x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_tumu(vbool16_t vm, vuint64m4x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_tumu(vm, vd, rs1, new_vl, vl);
}

vfloat64m1x2_t test_vlseg2e64ff_v_f64m1x2_mu(vbool64_t vm, vfloat64m1x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat64m2x2_t test_vlseg2e64ff_v_f64m2x2_mu(vbool32_t vm, vfloat64m2x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vfloat64m4x2_t test_vlseg2e64ff_v_f64m4x2_mu(vbool16_t vm, vfloat64m4x2_t vd, const float64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m1x2_t test_vlseg2e64ff_v_i64m1x2_mu(vbool64_t vm, vint64m1x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m2x2_t test_vlseg2e64ff_v_i64m2x2_mu(vbool32_t vm, vint64m2x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vint64m4x2_t test_vlseg2e64ff_v_i64m4x2_mu(vbool16_t vm, vint64m4x2_t vd, const int64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m1x2_t test_vlseg2e64ff_v_u64m1x2_mu(vbool64_t vm, vuint64m1x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m2x2_t test_vlseg2e64ff_v_u64m2x2_mu(vbool32_t vm, vuint64m2x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}

vuint64m4x2_t test_vlseg2e64ff_v_u64m4x2_mu(vbool16_t vm, vuint64m4x2_t vd, const uint64_t *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg2e64ff_mu(vm, vd, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg2e64ff\.[ivxfswum.]+\s+} 36 } } */
