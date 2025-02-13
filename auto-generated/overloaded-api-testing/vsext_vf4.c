#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint32mf2_t test_vsext_vf4_i32mf2(vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint32m1_t test_vsext_vf4_i32m1(vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint32m2_t test_vsext_vf4_i32m2(vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint32m4_t test_vsext_vf4_i32m4(vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint32m8_t test_vsext_vf4_i32m8(vint8m2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint64m1_t test_vsext_vf4_i64m1(vint16mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint64m2_t test_vsext_vf4_i64m2(vint16mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint64m4_t test_vsext_vf4_i64m4(vint16m1_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint64m8_t test_vsext_vf4_i64m8(vint16m2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vs2, vl);
}

vint32mf2_t test_vsext_vf4_i32mf2_m(vbool64_t vm, vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint32m1_t test_vsext_vf4_i32m1_m(vbool32_t vm, vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint32m2_t test_vsext_vf4_i32m2_m(vbool16_t vm, vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint32m4_t test_vsext_vf4_i32m4_m(vbool8_t vm, vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint32m8_t test_vsext_vf4_i32m8_m(vbool4_t vm, vint8m2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint64m1_t test_vsext_vf4_i64m1_m(vbool64_t vm, vint16mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint64m2_t test_vsext_vf4_i64m2_m(vbool32_t vm, vint16mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint64m4_t test_vsext_vf4_i64m4_m(vbool16_t vm, vint16m1_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}

vint64m8_t test_vsext_vf4_i64m8_m(vbool8_t vm, vint16m2_t vs2, size_t vl) {
  return __riscv_vsext_vf4(vm, vs2, vl);
}
