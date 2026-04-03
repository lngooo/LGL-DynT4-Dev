define dso_local i32 @c(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = load i32, i32* %4
  %7 = xor i32 %5, %6
  %8 = call i32 @llvm.ctpop.i32(i32 %7)
  ret i32 %8
}
declare i32 @llvm.ctpop.i32(i32)
