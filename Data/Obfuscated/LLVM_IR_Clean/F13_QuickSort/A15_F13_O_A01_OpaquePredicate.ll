define dso_local void @L(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %15, label %109
15:
  %16 = load i32, i32* %6
  %17 = load i32, i32* %6
  %18 = mul nsw i32 %16, %17
  %19 = add nsw i32 %18, 1
  %20 = icmp sgt i32 %19, 0
  br i1 %20, label %21, label %108
21:
  %23 = load i32*, i32** %4
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %7
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %29, 1
  store i32 %30, i32* %8
  %32 = load i32, i32* %5
  store i32 %32, i32* %9
  br label %33
33:
  %34 = load i32, i32* %9
  %35 = load i32, i32* %6
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %39, label %37
37:
  br label %75
39:
  %40 = load i32*, i32** %4
  %41 = load i32, i32* %9
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32, i32* %7
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %47, label %71
47:
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %8
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  store i32 %55, i32* %10
  %56 = load i32*, i32** %4
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  %65 = load i32, i32* %10
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  store i32 %65, i32* %69
  br label %71
71:
  br label %72
72:
  %73 = load i32, i32* %9
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %9
  br label %33
75:
  %77 = load i32*, i32** %4
  %78 = load i32, i32* %8
  %79 = add nsw i32 %78, 1
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %77, i64 %80
  %82 = load i32, i32* %81
  store i32 %82, i32* %11
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %6
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %83, i64 %85
  %87 = load i32, i32* %86
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %8
  %90 = add nsw i32 %89, 1
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %88, i64 %91
  store i32 %87, i32* %92
  %93 = load i32, i32* %11
  %94 = load i32*, i32** %4
  %95 = load i32, i32* %6
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, i32* %94, i64 %96
  store i32 %93, i32* %97
  %98 = load i32*, i32** %4
  %99 = load i32, i32* %5
  %100 = load i32, i32* %8
  call void @L(i32* %98, i32 %99, i32 %100)
  %101 = load i32*, i32** %4
  %102 = load i32, i32* %8
  %103 = add nsw i32 %102, 2
  %104 = load i32, i32* %6
  call void @L(i32* %101, i32 %103, i32 %104)
  br label %108
108:
  br label %109
109:
  ret void
}
