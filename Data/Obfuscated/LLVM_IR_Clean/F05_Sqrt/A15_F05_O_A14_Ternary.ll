define dso_local i32 @gUzw(i64 %0, i64 %1, i64 %2) {
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i64 %0, i64* %4
  store i64 %1, i64* %5
  store i64 %2, i64* %6
  %9 = load i64, i64* %5
  %10 = load i64, i64* %6
  %11 = load i64, i64* %5
  %12 = sub nsw i64 %10, %11
  %13 = sdiv i64 %12, 2
  %14 = add nsw i64 %9, %13
  store i64 %14, i64* %7
  %15 = load i64, i64* %5
  %16 = load i64, i64* %6
  %17 = icmp sgt i64 %15, %16
  br i1 %17, label %18, label %21
18:
  %19 = load i64, i64* %6
  %20 = trunc i64 %19 to i32
  br label %41
21:
  %22 = load i64, i64* %7
  %23 = load i64, i64* %7
  %24 = mul nsw i64 %22, %23
  %25 = load i64, i64* %4
  %26 = icmp sle i64 %24, %25
  br i1 %26, label %27, label %33
27:
  %28 = load i64, i64* %4
  %29 = load i64, i64* %7
  %30 = add nsw i64 %29, 1
  %31 = load i64, i64* %6
  %32 = call i32 @gUzw(i64 %28, i64 %30, i64 %31)
  br label %39
33:
  %34 = load i64, i64* %4
  %35 = load i64, i64* %5
  %36 = load i64, i64* %7
  %37 = sub nsw i64 %36, 1
  %38 = call i32 @gUzw(i64 %34, i64 %35, i64 %37)
  br label %39
39:
  %40 = phi i32 [ %32, %27 ], [ %38, %33 ]
  br label %41
41:
  %42 = phi i32 [ %20, %18 ], [ %40, %39 ]
  ret i32 %42
}
define dso_local i32 @B(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %5, label %6
5:
  br label %12
6:
  %7 = load i32, i32* %2
  %8 = sext i32 %7 to i64
  %9 = load i32, i32* %2
  %10 = sext i32 %9 to i64
  %11 = call i32 @gUzw(i64 %8, i64 0, i64 %10)
  br label %12
12:
  %13 = phi i32 [ -1, %5 ], [ %11, %6 ]
  ret i32 %13
}
