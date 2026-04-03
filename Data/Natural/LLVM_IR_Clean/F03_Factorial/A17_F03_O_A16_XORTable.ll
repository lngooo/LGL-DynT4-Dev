@__const.Factorial.encoded = constant [3 x i64] [i64 171, i64 171, i64 168]
define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [3 x i64]
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %10, label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp sgt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i64 0, i64* %2
  br label %20
11:
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds [3 x i64], [3 x i64]* %4, i64 0, i64 %15
  %17 = load i64, i64* %16
  %18 = xor i64 %17, 170
  store i64 %18, i64* %2
  br label %20
20:
  %21 = load i64, i64* %2
  ret i64 %21
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
