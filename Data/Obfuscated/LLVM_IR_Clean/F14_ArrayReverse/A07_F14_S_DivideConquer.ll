define dso_local void @Gqpr(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %4
  %8 = icmp sle i32 %7, 1
  br i1 %8, label %9, label %10
9:
  br label %50
10:
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = sdiv i32 %14, 2
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %19, label %17
17:
  br label %50
19:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  store i32 %25, i32* %6
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %4
  %28 = sub nsw i32 %27, 1
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %28, %29
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %26, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  store i32 %33, i32* %37
  %38 = load i32, i32* %6
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %4
  %41 = sub nsw i32 %40, 1
  %42 = load i32, i32* %5
  %43 = sub nsw i32 %41, %42
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %39, i64 %44
  store i32 %38, i32* %45
  br label %47
47:
  %48 = load i32, i32* %5
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %5
  br label %12
50:
  ret void
}
define dso_local void @j8(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32*, i32** %3
  %6 = load i32, i32* %4
  call void @Gqpr(i32* %5, i32 %6)
  ret void
}
