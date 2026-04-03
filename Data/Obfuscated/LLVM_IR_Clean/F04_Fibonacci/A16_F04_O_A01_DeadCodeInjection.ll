define dso_local i64 @P(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %12 = load i32, i32* %3
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i64 0, i64* %2
  store i32 1, i32* %7
  br label %40
15:
  store i32 2, i32* %8
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = load i32, i32* %3
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %23, label %21
21:
  store i32 2, i32* %7
  br label %32
23:
  %24 = load i64, i64* %4
  %25 = load i64, i64* %5
  %26 = add nsw i64 %24, %25
  store i64 %26, i64* %6
  %27 = load i64, i64* %5
  store i64 %27, i64* %4
  %28 = load i64, i64* %6
  store i64 %28, i64* %5
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %8
  br label %17
32:
  %33 = load i32, i32* %3
  %34 = icmp eq i32 %33, 1
  br i1 %34, label %35, label %36
35:
  br label %38
36:
  %37 = load i64, i64* %5
  br label %38
38:
  %39 = phi i64 [ 1, %35 ], [ %37, %36 ]
  store i64 %39, i64* %2
  store i32 1, i32* %7
  br label %40
40:
  %44 = load i64, i64* %2
  ret i64 %44
}
