define dso_local i64 @mm(i64 %0, i64 %1, i64 %2) {
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  store i64 %0, i64* %4
  store i64 %1, i64* %5
  store i64 %2, i64* %6
  %7 = load i64, i64* %4
  %8 = load i64, i64* %5
  %9 = mul nsw i64 %7, %8
  %10 = load i64, i64* %6
  %11 = srem i64 %9, %10
  ret i64 %11
}
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64 (i64, i64, i64)*
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 4
  br i1 %11, label %12, label %16
12:
  %13 = load i32, i32* %3
  %14 = icmp sgt i32 %13, 1
  %15 = zext i1 %14 to i32
  store i32 %15, i32* %2
  br label %94
16:
  store i64 (i64, i64, i64)* @mm, i64 (i64, i64, i64)** %4
  %19 = load i32, i32* %3
  %20 = sub nsw i32 %19, 1
  store i32 %20, i32* %5
  br label %21
21:
  %22 = load i32, i32* %5
  %23 = and i32 %22, 1
  %24 = icmp ne i32 %23, 0
  %25 = xor i1 %24, true
  br i1 %25, label %26, label %29
26:
  %27 = load i32, i32* %5
  %28 = ashr i32 %27, 1
  store i32 %28, i32* %5
  br label %21
29:
  store i64 1, i64* %6
  store i64 2, i64* %7
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = icmp sgt i32 %33, 0
  br i1 %34, label %35, label %56
35:
  %36 = load i32, i32* %5
  %37 = and i32 %36, 1
  %38 = icmp ne i32 %37, 0
  br i1 %38, label %39, label %46
39:
  %40 = load i64 (i64, i64, i64)*, i64 (i64, i64, i64)** %4
  %41 = load i64, i64* %6
  %42 = load i64, i64* %7
  %43 = load i32, i32* %3
  %44 = sext i32 %43 to i64
  %45 = call i64 %40(i64 %41, i64 %42, i64 %44)
  store i64 %45, i64* %6
  br label %46
46:
  %47 = load i64 (i64, i64, i64)*, i64 (i64, i64, i64)** %4
  %48 = load i64, i64* %7
  %49 = load i64, i64* %7
  %50 = load i32, i32* %3
  %51 = sext i32 %50 to i64
  %52 = call i64 %47(i64 %48, i64 %49, i64 %51)
  store i64 %52, i64* %7
  br label %53
53:
  %54 = load i32, i32* %5
  %55 = ashr i32 %54, 1
  store i32 %55, i32* %5
  br label %32
56:
  %57 = load i64, i64* %6
  %58 = icmp eq i64 %57, 1
  br i1 %58, label %65, label %59
59:
  %60 = load i64, i64* %6
  %61 = load i32, i32* %3
  %62 = sub nsw i32 %61, 1
  %63 = sext i32 %62 to i64
  %64 = icmp eq i64 %60, %63
  br i1 %64, label %65, label %66
65:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %89
66:
  store i32 2, i32* %9
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = load i32, i32* %9
  %71 = mul nsw i32 %69, %70
  %72 = load i32, i32* %3
  %73 = icmp sle i32 %71, %72
  br i1 %73, label %75, label %74
74:
  store i32 7, i32* %8
  br label %85
75:
  %76 = load i32, i32* %3
  %77 = load i32, i32* %9
  %78 = srem i32 %76, %77
  %79 = icmp eq i32 %78, 0
  br i1 %79, label %80, label %81
80:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %85
81:
  br label %82
82:
  %83 = load i32, i32* %9
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %9
  br label %68
85:
  %87 = load i32, i32* %8
  switch i32 %87, label %89 [
    i32 7, label %88
  ]
88:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %89
89:
  br label %94
94:
  %95 = load i32, i32* %2
  ret i32 %95
}
