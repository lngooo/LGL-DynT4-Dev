define dso_local i64 @K9(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 0, i64* %2
  store i32 1, i32* %6
  br label %39
13:
  store i32 2, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %3
  %18 = icmp sle i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %6
  br label %31
21:
  %22 = load i64, i64* %4
  %23 = load i64, i64* %5
  %24 = add nsw i64 %22, %23
  store i64 %24, i64* %5
  %25 = load i64, i64* %5
  %26 = load i64, i64* %4
  %27 = sub nsw i64 %25, %26
  store i64 %27, i64* %4
  br label %28
28:
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %7
  br label %15
31:
  %32 = load i32, i32* %3
  %33 = icmp eq i32 %32, 1
  br i1 %33, label %34, label %35
34:
  br label %37
35:
  %36 = load i64, i64* %5
  br label %37
37:
  %38 = phi i64 [ 1, %34 ], [ %36, %35 ]
  store i64 %38, i64* %2
  store i32 1, i32* %6
  br label %39
39:
  %42 = load i64, i64* %2
  ret i64 %42
}
