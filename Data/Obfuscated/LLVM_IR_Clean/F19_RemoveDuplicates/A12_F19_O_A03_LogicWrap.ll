define dso_local i32 @L(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [128 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  br label %60
21:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %8
  store i32 -1, i32* %9
  store i32 0, i32* %10
  br label %30
30:
  %31 = load i32, i32* %9
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %9
  %33 = load i32, i32* %6
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %35, label %44
35:
  %36 = load i32, i32* %9
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %37
  %39 = load i32, i32* %38
  %40 = load i32, i32* %8
  %41 = icmp eq i32 %39, %40
  br i1 %41, label %42, label %43
42:
  store i32 1, i32* %10
  br label %43
43:
  br label %30
44:
  %45 = load i32, i32* %10
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %53, label %47
47:
  %48 = load i32, i32* %8
  %49 = load i32, i32* %6
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %6
  %51 = sext i32 %49 to i64
  %52 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %51
  store i32 %48, i32* %52
  br label %53
53:
  br label %57
57:
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %7
  br label %15
60:
  store i32 0, i32* %11
  br label %62
62:
  %63 = load i32, i32* %11
  %64 = load i32, i32* %6
  %65 = icmp slt i32 %63, %64
  br i1 %65, label %68, label %66
66:
  br label %80
68:
  %69 = load i32, i32* %11
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %70
  %72 = load i32, i32* %71
  %73 = load i32*, i32** %3
  %74 = load i32, i32* %11
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  store i32 %72, i32* %76
  br label %77
77:
  %78 = load i32, i32* %11
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %11
  br label %62
80:
  %81 = load i32, i32* %6
  ret i32 %81
}
