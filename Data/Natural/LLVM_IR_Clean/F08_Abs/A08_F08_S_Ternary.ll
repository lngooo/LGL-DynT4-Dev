define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %5, label %8
5:
  %6 = load i32, i32* %2
  %7 = sub nsw i32 0, %6
  br label %10
8:
  %9 = load i32, i32* %2
  br label %10
10:
  %11 = phi i32 [ %7, %5 ], [ %9, %8 ]
  ret i32 %11
}
