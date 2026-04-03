@Yaeh.FBLF = internal global [101 x i64] zeroinitializer
define dso_local i64 @Yaeh(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %9
6:
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  store i64 %8, i64* %2
  br label %31
9:
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %11
  %13 = load i64, i64* %12
  %14 = icmp ne i64 %13, 0
  br i1 %14, label %15, label %20
15:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %17
  %19 = load i64, i64* %18
  store i64 %19, i64* %2
  br label %31
20:
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 1
  %23 = call i64 @Yaeh(i32 %22)
  %24 = load i32, i32* %3
  %25 = sub nsw i32 %24, 2
  %26 = call i64 @Yaeh(i32 %25)
  %27 = add nsw i64 %23, %26
  %28 = load i32, i32* %3
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds [101 x i64], [101 x i64]* @Yaeh.FBLF, i64 0, i64 %29
  store i64 %27, i64* %30
  store i64 %27, i64* %2
  br label %31
31:
  %32 = load i64, i64* %2
  ret i64 %32
}
