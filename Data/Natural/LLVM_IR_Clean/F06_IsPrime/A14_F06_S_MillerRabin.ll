@__const.IsPrime.bases = constant [2 x i32] [i32 2, i32 3]
define dso_local i64 @modmul(i64 %0, i64 %1, i64 %2) {
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
define dso_local i64 @modpow(i64 %0, i64 %1, i64 %2) {
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  store i64 %0, i64* %4
  store i64 %1, i64* %5
  store i64 %2, i64* %6
  store i64 1, i64* %7
  %9 = load i64, i64* %6
  %10 = load i64, i64* %4
  %11 = srem i64 %10, %9
  store i64 %11, i64* %4
  br label %12
12:
  %13 = load i64, i64* %5
  %14 = icmp sgt i64 %13, 0
  br i1 %14, label %15, label %31
15:
  %16 = load i64, i64* %5
  %17 = srem i64 %16, 2
  %18 = icmp eq i64 %17, 1
  br i1 %18, label %19, label %24
19:
  %20 = load i64, i64* %7
  %21 = load i64, i64* %4
  %22 = load i64, i64* %6
  %23 = call i64 @modmul(i64 %20, i64 %21, i64 %22)
  store i64 %23, i64* %7
  br label %24
24:
  %25 = load i64, i64* %4
  %26 = load i64, i64* %4
  %27 = load i64, i64* %6
  %28 = call i64 @modmul(i64 %25, i64 %26, i64 %27)
  store i64 %28, i64* %4
  %29 = load i64, i64* %5
  %30 = sdiv i64 %29, 2
  store i64 %30, i64* %5
  br label %12
31:
  %32 = load i64, i64* %7
  ret i64 %32
}
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca [2 x i32]
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i64
  %10 = alloca i32
  %11 = alloca i32
  store i32 %0, i32* %3
  %12 = load i32, i32* %3
  %13 = icmp slt i32 %12, 2
  br i1 %13, label %14, label %15
14:
  store i32 0, i32* %2
  br label %118
15:
  %16 = load i32, i32* %3
  %17 = icmp eq i32 %16, 2
  br i1 %17, label %21, label %18
18:
  %19 = load i32, i32* %3
  %20 = icmp eq i32 %19, 3
  br i1 %20, label %21, label %22
21:
  store i32 1, i32* %2
  br label %118
22:
  %23 = load i32, i32* %3
  %24 = srem i32 %23, 2
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %26, label %27
26:
  store i32 0, i32* %2
  br label %118
27:
  %29 = load i32, i32* %3
  %30 = sub nsw i32 %29, 1
  store i32 %30, i32* %4
  store i32 0, i32* %5
  br label %32
32:
  %33 = load i32, i32* %4
  %34 = srem i32 %33, 2
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %36, label %41
36:
  %37 = load i32, i32* %4
  %38 = sdiv i32 %37, 2
  store i32 %38, i32* %4
  %39 = load i32, i32* %5
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %5
  br label %32
41:
  store i32 0, i32* %7
  br label %45
45:
  %46 = load i32, i32* %7
  %47 = icmp slt i32 %46, 2
  br i1 %47, label %49, label %48
48:
  store i32 4, i32* %8
  br label %110
49:
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [2 x i32], [2 x i32]* %6, i64 0, i64 %52
  %54 = load i32, i32* %53
  %55 = sext i32 %54 to i64
  %56 = load i32, i32* %4
  %57 = sext i32 %56 to i64
  %58 = load i32, i32* %3
  %59 = sext i32 %58 to i64
  %60 = call i64 @modpow(i64 %55, i64 %57, i64 %59)
  store i64 %60, i64* %9
  %61 = load i64, i64* %9
  %62 = icmp eq i64 %61, 1
  br i1 %62, label %69, label %63
63:
  %64 = load i64, i64* %9
  %65 = load i32, i32* %3
  %66 = sub nsw i32 %65, 1
  %67 = sext i32 %66 to i64
  %68 = icmp eq i64 %64, %67
  br i1 %68, label %69, label %70
69:
  store i32 6, i32* %8
  br label %103
70:
  store i32 1, i32* %10
  store i32 1, i32* %11
  br label %73
73:
  %74 = load i32, i32* %11
  %75 = load i32, i32* %5
  %76 = icmp slt i32 %74, %75
  br i1 %76, label %78, label %77
77:
  store i32 7, i32* %8
  br label %94
78:
  %79 = load i64, i64* %9
  %80 = load i64, i64* %9
  %81 = load i32, i32* %3
  %82 = sext i32 %81 to i64
  %83 = call i64 @modmul(i64 %79, i64 %80, i64 %82)
  store i64 %83, i64* %9
  %84 = load i64, i64* %9
  %85 = load i32, i32* %3
  %86 = sub nsw i32 %85, 1
  %87 = sext i32 %86 to i64
  %88 = icmp eq i64 %84, %87
  br i1 %88, label %89, label %90
89:
  store i32 0, i32* %10
  store i32 7, i32* %8
  br label %94
90:
  br label %91
91:
  %92 = load i32, i32* %11
  %93 = add nsw i32 %92, 1
  store i32 %93, i32* %11
  br label %73
94:
  br label %96
96:
  %97 = load i32, i32* %10
  %98 = icmp ne i32 %97, 0
  br i1 %98, label %99, label %100
99:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %101
100:
  store i32 0, i32* %8
  br label %101
101:
  br label %103
103:
  %105 = load i32, i32* %8
  switch i32 %105, label %110 [
    i32 0, label %106
    i32 6, label %107
  ]
106:
  br label %107
107:
  %108 = load i32, i32* %7
  %109 = add nsw i32 %108, 1
  store i32 %109, i32* %7
  br label %45
110:
  %112 = load i32, i32* %8
  switch i32 %112, label %114 [
    i32 4, label %113
  ]
113:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %114
114:
  br label %118
118:
  %119 = load i32, i32* %2
  ret i32 %119
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
