define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca [4 x i8]
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = trunc i32 %5 to i8
  %7 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 0
  store i8 %6, i8* %7
  %8 = load i32, i32* %2
  %9 = lshr i32 %8, 8
  %10 = trunc i32 %9 to i8
  %11 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 1
  store i8 %10, i8* %11
  %12 = load i32, i32* %2
  %13 = lshr i32 %12, 16
  %14 = trunc i32 %13 to i8
  %15 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 2
  store i8 %14, i8* %15
  %16 = load i32, i32* %2
  %17 = lshr i32 %16, 24
  %18 = trunc i32 %17 to i8
  %19 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 3
  store i8 %18, i8* %19
  %20 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 0
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i32
  %23 = shl i32 %22, 24
  %24 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 1
  %25 = load i8, i8* %24
  %26 = zext i8 %25 to i32
  %27 = shl i32 %26, 16
  %28 = or i32 %23, %27
  %29 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 2
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = shl i32 %31, 8
  %33 = or i32 %28, %32
  %34 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 3
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  %37 = or i32 %33, %36
  ret i32 %37
}
