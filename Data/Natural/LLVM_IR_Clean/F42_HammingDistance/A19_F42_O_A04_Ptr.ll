define dso_local i32 @HammingDistance(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %3
  %10 = load i32, i32* %4
  %11 = xor i32 %9, %10
  store i32 %11, i32* %5
  %13 = load i32, i32* %5
  %14 = call i32 @llvm.ctpop.i32(i32 %13)
  store i32 %14, i32* %6
  store i32* %6, i32** %7
  %16 = load i32*, i32** %7
  %17 = load i32, i32* %16
  ret i32 %17
}
declare i32 @llvm.ctpop.i32(i32)
