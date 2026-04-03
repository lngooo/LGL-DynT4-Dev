define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %14 = load i32, i32* %6
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i32 -1, i32* %4
  br label %110
17:
  store i32 1, i32* %8
  store i32 0, i32* %9
  br label %23
23:
  %24 = load i32, i32* %9
  %25 = icmp ne i32 %24, -1
  br i1 %25, label %26, label %103
26:
  %27 = load i32, i32* %9
  switch i32 %27, label %102 [
    i32 0, label %28
    i32 1, label %36
    i32 2, label %65
  ]
28:
  %29 = load i32*, i32** %5
  %30 = getelementptr inbounds i32, i32* %29, i64 0
  %31 = load i32, i32* %30
  %32 = load i32, i32* %7
  %33 = icmp eq i32 %31, %32
  br i1 %33, label %34, label %35
34:
  store i32 0, i32* %4
  store i32 1, i32* %13
  br label %104
35:
  store i32 1, i32* %9
  br label %102
36:
  %37 = load i32, i32* %8
  %38 = load i32, i32* %6
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %40, label %51
40:
  %41 = load i32*, i32** %5
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %45, %46
  br i1 %47, label %48, label %51
48:
  %49 = load i32, i32* %8
  %50 = mul nsw i32 %49, 2
  store i32 %50, i32* %8
  br label %64
51:
  %52 = load i32, i32* %8
  %53 = sdiv i32 %52, 2
  store i32 %53, i32* %10
  %54 = load i32, i32* %8
  %55 = load i32, i32* %6
  %56 = icmp slt i32 %54, %55
  br i1 %56, label %57, label %59
57:
  %58 = load i32, i32* %8
  br label %62
59:
  %60 = load i32, i32* %6
  %61 = sub nsw i32 %60, 1
  br label %62
62:
  %63 = phi i32 [ %58, %57 ], [ %61, %59 ]
  store i32 %63, i32* %11
  store i32 2, i32* %9
  br label %64
64:
  br label %102
65:
  %66 = load i32, i32* %10
  %67 = load i32, i32* %11
  %68 = icmp sle i32 %66, %67
  br i1 %68, label %69, label %100
69:
  %70 = load i32, i32* %10
  %71 = load i32, i32* %11
  %72 = load i32, i32* %10
  %73 = sub nsw i32 %71, %72
  %74 = sdiv i32 %73, 2
  %75 = add nsw i32 %70, %74
  store i32 %75, i32* %12
  %76 = load i32*, i32** %5
  %77 = load i32, i32* %12
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  %80 = load i32, i32* %79
  %81 = load i32, i32* %7
  %82 = icmp eq i32 %80, %81
  br i1 %82, label %83, label %85
83:
  %84 = load i32, i32* %12
  store i32 %84, i32* %4
  store i32 1, i32* %13
  br label %104
85:
  %86 = load i32*, i32** %5
  %87 = load i32, i32* %12
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  %90 = load i32, i32* %89
  %91 = load i32, i32* %7
  %92 = icmp slt i32 %90, %91
  br i1 %92, label %93, label %96
93:
  %94 = load i32, i32* %12
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %10
  br label %99
96:
  %97 = load i32, i32* %12
  %98 = sub nsw i32 %97, 1
  store i32 %98, i32* %11
  br label %99
99:
  br label %101
100:
  store i32 -1, i32* %4
  store i32 1, i32* %13
  br label %104
101:
  br label %102
102:
  br label %23
103:
  store i32 -1, i32* %4
  store i32 1, i32* %13
  br label %104
104:
  br label %110
110:
  %111 = load i32, i32* %4
  ret i32 %111
}
