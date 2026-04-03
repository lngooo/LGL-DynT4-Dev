define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca [2 x i32]
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  %6 = getelementptr inbounds [2 x i32], [2 x i32]* %3, i64 0, i64 0
  store i32 %5, i32* %6
  %7 = load i32, i32* %2
  %8 = sub nsw i32 0, %7
  %9 = getelementptr inbounds [2 x i32], [2 x i32]* %3, i64 0, i64 1
  store i32 %8, i32* %9
  %10 = getelementptr inbounds [2 x i32], [2 x i32]* %3, i64 0, i64 0
  %11 = load i32, i32* %2
  %12 = icmp slt i32 %11, 0
  %13 = zext i1 %12 to i32
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i32, i32* %10, i64 %14
  %16 = load i32, i32* %15
  ret i32 %16
}
