@Pbs4.BVR7 = internal constant [11 x i32] [i32 0, i32 1, i32 3, i32 6, i32 10, i32 15, i32 21, i32 28, i32 36, i32 45, i32 55]
define dso_local i32 @Pbs4(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sge i32 %4, 0
  br i1 %5, label %6, label %14
6:
  %7 = load i32, i32* %3
  %8 = icmp sle i32 %7, 10
  br i1 %8, label %9, label %14
9:
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds [11 x i32], [11 x i32]* @Pbs4.BVR7, i64 0, i64 %11
  %13 = load i32, i32* %12
  store i32 %13, i32* %2
  br label %20
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 1
  %18 = mul nsw i32 %15, %17
  %19 = sdiv i32 %18, 2
  store i32 %19, i32* %2
  br label %20
20:
  %21 = load i32, i32* %2
  ret i32 %21
}
