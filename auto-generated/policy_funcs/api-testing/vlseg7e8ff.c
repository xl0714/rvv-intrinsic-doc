#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tu(vint8mf8x7_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tu(vd, rs1, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tu(vint8mf4x7_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tu(vd, rs1, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tu(vint8mf2x7_t vd, const int8_t *rs1,
                                          size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tu(vd, rs1, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tu(vint8m1x7_t vd, const int8_t *rs1,
                                        size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tu(vd, rs1, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tu(vuint8mf8x7_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tu(vd, rs1, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tu(vuint8mf4x7_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tu(vd, rs1, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tu(vuint8mf2x7_t vd, const uint8_t *rs1,
                                           size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tu(vd, rs1, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tu(vuint8m1x7_t vd, const uint8_t *rs1,
                                         size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tu(vd, rs1, new_vl, vl);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tum(vbool64_t vm, vint8mf8x7_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tum(vbool32_t vm, vint8mf4x7_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tum(vbool16_t vm, vint8mf2x7_t vd,
                                           const int8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tum(vm, vd, rs1, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tum(vbool8_t vm, vint8m1x7_t vd,
                                         const int8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tum(vbool64_t vm, vuint8mf8x7_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tum(vbool32_t vm, vuint8mf4x7_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tum(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tum(vbool16_t vm, vuint8mf2x7_t vd,
                                            const uint8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tum(vm, vd, rs1, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tum(vbool8_t vm, vuint8m1x7_t vd,
                                          const uint8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tum(vm, vd, rs1, new_vl, vl);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_tumu(vbool64_t vm, vint8mf8x7_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_tumu(vbool32_t vm, vint8mf4x7_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_tumu(vbool16_t vm, vint8mf2x7_t vd,
                                            const int8_t *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_tumu(vm, vd, rs1, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_tumu(vbool8_t vm, vint8m1x7_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_tumu(vbool64_t vm, vuint8mf8x7_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_tumu(vbool32_t vm, vuint8mf4x7_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_tumu(vbool16_t vm, vuint8mf2x7_t vd,
                                             const uint8_t *rs1, size_t *new_vl,
                                             size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_tumu(vm, vd, rs1, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_tumu(vbool8_t vm, vuint8m1x7_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7_tumu(vm, vd, rs1, new_vl, vl);
}

vint8mf8x7_t test_vlseg7e8ff_v_i8mf8x7_mu(vbool64_t vm, vint8mf8x7_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf8x7_mu(vm, vd, rs1, new_vl, vl);
}

vint8mf4x7_t test_vlseg7e8ff_v_i8mf4x7_mu(vbool32_t vm, vint8mf4x7_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf4x7_mu(vm, vd, rs1, new_vl, vl);
}

vint8mf2x7_t test_vlseg7e8ff_v_i8mf2x7_mu(vbool16_t vm, vint8mf2x7_t vd,
                                          const int8_t *rs1, size_t *new_vl,
                                          size_t vl) {
  return __riscv_vlseg7e8ff_v_i8mf2x7_mu(vm, vd, rs1, new_vl, vl);
}

vint8m1x7_t test_vlseg7e8ff_v_i8m1x7_mu(vbool8_t vm, vint8m1x7_t vd,
                                        const int8_t *rs1, size_t *new_vl,
                                        size_t vl) {
  return __riscv_vlseg7e8ff_v_i8m1x7_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf8x7_t test_vlseg7e8ff_v_u8mf8x7_mu(vbool64_t vm, vuint8mf8x7_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf8x7_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf4x7_t test_vlseg7e8ff_v_u8mf4x7_mu(vbool32_t vm, vuint8mf4x7_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf4x7_mu(vm, vd, rs1, new_vl, vl);
}

vuint8mf2x7_t test_vlseg7e8ff_v_u8mf2x7_mu(vbool16_t vm, vuint8mf2x7_t vd,
                                           const uint8_t *rs1, size_t *new_vl,
                                           size_t vl) {
  return __riscv_vlseg7e8ff_v_u8mf2x7_mu(vm, vd, rs1, new_vl, vl);
}

vuint8m1x7_t test_vlseg7e8ff_v_u8m1x7_mu(vbool8_t vm, vuint8m1x7_t vd,
                                         const uint8_t *rs1, size_t *new_vl,
                                         size_t vl) {
  return __riscv_vlseg7e8ff_v_u8m1x7_mu(vm, vd, rs1, new_vl, vl);
}
