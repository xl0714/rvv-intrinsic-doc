// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_m(vbool64_t vm, const float *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_m(vbool32_t vm, const float *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_m(vbool64_t vm, const int32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_m(vbool32_t vm, const int32_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_m(vbool64_t vm, const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_m(vbool32_t vm, const uint32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff(vm, rs1, new_vl, vl);
}
