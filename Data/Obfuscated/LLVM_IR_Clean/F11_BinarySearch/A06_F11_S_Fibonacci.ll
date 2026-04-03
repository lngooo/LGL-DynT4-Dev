define dso_local i32 @Y0(i32* %0, i32 %1, i32 %2) {
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
  store i32 0, i32* %8
  store i32 1, i32* %9
  %17 = load i32, i32* %8
  %18 = load i32, i32* %9
  %19 = add nsw i32 %17, %18
  store i32 %19, i32* %10
  br label %20
20:
  %21 = load i32, i32* %10
  %22 = load i32, i32* %6
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %24, label %30
24:
  %25 = load i32, i32* %9
  store i32 %25, i32* %8
  %26 = load i32, i32* %10
  store i32 %26, i32* %9
  %27 = load i32, i32* %8
  %28 = load i32, i32* %9
  %29 = add nsw i32 %27, %28
  store i32 %29, i32* %10
  br label %20
30:
  store i32 -1, i32* %11
  br label %32
32:
  %33 = load i32, i32* %10
  %34 = icmp sgt i32 %33, 1
  br i1 %34, label %35, label %90
35:
  %37 = load i32, i32* %11
  %38 = load i32, i32* %8
  %39 = add nsw i32 %37, %38
  %40 = load i32, i32* %6
  %41 = sub nsw i32 %40, 1
  %42 = icmp slt i32 %39, %41
  br i1 %42, label %43, label %47
43:
  %44 = load i32, i32* %11
  %45 = load i32, i32* %8
  %46 = add nsw i32 %44, %45
  br label %50
47:
  %48 = load i32, i32* %6
  %49 = sub nsw i32 %48, 1
  br label %50
50:
  %51 = phi i32 [ %46, %43 ], [ %49, %47 ]
  store i32 %51, i32* %12
  %52 = load i32*, i32** %5
  %53 = load i32, i32* %12
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32, i32* %7
  %58 = icmp slt i32 %56, %57
  br i1 %58, label %59, label %66
59:
  %60 = load i32, i32* %9
  store i32 %60, i32* %10
  %61 = load i32, i32* %8
  store i32 %61, i32* %9
  %62 = load i32, i32* %10
  %63 = load i32, i32* %9
  %64 = sub nsw i32 %62, %63
  store i32 %64, i32* %8
  %65 = load i32, i32* %12
  store i32 %65, i32* %11
  br label %85
66:
  %67 = load i32*, i32** %5
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  %72 = load i32, i32* %7
  %73 = icmp sgt i32 %71, %72
  br i1 %73, label %74, label %82
74:
  %75 = load i32, i32* %8
  store i32 %75, i32* %10
  %76 = load i32, i32* %9
  %77 = load i32, i32* %8
  %78 = sub nsw i32 %76, %77
  store i32 %78, i32* %9
  %79 = load i32, i32* %10
  %80 = load i32, i32* %9
  %81 = sub nsw i32 %79, %80
  store i32 %81, i32* %8
  br label %84
82:
  %83 = load i32, i32* %12
  store i32 %83, i32* %4
  store i32 1, i32* %13
  br label %86
84:
  br label %85
85:
  store i32 0, i32* %13
  br label %86
86:
  %88 = load i32, i32* %13
  switch i32 %88, label %106 [
    i32 0, label %89
  ]
89:
  br label %32
90:
  %91 = load i32, i32* %9
  %92 = icmp ne i32 %91, 0
  br i1 %92, label %93, label %105
93:
  %94 = load i32*, i32** %5
  %95 = load i32, i32* %11
  %96 = add nsw i32 %95, 1
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  %99 = load i32, i32* %98
  %100 = load i32, i32* %7
  %101 = icmp eq i32 %99, %100
  br i1 %101, label %102, label %105
102:
  %103 = load i32, i32* %11
  %104 = add nsw i32 %103, 1
  store i32 %104, i32* %4
  store i32 1, i32* %13
  br label %106
105:
  store i32 -1, i32* %4
  store i32 1, i32* %13
  br label %106
106:
  %111 = load i32, i32* %4
  ret i32 %111
}
