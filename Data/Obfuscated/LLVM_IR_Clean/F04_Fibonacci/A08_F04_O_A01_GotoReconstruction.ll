define dso_local i64 @di4(i32 %0) {
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
  store i32 2, i32* %7
  %13 = load i32, i32* %3
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  store i64 0, i64* %2
  store i32 1, i32* %8
  br label %36
16:
  %17 = load i32, i32* %3
  %18 = icmp eq i32 %17, 1
  br i1 %18, label %19, label %20
19:
  store i64 1, i64* %2
  store i32 1, i32* %8
  br label %36
20:
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %3
  %24 = icmp sgt i32 %22, %23
  br i1 %24, label %25, label %26
25:
  br label %34
26:
  %27 = load i64, i64* %4
  %28 = load i64, i64* %5
  %29 = add nsw i64 %27, %28
  store i64 %29, i64* %6
  %30 = load i64, i64* %5
  store i64 %30, i64* %4
  %31 = load i64, i64* %6
  store i64 %31, i64* %5
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %7
  br label %21
34:
  %35 = load i64, i64* %5
  store i64 %35, i64* %2
  store i32 1, i32* %8
  br label %36
36:
  %41 = load i64, i64* %2
  ret i64 %41
}
