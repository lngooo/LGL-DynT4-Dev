define dso_local i32 @UOv4(i32 %0) {
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
  br label %37
9:
  store i64 0, i64* %4
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = icmp ne i32 %13, 1
  br i1 %14, label %15, label %32
15:
  %16 = load i32, i32* %5
  switch i32 %16, label %31 [
    i32 0, label %17
  ]
17:
  %18 = load i64, i64* %4
  %19 = add nsw i64 %18, 1
  %20 = load i64, i64* %4
  %21 = add nsw i64 %20, 1
  %22 = mul nsw i64 %19, %21
  %23 = load i32, i32* %3
  %24 = sext i32 %23 to i64
  %25 = icmp sle i64 %22, %24
  br i1 %25, label %26, label %29
26:
  %27 = load i64, i64* %4
  %28 = add nsw i64 %27, 1
  store i64 %28, i64* %4
  br label %30
29:
  store i32 1, i32* %5
  br label %30
30:
  br label %31
31:
  br label %12
32:
  %33 = load i64, i64* %4
  %34 = trunc i64 %33 to i32
  store i32 %34, i32* %2
  br label %37
37:
  %38 = load i32, i32* %2
  ret i32 %38
}
