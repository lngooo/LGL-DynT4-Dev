@v4 = internal constant [16 x i32] [i32 0, i32 1, i32 1, i32 2, i32 1, i32 2, i32 2, i32 3, i32 1, i32 2, i32 2, i32 3, i32 2, i32 3, i32 3, i32 4]
define dso_local i32 @Pf(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 8
  br i1 %9, label %12, label %10
10:
  br label %25
12:
  %13 = load i32, i32* %2
  %14 = and i32 %13, 15
  %15 = zext i32 %14 to i64
  %16 = getelementptr inbounds [16 x i32], [16 x i32]* @v4, i64 0, i64 %15
  %17 = load i32, i32* %16
  %18 = load i32, i32* %3
  %19 = add nsw i32 %18, %17
  store i32 %19, i32* %3
  %20 = load i32, i32* %2
  %21 = lshr i32 %20, 4
  store i32 %21, i32* %2
  br label %22
22:
  %23 = load i32, i32* %4
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %4
  br label %7
25:
  %26 = load i32, i32* %3
  ret i32 %26
}
