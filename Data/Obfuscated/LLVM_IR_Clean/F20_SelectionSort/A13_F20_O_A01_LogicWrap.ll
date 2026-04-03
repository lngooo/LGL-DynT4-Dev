define dso_local void @SHi(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %15, label %75
15:
  %17 = load i32, i32* %5
  store i32 %17, i32* %6
  %19 = load i32, i32* %5
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %4
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  br label %50
27:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %6
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp slt i32 %33, %38
  %40 = zext i1 %39 to i32
  store i32 %40, i32* %8
  %41 = load i32, i32* %8
  switch i32 %41, label %44 [
    i32 1, label %42
  ]
42:
  %43 = load i32, i32* %7
  store i32 %43, i32* %6
  br label %45
44:
  br label %45
45:
  br label %47
47:
  %48 = load i32, i32* %7
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %7
  br label %21
50:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %9
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32*, i32** %3
  %63 = load i32, i32* %5
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  store i32 %61, i32* %65
  %66 = load i32, i32* %9
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %6
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %5
  br label %11
75:
  ret void
}
