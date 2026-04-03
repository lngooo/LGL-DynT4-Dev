define dso_local i32 @rec_sqrt(i64 %0, i64 %1, i64 %2) {
  %4 = alloca i32
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i32
  store i64 %0, i64* %5
  store i64 %1, i64* %6
  store i64 %2, i64* %7
  %10 = load i64, i64* %6
  %11 = load i64, i64* %7
  %12 = icmp sgt i64 %10, %11
  br i1 %12, label %13, label %16
13:
  %14 = load i64, i64* %7
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %4
  br label %52
16:
  %18 = load i64, i64* %6
  %19 = load i64, i64* %7
  %20 = load i64, i64* %6
  %21 = sub nsw i64 %19, %20
  %22 = sdiv i64 %21, 2
  %23 = add nsw i64 %18, %22
  store i64 %23, i64* %8
  %24 = load i64, i64* %8
  %25 = load i64, i64* %8
  %26 = mul nsw i64 %24, %25
  %27 = load i64, i64* %5
  %28 = icmp eq i64 %26, %27
  br i1 %28, label %29, label %32
29:
  %30 = load i64, i64* %8
  %31 = trunc i64 %30 to i32
  store i32 %31, i32* %4
  store i32 1, i32* %9
  br label %50
32:
  %33 = load i64, i64* %8
  %34 = load i64, i64* %8
  %35 = mul nsw i64 %33, %34
  %36 = load i64, i64* %5
  %37 = icmp slt i64 %35, %36
  br i1 %37, label %38, label %44
38:
  %39 = load i64, i64* %5
  %40 = load i64, i64* %8
  %41 = add nsw i64 %40, 1
  %42 = load i64, i64* %7
  %43 = call i32 @rec_sqrt(i64 %39, i64 %41, i64 %42)
  store i32 %43, i32* %4
  store i32 1, i32* %9
  br label %50
44:
  %45 = load i64, i64* %5
  %46 = load i64, i64* %6
  %47 = load i64, i64* %8
  %48 = sub nsw i64 %47, 1
  %49 = call i32 @rec_sqrt(i64 %45, i64 %46, i64 %48)
  store i32 %49, i32* %4
  store i32 1, i32* %9
  br label %50
50:
  br label %52
52:
  %53 = load i32, i32* %4
  ret i32 %53
}
define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 -1, i32* %2
  br label %13
7:
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = call i32 @rec_sqrt(i64 %9, i64 0, i64 %11)
  store i32 %12, i32* %2
  br label %13
13:
  %14 = load i32, i32* %2
  ret i32 %14
}
