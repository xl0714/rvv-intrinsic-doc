#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint8mf8_t test_vle8_v_i8mf8_m(vbool64_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8mf4_t test_vle8_v_i8mf4_m(vbool32_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8mf2_t test_vle8_v_i8mf2_m(vbool16_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8m1_t test_vle8_v_i8m1_m(vbool8_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8m2_t test_vle8_v_i8m2_m(vbool4_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8m4_t test_vle8_v_i8m4_m(vbool2_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vint8m8_t test_vle8_v_i8m8_m(vbool1_t vm, const int8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8mf8_t test_vle8_v_u8mf8_m(vbool64_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8mf4_t test_vle8_v_u8mf4_m(vbool32_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8mf2_t test_vle8_v_u8mf2_m(vbool16_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8m1_t test_vle8_v_u8m1_m(vbool8_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8m2_t test_vle8_v_u8m2_m(vbool4_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8m4_t test_vle8_v_u8m4_m(vbool2_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}

vuint8m8_t test_vle8_v_u8m8_m(vbool1_t vm, const uint8_t *rs1, size_t vl) {
  return __riscv_vle8(vm, rs1, vl);
}
