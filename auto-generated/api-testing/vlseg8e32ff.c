#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8(const float32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8(rs1, new_vl, vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8(const float32_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8(rs1, new_vl, vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8(const int32_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8(rs1, new_vl, vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8(const int32_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8(rs1, new_vl, vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8(const uint32_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8(rs1, new_vl, vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8(const uint32_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8(rs1, new_vl, vl);
}

vfloat32mf2x8_t test_vlseg8e32ff_v_f32mf2x8_m(vbool64_t vm,
                                              const float32_t *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32mf2x8_m(vm, rs1, new_vl, vl);
}

vfloat32m1x8_t test_vlseg8e32ff_v_f32m1x8_m(vbool32_t vm, const float32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_f32m1x8_m(vm, rs1, new_vl, vl);
}

vint32mf2x8_t test_vlseg8e32ff_v_i32mf2x8_m(vbool64_t vm, const int32_t *rs1,
                                            size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32mf2x8_m(vm, rs1, new_vl, vl);
}

vint32m1x8_t test_vlseg8e32ff_v_i32m1x8_m(vbool32_t vm, const int32_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_i32m1x8_m(vm, rs1, new_vl, vl);
}

vuint32mf2x8_t test_vlseg8e32ff_v_u32mf2x8_m(vbool64_t vm, const uint32_t *rs1,
                                             size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32mf2x8_m(vm, rs1, new_vl, vl);
}

vuint32m1x8_t test_vlseg8e32ff_v_u32m1x8_m(vbool32_t vm, const uint32_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e32ff_v_u32m1x8_m(vm, rs1, new_vl, vl);
}
