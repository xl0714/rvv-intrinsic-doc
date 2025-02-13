/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tu(vfloat16mf4x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tu(vd, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tu(vfloat16mf2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tu(vd, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tu(vfloat16m1x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tu(vd, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tu(vfloat16m2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tu(vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tu(vint16mf4x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tu(vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tu(vint16mf2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tu(vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tu(vint16m1x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tu(vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tu(vint16m2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tu(vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tu(vuint16mf4x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tu(vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tu(vuint16mf2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tu(vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tu(vuint16m1x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tu(vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tu(vuint16m2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tu(vd, rs1, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tum(vbool64_t vm, vfloat16mf4x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tum(vm, vd, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tum(vbool32_t vm, vfloat16mf2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tum(vm, vd, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tum(vbool16_t vm, vfloat16m1x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tum(vm, vd, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tum(vbool8_t vm, vfloat16m2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tum(vm, vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tum(vbool64_t vm, vint16mf4x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tum(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tum(vbool32_t vm, vint16mf2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tum(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tum(vbool16_t vm, vint16m1x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tum(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tum(vbool8_t vm, vint16m2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tum(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tum(vbool64_t vm, vuint16mf4x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tum(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tum(vbool32_t vm, vuint16mf2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tum(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tum(vbool16_t vm, vuint16m1x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tum(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tum(vbool8_t vm, vuint16m2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tum(vm, vd, rs1, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_tumu(vbool64_t vm, vfloat16mf4x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_tumu(vm, vd, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_tumu(vbool32_t vm, vfloat16mf2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_tumu(vm, vd, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_tumu(vbool16_t vm, vfloat16m1x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_tumu(vm, vd, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_tumu(vbool8_t vm, vfloat16m2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_tumu(vm, vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_tumu(vbool64_t vm, vint16mf4x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_tumu(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_tumu(vbool32_t vm, vint16mf2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_tumu(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_tumu(vbool16_t vm, vint16m1x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_tumu(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_tumu(vbool8_t vm, vint16m2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_tumu(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_tumu(vbool64_t vm, vuint16mf4x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_tumu(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_tumu(vbool32_t vm, vuint16mf2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_tumu(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_tumu(vbool16_t vm, vuint16m1x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_tumu(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_tumu(vbool8_t vm, vuint16m2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_tumu(vm, vd, rs1, vl);
}

vfloat16mf4x3_t test_vlseg3e16_v_f16mf4x3_mu(vbool64_t vm, vfloat16mf4x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf4x3_mu(vm, vd, rs1, vl);
}

vfloat16mf2x3_t test_vlseg3e16_v_f16mf2x3_mu(vbool32_t vm, vfloat16mf2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16mf2x3_mu(vm, vd, rs1, vl);
}

vfloat16m1x3_t test_vlseg3e16_v_f16m1x3_mu(vbool16_t vm, vfloat16m1x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m1x3_mu(vm, vd, rs1, vl);
}

vfloat16m2x3_t test_vlseg3e16_v_f16m2x3_mu(vbool8_t vm, vfloat16m2x3_t vd, const float16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_f16m2x3_mu(vm, vd, rs1, vl);
}

vint16mf4x3_t test_vlseg3e16_v_i16mf4x3_mu(vbool64_t vm, vint16mf4x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf4x3_mu(vm, vd, rs1, vl);
}

vint16mf2x3_t test_vlseg3e16_v_i16mf2x3_mu(vbool32_t vm, vint16mf2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16mf2x3_mu(vm, vd, rs1, vl);
}

vint16m1x3_t test_vlseg3e16_v_i16m1x3_mu(vbool16_t vm, vint16m1x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m1x3_mu(vm, vd, rs1, vl);
}

vint16m2x3_t test_vlseg3e16_v_i16m2x3_mu(vbool8_t vm, vint16m2x3_t vd, const int16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_i16m2x3_mu(vm, vd, rs1, vl);
}

vuint16mf4x3_t test_vlseg3e16_v_u16mf4x3_mu(vbool64_t vm, vuint16mf4x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf4x3_mu(vm, vd, rs1, vl);
}

vuint16mf2x3_t test_vlseg3e16_v_u16mf2x3_mu(vbool32_t vm, vuint16mf2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16mf2x3_mu(vm, vd, rs1, vl);
}

vuint16m1x3_t test_vlseg3e16_v_u16m1x3_mu(vbool16_t vm, vuint16m1x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m1x3_mu(vm, vd, rs1, vl);
}

vuint16m2x3_t test_vlseg3e16_v_u16m2x3_mu(vbool8_t vm, vuint16m2x3_t vd, const uint16_t *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_u16m2x3_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg3e16\.[ivxfswum.]+\s+} 48 } } */
