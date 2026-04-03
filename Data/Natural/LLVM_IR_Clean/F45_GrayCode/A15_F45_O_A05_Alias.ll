define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca [3 x i32]
  %4 = alloca i32*
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 0
  store i32 %6, i32* %7
  %8 = load i32, i32* %2
  %9 = lshr i32 %8, 1
  %10 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 1
  store i32 %9, i32* %10
  %11 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 0
  %12 = load i32, i32* %11
  %13 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 1
  %14 = load i32, i32* %13
  %15 = xor i32 %12, %14
  %16 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 2
  store i32 %15, i32* %16
  %18 = getelementptr inbounds [3 x i32], [3 x i32]* %3, i64 0, i64 2
  store i32* %18, i32** %4
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %19
  ret i32 %20
}
