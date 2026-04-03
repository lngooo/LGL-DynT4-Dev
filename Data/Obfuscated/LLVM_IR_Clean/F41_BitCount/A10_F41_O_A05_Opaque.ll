@Ho7 = internal constant [16 x i32] [i32 0, i32 1, i32 1, i32 2, i32 1, i32 2, i32 2, i32 3, i32 1, i32 2, i32 2, i32 3, i32 2, i32 3, i32 3, i32 4]
define dso_local i32 @m8(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 15, i32* %4
  %8 = load i32, i32* %4
  %9 = load i32, i32* %4
  %10 = mul nsw i32 %8, %9
  %11 = icmp sgt i32 %10, 100
  br i1 %11, label %12, label %33
12:
  store i32 0, i32* %5
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = icmp slt i32 %15, 8
  br i1 %16, label %19, label %17
17:
  br label %32
19:
  %20 = load i32, i32* %2
  %21 = and i32 %20, 15
  %22 = zext i32 %21 to i64
  %23 = getelementptr inbounds [16 x i32], [16 x i32]* @Ho7, i64 0, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32, i32* %3
  %26 = add nsw i32 %25, %24
  store i32 %26, i32* %3
  %27 = load i32, i32* %2
  %28 = lshr i32 %27, 4
  store i32 %28, i32* %2
  br label %29
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %14
32:
  br label %34
33:
  store i32 -1, i32* %3
  br label %34
34:
  %35 = load i32, i32* %3
  ret i32 %35
}
