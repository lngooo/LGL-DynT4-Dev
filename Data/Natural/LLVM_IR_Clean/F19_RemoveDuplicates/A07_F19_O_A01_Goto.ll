define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %52
16:
  store i32 0, i32* %7
  br label %17
17:
  %18 = load i32, i32* %7
  %19 = load i32, i32* %6
  %20 = icmp sge i32 %18, %19
  br i1 %20, label %21, label %22
21:
  br label %38
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = load i32*, i32** %3
  %29 = load i32, i32* %7
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = icmp eq i32 %27, %32
  br i1 %33, label %34, label %35
34:
  br label %49
35:
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %7
  br label %17
38:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %5
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %6
  %47 = sext i32 %45 to i64
  %48 = getelementptr inbounds i32, i32* %44, i64 %47
  store i32 %43, i32* %48
  br label %49
49:
  %50 = load i32, i32* %5
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %5
  br label %11
52:
  %53 = load i32, i32* %6
  ret i32 %53
}
