/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

unsigned int test_vcpop_m_b1(vbool1_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b2(vbool2_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b4(vbool4_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b8(vbool8_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b16(vbool16_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b32(vbool32_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b64(vbool64_t vs2, size_t vl) {
  return __riscv_vcpop(vs2, vl);
}

unsigned int test_vcpop_m_b1_m(vbool1_t vm, vbool1_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b2_m(vbool2_t vm, vbool2_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b4_m(vbool4_t vm, vbool4_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b8_m(vbool8_t vm, vbool8_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b16_m(vbool16_t vm, vbool16_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b32_m(vbool32_t vm, vbool32_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}

unsigned int test_vcpop_m_b64_m(vbool64_t vm, vbool64_t vs2, size_t vl) {
  return __riscv_vcpop(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vcpop\.[ivxfswum.]+\s+} 14 } } */
