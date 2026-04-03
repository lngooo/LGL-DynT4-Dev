define dso_local void @reverse_rec(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %8 = load i32, i32* %5
  %9 = load i32, i32* %6
  %10 = icmp sge i32 %8, %9
  br i1 %10, label %11, label %12
11:
  br label %39
12:
  %14 = load i32*, i32** %4
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i32, i32* %14, i64 %16
  %18 = load i32, i32* %17
  store i32 %18, i32* %7
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32*, i32** %4
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  store i32 %23, i32* %27
  %28 = load i32, i32* %7
  %29 = load i32*, i32** %4
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  store i32 %28, i32* %32
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %5
  %35 = add nsw i32 %34, 1
  %36 = load i32, i32* %6
  %37 = sub nsw i32 %36, 1
  call void @reverse_rec(i32* %33, i32 %35, i32 %37)
  br label %39
39:
  ret void
}
define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp sgt i32 %5, 1
  br i1 %6, label %7, label %11
7:
  %8 = load i32*, i32** %3
  %9 = load i32, i32* %4
  %10 = sub nsw i32 %9, 1
  call void @reverse_rec(i32* %8, i32 0, i32 %10)
  br label %11
11:
  ret void
}
