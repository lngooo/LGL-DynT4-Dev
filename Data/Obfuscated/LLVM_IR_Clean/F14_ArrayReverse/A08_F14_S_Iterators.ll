define dso_local void @L(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  br label %49
10:
  store i32 0, i32* %5
  br label %12
12:
  %14 = load i32*, i32** %3
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i32, i32* %14, i64 %16
  %18 = load i32, i32* %17
  store i32 %18, i32* %6
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 1
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %19, i64 %24
  %26 = load i32, i32* %25
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  store i32 %26, i32* %30
  %31 = load i32, i32* %6
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %4
  %34 = sub nsw i32 %33, 1
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %34, %35
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %32, i64 %37
  store i32 %31, i32* %38
  %39 = load i32, i32* %5
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %5
  br label %42
42:
  %43 = load i32, i32* %5
  %44 = load i32, i32* %4
  %45 = sdiv i32 %44, 2
  %46 = icmp slt i32 %43, %45
  br i1 %46, label %12, label %47
47:
  br label %49
49:
  ret void
}
