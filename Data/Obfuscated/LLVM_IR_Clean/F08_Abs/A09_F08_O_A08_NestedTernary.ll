define dso_local i32 @gn(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp eq i32 %3, 0
  br i1 %4, label %5, label %6
5:
  br label %17
6:
  %7 = load i32, i32* %2
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %12
9:
  %10 = load i32, i32* %2
  %11 = sub nsw i32 0, %10
  br label %15
12:
  %13 = load i32, i32* %2
  %14 = add nsw i32 %13, 0
  br label %15
15:
  %16 = phi i32 [ %11, %9 ], [ %14, %12 ]
  br label %17
17:
  %18 = phi i32 [ 0, %5 ], [ %16, %15 ]
  ret i32 %18
}
