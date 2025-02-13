#include <riscv_vector.h>
#include <stdint.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

vint16mf4_t test_vwadd_vv_i16mf4(vint8mf8_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4(vint8mf8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4(vint16mf4_t vs2, vint8mf8_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4(vint16mf4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2(vint8mf4_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2(vint8mf4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2(vint16mf2_t vs2, vint8mf4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2(vint16mf2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16m1_t test_vwadd_vv_i16m1(vint8mf2_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16m1_t test_vwadd_vx_i16m1(vint8mf2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16m1_t test_vwadd_wv_i16m1(vint16m1_t vs2, vint8mf2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16m1_t test_vwadd_wx_i16m1(vint16m1_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16m2_t test_vwadd_vv_i16m2(vint8m1_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16m2_t test_vwadd_vx_i16m2(vint8m1_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16m2_t test_vwadd_wv_i16m2(vint16m2_t vs2, vint8m1_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16m2_t test_vwadd_wx_i16m2(vint16m2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16m4_t test_vwadd_vv_i16m4(vint8m2_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16m4_t test_vwadd_vx_i16m4(vint8m2_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16m4_t test_vwadd_wv_i16m4(vint16m4_t vs2, vint8m2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16m4_t test_vwadd_wx_i16m4(vint16m4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16m8_t test_vwadd_vv_i16m8(vint8m4_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint16m8_t test_vwadd_vx_i16m8(vint8m4_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint16m8_t test_vwadd_wv_i16m8(vint16m8_t vs2, vint8m4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint16m8_t test_vwadd_wx_i16m8(vint16m8_t vs2, int8_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2(vint16mf4_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2(vint16mf4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2(vint32mf2_t vs2, vint16mf4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2(vint32mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint32m1_t test_vwadd_vv_i32m1(vint16mf2_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint32m1_t test_vwadd_vx_i32m1(vint16mf2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint32m1_t test_vwadd_wv_i32m1(vint32m1_t vs2, vint16mf2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint32m1_t test_vwadd_wx_i32m1(vint32m1_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint32m2_t test_vwadd_vv_i32m2(vint16m1_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint32m2_t test_vwadd_vx_i32m2(vint16m1_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint32m2_t test_vwadd_wv_i32m2(vint32m2_t vs2, vint16m1_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint32m2_t test_vwadd_wx_i32m2(vint32m2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint32m4_t test_vwadd_vv_i32m4(vint16m2_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint32m4_t test_vwadd_vx_i32m4(vint16m2_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint32m4_t test_vwadd_wv_i32m4(vint32m4_t vs2, vint16m2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint32m4_t test_vwadd_wx_i32m4(vint32m4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint32m8_t test_vwadd_vv_i32m8(vint16m4_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint32m8_t test_vwadd_vx_i32m8(vint16m4_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint32m8_t test_vwadd_wv_i32m8(vint32m8_t vs2, vint16m4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint32m8_t test_vwadd_wx_i32m8(vint32m8_t vs2, int16_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint64m1_t test_vwadd_vv_i64m1(vint32mf2_t vs2, vint32mf2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint64m1_t test_vwadd_vx_i64m1(vint32mf2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint64m1_t test_vwadd_wv_i64m1(vint64m1_t vs2, vint32mf2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint64m1_t test_vwadd_wx_i64m1(vint64m1_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint64m2_t test_vwadd_vv_i64m2(vint32m1_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint64m2_t test_vwadd_vx_i64m2(vint32m1_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint64m2_t test_vwadd_wv_i64m2(vint64m2_t vs2, vint32m1_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint64m2_t test_vwadd_wx_i64m2(vint64m2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint64m4_t test_vwadd_vv_i64m4(vint32m2_t vs2, vint32m2_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint64m4_t test_vwadd_vx_i64m4(vint32m2_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint64m4_t test_vwadd_wv_i64m4(vint64m4_t vs2, vint32m2_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint64m4_t test_vwadd_wx_i64m4(vint64m4_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint64m8_t test_vwadd_vv_i64m8(vint32m4_t vs2, vint32m4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vs2, vs1, vl);
}

vint64m8_t test_vwadd_vx_i64m8(vint32m4_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_vx(vs2, rs1, vl);
}

vint64m8_t test_vwadd_wv_i64m8(vint64m8_t vs2, vint32m4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vs2, vs1, vl);
}

vint64m8_t test_vwadd_wx_i64m8(vint64m8_t vs2, int32_t rs1, size_t vl) {
  return __riscv_vwadd_wx(vs2, rs1, vl);
}

vint16mf4_t test_vwadd_vv_i16mf4_m(vbool64_t vm, vint8mf8_t vs2, vint8mf8_t vs1,
                                   size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16mf4_t test_vwadd_vx_i16mf4_m(vbool64_t vm, vint8mf8_t vs2, int8_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16mf4_t test_vwadd_wv_i16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                   vint8mf8_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16mf4_t test_vwadd_wx_i16mf4_m(vbool64_t vm, vint16mf4_t vs2, int8_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint16mf2_t test_vwadd_vv_i16mf2_m(vbool32_t vm, vint8mf4_t vs2, vint8mf4_t vs1,
                                   size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16mf2_t test_vwadd_vx_i16mf2_m(vbool32_t vm, vint8mf4_t vs2, int8_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16mf2_t test_vwadd_wv_i16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                   vint8mf4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16mf2_t test_vwadd_wx_i16mf2_m(vbool32_t vm, vint16mf2_t vs2, int8_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint16m1_t test_vwadd_vv_i16m1_m(vbool16_t vm, vint8mf2_t vs2, vint8mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16m1_t test_vwadd_vx_i16m1_m(vbool16_t vm, vint8mf2_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16m1_t test_vwadd_wv_i16m1_m(vbool16_t vm, vint16m1_t vs2, vint8mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16m1_t test_vwadd_wx_i16m1_m(vbool16_t vm, vint16m1_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint16m2_t test_vwadd_vv_i16m2_m(vbool8_t vm, vint8m1_t vs2, vint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16m2_t test_vwadd_vx_i16m2_m(vbool8_t vm, vint8m1_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16m2_t test_vwadd_wv_i16m2_m(vbool8_t vm, vint16m2_t vs2, vint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16m2_t test_vwadd_wx_i16m2_m(vbool8_t vm, vint16m2_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint16m4_t test_vwadd_vv_i16m4_m(vbool4_t vm, vint8m2_t vs2, vint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16m4_t test_vwadd_vx_i16m4_m(vbool4_t vm, vint8m2_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16m4_t test_vwadd_wv_i16m4_m(vbool4_t vm, vint16m4_t vs2, vint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16m4_t test_vwadd_wx_i16m4_m(vbool4_t vm, vint16m4_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint16m8_t test_vwadd_vv_i16m8_m(vbool2_t vm, vint8m4_t vs2, vint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint16m8_t test_vwadd_vx_i16m8_m(vbool2_t vm, vint8m4_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint16m8_t test_vwadd_wv_i16m8_m(vbool2_t vm, vint16m8_t vs2, vint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint16m8_t test_vwadd_wx_i16m8_m(vbool2_t vm, vint16m8_t vs2, int8_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint32mf2_t test_vwadd_vv_i32mf2_m(vbool64_t vm, vint16mf4_t vs2,
                                   vint16mf4_t vs1, size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint32mf2_t test_vwadd_vx_i32mf2_m(vbool64_t vm, vint16mf4_t vs2, int16_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint32mf2_t test_vwadd_wv_i32mf2_m(vbool64_t vm, vint32mf2_t vs2,
                                   vint16mf4_t vs1, size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint32mf2_t test_vwadd_wx_i32mf2_m(vbool64_t vm, vint32mf2_t vs2, int16_t rs1,
                                   size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint32m1_t test_vwadd_vv_i32m1_m(vbool32_t vm, vint16mf2_t vs2, vint16mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint32m1_t test_vwadd_vx_i32m1_m(vbool32_t vm, vint16mf2_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint32m1_t test_vwadd_wv_i32m1_m(vbool32_t vm, vint32m1_t vs2, vint16mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint32m1_t test_vwadd_wx_i32m1_m(vbool32_t vm, vint32m1_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint32m2_t test_vwadd_vv_i32m2_m(vbool16_t vm, vint16m1_t vs2, vint16m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint32m2_t test_vwadd_vx_i32m2_m(vbool16_t vm, vint16m1_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint32m2_t test_vwadd_wv_i32m2_m(vbool16_t vm, vint32m2_t vs2, vint16m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint32m2_t test_vwadd_wx_i32m2_m(vbool16_t vm, vint32m2_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint32m4_t test_vwadd_vv_i32m4_m(vbool8_t vm, vint16m2_t vs2, vint16m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint32m4_t test_vwadd_vx_i32m4_m(vbool8_t vm, vint16m2_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint32m4_t test_vwadd_wv_i32m4_m(vbool8_t vm, vint32m4_t vs2, vint16m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint32m4_t test_vwadd_wx_i32m4_m(vbool8_t vm, vint32m4_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint32m8_t test_vwadd_vv_i32m8_m(vbool4_t vm, vint16m4_t vs2, vint16m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint32m8_t test_vwadd_vx_i32m8_m(vbool4_t vm, vint16m4_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint32m8_t test_vwadd_wv_i32m8_m(vbool4_t vm, vint32m8_t vs2, vint16m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint32m8_t test_vwadd_wx_i32m8_m(vbool4_t vm, vint32m8_t vs2, int16_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint64m1_t test_vwadd_vv_i64m1_m(vbool64_t vm, vint32mf2_t vs2, vint32mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint64m1_t test_vwadd_vx_i64m1_m(vbool64_t vm, vint32mf2_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint64m1_t test_vwadd_wv_i64m1_m(vbool64_t vm, vint64m1_t vs2, vint32mf2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint64m1_t test_vwadd_wx_i64m1_m(vbool64_t vm, vint64m1_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint64m2_t test_vwadd_vv_i64m2_m(vbool32_t vm, vint32m1_t vs2, vint32m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint64m2_t test_vwadd_vx_i64m2_m(vbool32_t vm, vint32m1_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint64m2_t test_vwadd_wv_i64m2_m(vbool32_t vm, vint64m2_t vs2, vint32m1_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint64m2_t test_vwadd_wx_i64m2_m(vbool32_t vm, vint64m2_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint64m4_t test_vwadd_vv_i64m4_m(vbool16_t vm, vint32m2_t vs2, vint32m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint64m4_t test_vwadd_vx_i64m4_m(vbool16_t vm, vint32m2_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint64m4_t test_vwadd_wv_i64m4_m(vbool16_t vm, vint64m4_t vs2, vint32m2_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint64m4_t test_vwadd_wx_i64m4_m(vbool16_t vm, vint64m4_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}

vint64m8_t test_vwadd_vv_i64m8_m(vbool8_t vm, vint32m4_t vs2, vint32m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_vv(vm, vs2, vs1, vl);
}

vint64m8_t test_vwadd_vx_i64m8_m(vbool8_t vm, vint32m4_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_vx(vm, vs2, rs1, vl);
}

vint64m8_t test_vwadd_wv_i64m8_m(vbool8_t vm, vint64m8_t vs2, vint32m4_t vs1,
                                 size_t vl) {
  return __riscv_vwadd_wv(vm, vs2, vs1, vl);
}

vint64m8_t test_vwadd_wx_i64m8_m(vbool8_t vm, vint64m8_t vs2, int32_t rs1,
                                 size_t vl) {
  return __riscv_vwadd_wx(vm, vs2, rs1, vl);
}
