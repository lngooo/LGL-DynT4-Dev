define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i64
  %10 = alloca i64
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %12 = load i32, i32* %4
  %13 = call i32 @abs(i32 %12)
  %14 = sext i32 %13 to i64
  store i64 %14, i64* %6
  %16 = load i32, i32* %5
  %17 = call i32 @abs(i32 %16)
  %18 = sext i32 %17 to i64
  store i64 %18, i64* %7
  %19 = load i64, i64* %6
  %20 = icmp ne i64 %19, 0
  br i1 %20, label %21, label %24
21:
  %22 = load i64, i64* %7
  %23 = icmp ne i64 %22, 0
  br i1 %23, label %29, label %24
24:
  %25 = load i64, i64* %6
  %26 = load i64, i64* %7
  %27 = or i64 %25, %26
  %28 = trunc i64 %27 to i32
  store i32 %28, i32* %3
  store i32 1, i32* %8
  br label %64
29:
  %31 = load i64, i64* %6
  %32 = load i64, i64* %7
  %33 = icmp sgt i64 %31, %32
  br i1 %33, label %34, label %36
34:
  %35 = load i64, i64* %6
  br label %38
36:
  %37 = load i64, i64* %7
  br label %38
38:
  %39 = phi i64 [ %35, %34 ], [ %37, %36 ]
  store i64 %39, i64* %9
  %41 = load i64, i64* %9
  store i64 %41, i64* %10
  br label %42
42:
  %43 = load i64, i64* %10
  %44 = load i64, i64* %6
  %45 = srem i64 %43, %44
  %46 = load i64, i64* %10
  %47 = load i64, i64* %7
  %48 = srem i64 %46, %47
  %49 = or i64 %45, %48
  %50 = icmp ne i64 %49, 0
  br i1 %50, label %51, label %55
51:
  %52 = load i64, i64* %9
  %53 = load i64, i64* %10
  %54 = add nsw i64 %53, %52
  store i64 %54, i64* %10
  br label %42
55:
  %56 = load i64, i64* %6
  %57 = load i64, i64* %7
  %58 = mul nsw i64 %56, %57
  %59 = load i64, i64* %10
  %60 = sdiv i64 %58, %59
  %61 = trunc i64 %60 to i32
  store i32 %61, i32* %3
  store i32 1, i32* %8
  br label %64
64:
  %67 = load i32, i32* %3
  ret i32 %67
}
declare i32 @abs(i32)
