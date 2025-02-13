#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_tu(vint32mf2_t vd, vfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_tu(vint32m1_t vd, vfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_tu(vint32m2_t vd, vfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_tu(vint32m4_t vd, vfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_tu(vint32m8_t vd, vfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_tu(vuint32mf2_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_tu(vuint32m1_t vd, vfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_tu(vuint32m2_t vd, vfloat16m1_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_tu(vuint32m4_t vd, vfloat16m2_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_tu(vuint32m8_t vd, vfloat16m4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_tu(vint64m1_t vd, vfloat32mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_tu(vint64m2_t vd, vfloat32m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_tu(vint64m4_t vd, vfloat32m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_tu(vint64m8_t vd, vfloat32m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_rtz_x_tu(vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_tu(vuint64m1_t vd, vfloat32mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_tu(vuint64m2_t vd, vfloat32m1_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_tu(vuint64m4_t vd, vfloat32m2_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_tu(vuint64m8_t vd, vfloat32m4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tu(vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                             vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_tum(vbool16_t vm, vint32m2_t vd,
                                           vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_tum(vbool8_t vm, vint32m4_t vd,
                                           vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_tum(vbool4_t vm, vint32m8_t vd,
                                           vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                               vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                             vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                             vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                             vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                             vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_tum(vbool64_t vm, vint64m1_t vd,
                                           vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_tum(vbool32_t vm, vint64m2_t vd,
                                           vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_tum(vbool16_t vm, vint64m4_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_tum(vbool8_t vm, vint64m8_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tum(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tum(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd,
                                            vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_tumu(vbool4_t vm, vint32m8_t vd,
                                            vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                                vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                              vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                              vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                              vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                              vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_tumu(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                              vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                              vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                              vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                              vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_tumu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_mu(vbool16_t vm, vint32m2_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_mu(vbool8_t vm, vint32m4_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_mu(vbool4_t vm, vint32m8_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                            vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_mu(vbool4_t vm, vuint32m8_t vd,
                                            vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_mu(vbool64_t vm, vint64m1_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_mu(vbool32_t vm, vint64m2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_mu(vbool16_t vm, vint64m4_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_mu(vbool8_t vm, vint64m8_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_x_mu(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_rtz_xu_mu(vm, vd, vs2, vl);
}
