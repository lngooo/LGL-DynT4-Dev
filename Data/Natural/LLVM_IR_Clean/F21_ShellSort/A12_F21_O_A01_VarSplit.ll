define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %14 = load i32, i32* %4
  %15 = sdiv i32 %14, 4
  store i32 %15, i32* %5
  %17 = load i32, i32* %4
  %18 = sdiv i32 %17, 4
  store i32 %18, i32* %6
  %20 = load i32, i32* %5
  %21 = load i32, i32* %6
  %22 = add nsw i32 %20, %21
  %23 = load i32, i32* %4
  %24 = srem i32 %23, 2
  %25 = sdiv i32 %24, 2
  %26 = add nsw i32 %22, %25
  store i32 %26, i32* %7
  br label %27
27:
  %28 = load i32, i32* %7
  %29 = icmp sgt i32 %28, 0
  br i1 %29, label %32, label %30
30:
  store i32 2, i32* %8
  br label %111
32:
  %34 = load i32, i32* %7
  store i32 %34, i32* %9
  br label %35
35:
  %36 = load i32, i32* %9
  %37 = load i32, i32* %4
  %38 = icmp slt i32 %36, %37
  br i1 %38, label %41, label %39
39:
  store i32 5, i32* %8
  br label %107
41:
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = srem i32 %47, 10
  store i32 %48, i32* %10
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53
  %55 = sdiv i32 %54, 10
  store i32 %55, i32* %11
  %57 = load i32, i32* %9
  store i32 %57, i32* %12
  br label %58
58:
  %59 = load i32, i32* %12
  %60 = load i32, i32* %7
  %61 = icmp sge i32 %59, %60
  br i1 %61, label %62, label %75
62:
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %12
  %65 = load i32, i32* %7
  %66 = sub nsw i32 %64, %65
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %63, i64 %67
  %69 = load i32, i32* %68
  %70 = load i32, i32* %11
  %71 = mul nsw i32 %70, 10
  %72 = load i32, i32* %10
  %73 = add nsw i32 %71, %72
  %74 = icmp sgt i32 %69, %73
  br label %75
75:
  %76 = phi i1 [ false, %58 ], [ %74, %62 ]
  br i1 %76, label %77, label %92
77:
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %12
  %80 = load i32, i32* %7
  %81 = sub nsw i32 %79, %80
  %82 = sext i32 %81 to i64
  %83 = getelementptr inbounds i32, i32* %78, i64 %82
  %84 = load i32, i32* %83
  %85 = load i32*, i32** %3
  %86 = load i32, i32* %12
  %87 = sext i32 %86 to i64
  %88 = getelementptr inbounds i32, i32* %85, i64 %87
  store i32 %84, i32* %88
  %89 = load i32, i32* %7
  %90 = load i32, i32* %12
  %91 = sub nsw i32 %90, %89
  store i32 %91, i32* %12
  br label %58
92:
  %93 = load i32, i32* %11
  %94 = mul nsw i32 %93, 10
  %95 = load i32, i32* %10
  %96 = add nsw i32 %94, %95
  %97 = load i32*, i32** %3
  %98 = load i32, i32* %12
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i32, i32* %97, i64 %99
  store i32 %96, i32* %100
  br label %104
104:
  %105 = load i32, i32* %9
  %106 = add nsw i32 %105, 1
  store i32 %106, i32* %9
  br label %35
107:
  br label %108
108:
  %109 = load i32, i32* %7
  %110 = sdiv i32 %109, 2
  store i32 %110, i32* %7
  br label %27
111:
  ret void
}
