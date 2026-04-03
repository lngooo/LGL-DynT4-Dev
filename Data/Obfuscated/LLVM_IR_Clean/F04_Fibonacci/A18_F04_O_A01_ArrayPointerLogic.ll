@__const.Y.mwHk = constant [2 x i64] [i64 0, i64 1]
define dso_local i64 @Y(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [2 x i64]
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp eq i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i64 0, i64* %2
  store i32 1, i32* %5
  br label %39
12:
  store i32 2, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %3
  %17 = icmp sle i32 %15, %16
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %5
  br label %33
20:
  %21 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 0
  %22 = load i64, i64* %21
  %23 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 1
  %24 = load i64, i64* %23
  %25 = add nsw i64 %22, %24
  %26 = load i32, i32* %6
  %27 = srem i32 %26, 2
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 %28
  store i64 %25, i64* %29
  br label %30
30:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %6
  br label %14
33:
  %34 = load i32, i32* %3
  %35 = srem i32 %34, 2
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [2 x i64], [2 x i64]* %4, i64 0, i64 %36
  %38 = load i64, i64* %37
  store i64 %38, i64* %2
  store i32 1, i32* %5
  br label %39
39:
  %41 = load i64, i64* %2
  ret i64 %41
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
