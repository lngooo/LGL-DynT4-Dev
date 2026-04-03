@pczk.heAL4 = internal constant [21 x i64] [i64 1, i64 1, i64 2, i64 6, i64 24, i64 120, i64 720, i64 5040, i64 40320, i64 362880, i64 3628800, i64 39916800, i64 479001600, i64 6227020800, i64 87178291200, i64 1307674368000, i64 20922789888000, i64 355687428096000, i64 6402373705728000, i64 121645100408832000, i64 2432902008176640000]
define dso_local i64 @pczk(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i64 0, i64* %2
  br label %16
7:
  %8 = load i32, i32* %3
  %9 = icmp sgt i32 %8, 20
  br i1 %9, label %10, label %11
10:
  store i64 0, i64* %2
  br label %16
11:
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds [21 x i64], [21 x i64]* @pczk.heAL4, i64 0, i64 %13
  %15 = load i64, i64* %14
  store i64 %15, i64* %2
  br label %16
16:
  %17 = load i64, i64* %2
  ret i64 %17
}
