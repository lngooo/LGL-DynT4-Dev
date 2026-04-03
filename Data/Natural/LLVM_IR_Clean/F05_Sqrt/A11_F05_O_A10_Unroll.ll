define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %42
9:
  store i64 0, i64* %4
  br label %11
11:
  %12 = load i64, i64* %4
  %13 = add nsw i64 %12, 1
  %14 = load i64, i64* %4
  %15 = add nsw i64 %14, 1
  %16 = mul nsw i64 %13, %15
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  %19 = icmp sgt i64 %16, %18
  br i1 %19, label %20, label %23
20:
  %21 = load i64, i64* %4
  %22 = trunc i64 %21 to i32
  store i32 %22, i32* %2
  store i32 1, i32* %5
  br label %40
23:
  %24 = load i64, i64* %4
  %25 = add nsw i64 %24, 2
  %26 = load i64, i64* %4
  %27 = add nsw i64 %26, 2
  %28 = mul nsw i64 %25, %27
  %29 = load i32, i32* %3
  %30 = sext i32 %29 to i64
  %31 = icmp sgt i64 %28, %30
  br i1 %31, label %32, label %36
32:
  %33 = load i64, i64* %4
  %34 = add nsw i64 %33, 1
  %35 = trunc i64 %34 to i32
  store i32 %35, i32* %2
  store i32 1, i32* %5
  br label %40
36:
  br label %37
37:
  %38 = load i64, i64* %4
  %39 = add nsw i64 %38, 2
  store i64 %39, i64* %4
  br label %11
40:
  br label %42
42:
  %43 = load i32, i32* %2
  ret i32 %43
}
