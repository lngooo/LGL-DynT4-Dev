define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  store i64 1, i64* %4
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  store i32 1, i32* %5
  br label %37
10:
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = icmp sgt i32 %12, 1
  br i1 %13, label %14, label %35
14:
  br label %15
15:
  %16 = load i32, i32* %3
  %17 = icmp sgt i32 %16, 1
  br i1 %17, label %18, label %20
18:
  %19 = load i32, i32* %3
  br label %21
20:
  br label %21
21:
  %22 = phi i32 [ %19, %18 ], [ 1, %20 ]
  %23 = sext i32 %22 to i64
  %24 = load i64, i64* %4
  %25 = mul nsw i64 %24, %23
  store i64 %25, i64* %4
  %26 = load i32, i32* %3
  %27 = icmp sgt i32 %26, 1
  br i1 %27, label %28, label %31
28:
  %29 = load i32, i32* %3
  %30 = sub nsw i32 %29, 1
  br label %33
31:
  %32 = load i32, i32* %3
  br label %33
33:
  %34 = phi i32 [ %30, %28 ], [ %32, %31 ]
  store i32 %34, i32* %3
  br label %11
35:
  %36 = load i64, i64* %4
  store i64 %36, i64* %2
  store i32 1, i32* %5
  br label %37
37:
  %39 = load i64, i64* %2
  ret i64 %39
}
