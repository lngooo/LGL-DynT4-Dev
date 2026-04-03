define dso_local i32 @ArraySum(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp sle i32 %5, 0
  br i1 %6, label %7, label %8
7:
  br label %18
8:
  %9 = load i32*, i32** %3
  %10 = getelementptr inbounds i32, i32* %9, i64 0
  %11 = load i32, i32* %10
  %12 = load i32*, i32** %3
  %13 = getelementptr inbounds i32, i32* %12, i64 1
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = call i32 @ArraySum(i32* %13, i32 %15)
  %17 = add nsw i32 %11, %16
  br label %18
18:
  %19 = phi i32 [ 0, %7 ], [ %17, %8 ]
  ret i32 %19
}
