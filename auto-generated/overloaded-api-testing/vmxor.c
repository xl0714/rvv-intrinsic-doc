#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vbool1_t test_vmxor_mm_b1(vbool1_t vs2, vbool1_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool2_t test_vmxor_mm_b2(vbool2_t vs2, vbool2_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool4_t test_vmxor_mm_b4(vbool4_t vs2, vbool4_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool8_t test_vmxor_mm_b8(vbool8_t vs2, vbool8_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool16_t test_vmxor_mm_b16(vbool16_t vs2, vbool16_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool32_t test_vmxor_mm_b32(vbool32_t vs2, vbool32_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}

vbool64_t test_vmxor_mm_b64(vbool64_t vs2, vbool64_t vs1, size_t vl) {
  return __riscv_vmxor(vs2, vs1, vl);
}
