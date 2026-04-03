define dso_local i64 @mLHR1(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  store i32 0, i32* %4
  store i64 0, i64* %5
  store i64 1, i64* %6
  store i32 2, i32* %8
  br label %15
15:
  %16 = load i32, i32* %4
  %17 = icmp ne i32 %16, 3
  br i1 %17, label %18, label %40
18:
  %19 = load i32, i32* %4
  switch i32 %19, label %39 [
    i32 0, label %20
    i32 1, label %25
    i32 2, label %31
  ]
20:
  %21 = load i32, i32* %3
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i64 0, i64* %2
  store i32 1, i32* %9
  br label %48
24:
  store i32 1, i32* %4
  br label %39
25:
  %26 = load i32, i32* %8
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  %29 = zext i1 %28 to i64
  %30 = select i1 %28, i32 2, i32 3
  store i32 %30, i32* %4
  br label %39
31:
  %32 = load i64, i64* %5
  %33 = load i64, i64* %6
  %34 = add nsw i64 %32, %33
  store i64 %34, i64* %7
  %35 = load i64, i64* %6
  store i64 %35, i64* %5
  %36 = load i64, i64* %7
  store i64 %36, i64* %6
  %37 = load i32, i32* %8
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  store i32 1, i32* %4
  br label %39
39:
  br label %15
40:
  %41 = load i32, i32* %3
  %42 = icmp eq i32 %41, 1
  br i1 %42, label %43, label %44
43:
  br label %46
44:
  %45 = load i64, i64* %6
  br label %46
46:
  %47 = phi i64 [ 1, %43 ], [ %45, %44 ]
  store i64 %47, i64* %2
  store i32 1, i32* %9
  br label %48
48:
  %54 = load i64, i64* %2
  ret i64 %54
}
