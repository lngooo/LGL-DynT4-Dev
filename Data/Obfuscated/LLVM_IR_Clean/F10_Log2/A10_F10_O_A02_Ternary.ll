define dso_local i32 @hB(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp sle i32 %3, 1
  br i1 %4, label %5, label %6
5:
  br label %11
6:
  %7 = load i32, i32* %2
  %8 = ashr i32 %7, 1
  %9 = call i32 @hB(i32 %8)
  %10 = add nsw i32 1, %9
  br label %11
11:
  %12 = phi i32 [ 0, %5 ], [ %10, %6 ]
  ret i32 %12
}
