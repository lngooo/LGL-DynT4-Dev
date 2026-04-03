define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %17 = load i32, i32* %5
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %20
19:
  br label %138
20:
  %22 = load i32, i32* %6
  %23 = load i32, i32* %5
  %24 = srem i32 %22, %23
  store i32 %24, i32* %7
  store i32 0, i32* %8
  %27 = load i32, i32* %7
  %28 = sub nsw i32 %27, 1
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %8
  %31 = load i32, i32* %9
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %59
33:
  %35 = load i32*, i32** %4
  %36 = load i32, i32* %8
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  store i32 %39, i32* %10
  %40 = load i32*, i32** %4
  %41 = load i32, i32* %9
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32*, i32** %4
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  store i32 %44, i32* %48
  %49 = load i32, i32* %10
  %50 = load i32*, i32** %4
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  store i32 %49, i32* %53
  %55 = load i32, i32* %8
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %8
  %57 = load i32, i32* %9
  %58 = add nsw i32 %57, -1
  store i32 %58, i32* %9
  br label %29
59:
  %63 = load i32, i32* %7
  store i32 %63, i32* %11
  %65 = load i32, i32* %5
  %66 = sub nsw i32 %65, 1
  store i32 %66, i32* %12
  br label %67
67:
  %68 = load i32, i32* %11
  %69 = load i32, i32* %12
  %70 = icmp slt i32 %68, %69
  br i1 %70, label %71, label %97
71:
  %73 = load i32*, i32** %4
  %74 = load i32, i32* %11
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %73, i64 %75
  %77 = load i32, i32* %76
  store i32 %77, i32* %13
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %12
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %4
  %84 = load i32, i32* %11
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, i32* %83, i64 %85
  store i32 %82, i32* %86
  %87 = load i32, i32* %13
  %88 = load i32*, i32** %4
  %89 = load i32, i32* %12
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i32, i32* %88, i64 %90
  store i32 %87, i32* %91
  %93 = load i32, i32* %11
  %94 = add nsw i32 %93, 1
  store i32 %94, i32* %11
  %95 = load i32, i32* %12
  %96 = add nsw i32 %95, -1
  store i32 %96, i32* %12
  br label %67
97:
  store i32 0, i32* %14
  %102 = load i32, i32* %5
  %103 = sub nsw i32 %102, 1
  store i32 %103, i32* %15
  br label %104
104:
  %105 = load i32, i32* %14
  %106 = load i32, i32* %15
  %107 = icmp slt i32 %105, %106
  br i1 %107, label %108, label %134
108:
  %110 = load i32*, i32** %4
  %111 = load i32, i32* %14
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i32, i32* %110, i64 %112
  %114 = load i32, i32* %113
  store i32 %114, i32* %16
  %115 = load i32*, i32** %4
  %116 = load i32, i32* %15
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i32, i32* %115, i64 %117
  %119 = load i32, i32* %118
  %120 = load i32*, i32** %4
  %121 = load i32, i32* %14
  %122 = sext i32 %121 to i64
  %123 = getelementptr inbounds i32, i32* %120, i64 %122
  store i32 %119, i32* %123
  %124 = load i32, i32* %16
  %125 = load i32*, i32** %4
  %126 = load i32, i32* %15
  %127 = sext i32 %126 to i64
  %128 = getelementptr inbounds i32, i32* %125, i64 %127
  store i32 %124, i32* %128
  %130 = load i32, i32* %14
  %131 = add nsw i32 %130, 1
  store i32 %131, i32* %14
  %132 = load i32, i32* %15
  %133 = add nsw i32 %132, -1
  store i32 %133, i32* %15
  br label %104
134:
  br label %138
138:
  ret void
}
