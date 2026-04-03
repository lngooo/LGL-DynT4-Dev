define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i64
  store i32 %0, i32* %2
  %7 = load i32, i32* %2
  %8 = zext i32 %7 to i64
  store i64 %8, i64* %3
  %10 = load i64, i64* %3
  %11 = lshr i64 %10, 1
  store i64 %11, i64* %4
  %13 = load i64, i64* %3
  %14 = load i64, i64* %4
  %15 = xor i64 %13, %14
  store i64 %15, i64* %5
  %16 = load i64, i64* %5
  %17 = trunc i64 %16 to i32
  ret i32 %17
}
