define dso_local i64 @f(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp slt i32 %3, 2
  br i1 %4, label %5, label %8
5:
  %6 = load i32, i32* %2
  %7 = sext i32 %6 to i64
  br label %16
8:
  %9 = load i32, i32* %2
  %10 = sub nsw i32 %9, 1
  %11 = call i64 @f(i32 %10)
  %12 = load i32, i32* %2
  %13 = sub nsw i32 %12, 2
  %14 = call i64 @f(i32 %13)
  %15 = add nsw i64 %11, %14
  br label %16
16:
  %17 = phi i64 [ %7, %5 ], [ %15, %8 ]
  ret i64 %17
}
