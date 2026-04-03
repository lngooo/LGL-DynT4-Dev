define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = call i32 @llvm.ctpop.i32(i32 %3)
  ret i32 %4
}
declare i32 @llvm.ctpop.i32(i32)
