define dso_local i32 @LE(i32 %0) {
  %2 = alloca i32
  %3 = alloca [2 x i32]
  %4 = alloca i32
  store i32 %0, i32* %2
  %6 = getelementptr inbounds [2 x i32], [2 x i32]* %3, i64 0, i64 0
  %7 = load i32, i32* %2
  store i32 %7, i32* %6
  %8 = getelementptr inbounds i32, i32* %6, i64 1
  %9 = load i32, i32* %2
  %10 = sub nsw i32 0, %9
  store i32 %10, i32* %8
  %12 = load i32, i32* %2
  %13 = icmp slt i32 %12, 0
  %14 = zext i1 %13 to i32
  store i32 %14, i32* %4
  %15 = load i32, i32* %4
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds [2 x i32], [2 x i32]* %3, i64 0, i64 %16
  %18 = load i32, i32* %17
  ret i32 %18
}
