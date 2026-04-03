@__const.Fibonacci.t = constant [10 x i64] [i64 0, i64 1, i64 1, i64 2, i64 3, i64 5, i64 8, i64 13, i64 21, i64 34]
define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [10 x i64]
  %5 = alloca i32
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = icmp sle i32 %8, 9
  br i1 %9, label %10, label %15
10:
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds [10 x i64], [10 x i64]* %4, i64 0, i64 %12
  %14 = load i64, i64* %13
  store i64 %14, i64* %2
  store i32 1, i32* %5
  br label %23
15:
  %16 = load i32, i32* %3
  %17 = sub nsw i32 %16, 1
  %18 = call i64 @Fibonacci(i32 %17)
  %19 = load i32, i32* %3
  %20 = sub nsw i32 %19, 2
  %21 = call i64 @Fibonacci(i32 %20)
  %22 = add nsw i64 %18, %21
  store i64 %22, i64* %2
  store i32 1, i32* %5
  br label %23
23:
  %25 = load i64, i64* %2
  ret i64 %25
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
