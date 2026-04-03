define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp sle i32 %3, 0
  br i1 %4, label %5, label %6
5:
  br label %12
6:
  %7 = load i32, i32* %2
  %8 = load i32, i32* %2
  %9 = sub nsw i32 %8, 1
  %10 = call i32 @Sum(i32 %9)
  %11 = add nsw i32 %7, %10
  br label %12
12:
  %13 = phi i32 [ 0, %5 ], [ %11, %6 ]
  ret i32 %13
}
