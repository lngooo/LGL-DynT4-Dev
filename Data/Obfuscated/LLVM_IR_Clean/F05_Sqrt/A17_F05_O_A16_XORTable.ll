@__const.jM.a = constant [4 x i32] [i32 15, i32 14, i32 14, i32 14]
define dso_local i32 @jM(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca [4 x i32]
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %36
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 4
  br i1 %11, label %12, label %21
12:
  %15 = load i32, i32* %3
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds [4 x i32], [4 x i32]* %4, i64 0, i64 %16
  %18 = load i32, i32* %17
  %19 = xor i32 %18, 15
  store i32 %19, i32* %2
  br label %36
21:
  store i32 2, i32* %5
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = load i32, i32* %5
  %26 = mul nsw i32 %24, %25
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  br i1 %28, label %29, label %32
29:
  %30 = load i32, i32* %5
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %5
  br label %23
32:
  %33 = load i32, i32* %5
  %34 = sub nsw i32 %33, 1
  store i32 %34, i32* %2
  br label %36
36:
  %37 = load i32, i32* %2
  ret i32 %37
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
