define dso_local i32 @hCJq9(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %53
10:
  store i64 1, i64* %4
  store i64 0, i64* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = icmp ne i32 %15, 3
  br i1 %16, label %17, label %47
17:
  %18 = load i32, i32* %6
  switch i32 %18, label %46 [
    i32 0, label %19
    i32 1, label %30
    i32 2, label %38
  ]
19:
  %20 = load i64, i64* %4
  %21 = shl i64 %20, 2
  %22 = load i32, i32* %3
  %23 = sext i32 %22 to i64
  %24 = icmp sle i64 %21, %23
  br i1 %24, label %25, label %28
25:
  %26 = load i64, i64* %4
  %27 = shl i64 %26, 1
  store i64 %27, i64* %4
  br label %29
28:
  store i32 1, i32* %6
  br label %29
29:
  br label %46
30:
  %31 = load i64, i64* %4
  %32 = load i32, i32* %3
  %33 = sext i32 %32 to i64
  %34 = load i64, i64* %4
  %35 = sdiv i64 %33, %34
  %36 = add nsw i64 %31, %35
  %37 = ashr i64 %36, 1
  store i64 %37, i64* %5
  store i32 2, i32* %6
  br label %46
38:
  %39 = load i64, i64* %5
  %40 = load i64, i64* %4
  %41 = icmp slt i64 %39, %40
  br i1 %41, label %42, label %44
42:
  %43 = load i64, i64* %5
  store i64 %43, i64* %4
  store i32 1, i32* %6
  br label %45
44:
  store i32 3, i32* %6
  br label %45
45:
  br label %46
46:
  br label %14
47:
  %48 = load i64, i64* %4
  %49 = trunc i64 %48 to i32
  store i32 %49, i32* %2
  br label %53
53:
  %54 = load i32, i32* %2
  ret i32 %54
}
