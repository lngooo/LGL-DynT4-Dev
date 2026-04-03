define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %8
8:
  %9 = load i32, i32* %5
  %10 = load i32, i32* %4
  %11 = sdiv i32 %10, 2
  %12 = icmp sge i32 %9, %11
  br i1 %12, label %13, label %14
13:
  br label %42
14:
  %15 = load i32*, i32** %3
  %16 = load i32, i32* %5
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = load i32, i32* %18
  store i32 %19, i32* %6
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 1
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %22, %23
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %20, i64 %25
  %27 = load i32, i32* %26
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %5
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32 %27, i32* %31
  %32 = load i32, i32* %6
  %33 = load i32*, i32** %3
  %34 = load i32, i32* %4
  %35 = sub nsw i32 %34, 1
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %33, i64 %38
  store i32 %32, i32* %39
  %40 = load i32, i32* %5
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %5
  br label %8
42:
  ret void
}
