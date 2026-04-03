define dso_local void @HVh(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 2
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %59
17:
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = icmp slt i32 %20, 1
  br i1 %21, label %24, label %22
22:
  store i32 5, i32* %6
  br label %55
24:
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %5
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  store i32 %30, i32* %8
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %4
  %33 = sub nsw i32 %32, 1
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %33, %34
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %31, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %5
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  store i32 %38, i32* %42
  %43 = load i32, i32* %8
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %4
  %46 = sub nsw i32 %45, 1
  %47 = load i32, i32* %5
  %48 = sub nsw i32 %46, %47
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %44, i64 %49
  store i32 %43, i32* %50
  br label %52
52:
  %53 = load i32, i32* %7
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %7
  br label %19
55:
  br label %56
56:
  %57 = load i32, i32* %5
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %5
  br label %10
59:
  ret void
}
