define dso_local i64 @RpBj(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i64
  store i32 %0, i32* %3
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 0, i64* %2
  br label %66
13:
  store i64 0, i64* %4
  store i64 1, i64* %5
  %17 = load i32, i32* %3
  %18 = call i32 @llvm.ctlz.i32(i32 %17, i1 true)
  %19 = sub nsw i32 31, %18
  %20 = shl i32 1, %19
  store i32 %20, i32* %6
  br label %21
21:
  %22 = load i32, i32* %6
  %23 = icmp sgt i32 %22, 0
  br i1 %23, label %26, label %24
24:
  br label %62
26:
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = shl i64 %29, 1
  %31 = load i64, i64* %4
  %32 = sub nsw i64 %30, %31
  %33 = mul nsw i64 %28, %32
  store i64 %33, i64* %7
  %35 = load i64, i64* %4
  %36 = load i64, i64* %4
  %37 = mul nsw i64 %35, %36
  %38 = load i64, i64* %5
  %39 = load i64, i64* %5
  %40 = mul nsw i64 %38, %39
  %41 = add nsw i64 %37, %40
  store i64 %41, i64* %8
  %42 = load i64, i64* %7
  store i64 %42, i64* %4
  %43 = load i64, i64* %8
  store i64 %43, i64* %5
  %44 = load i32, i32* %3
  %45 = load i32, i32* %6
  %46 = and i32 %44, %45
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %48, label %56
48:
  %50 = load i64, i64* %4
  %51 = load i64, i64* %5
  %52 = add nsw i64 %50, %51
  store i64 %52, i64* %9
  %53 = load i64, i64* %5
  store i64 %53, i64* %4
  %54 = load i64, i64* %9
  store i64 %54, i64* %5
  br label %56
56:
  br label %59
59:
  %60 = load i32, i32* %6
  %61 = ashr i32 %60, 1
  store i32 %61, i32* %6
  br label %21
62:
  %63 = load i64, i64* %4
  store i64 %63, i64* %2
  br label %66
66:
  %67 = load i64, i64* %2
  ret i64 %67
}
declare i32 @llvm.ctlz.i32(i32, i1 immarg)
