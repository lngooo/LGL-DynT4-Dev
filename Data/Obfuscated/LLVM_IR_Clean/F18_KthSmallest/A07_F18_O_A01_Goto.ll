define dso_local i32 @SV6(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32
  %6 = alloca i32*
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
  %17 = alloca i32
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  %19 = load i32, i32* %7
  store i32 %19, i32* %10
  %21 = load i32, i32* %8
  store i32 %21, i32* %11
  br label %22
22:
  %23 = load i32, i32* %10
  %24 = load i32, i32* %11
  %25 = icmp sgt i32 %23, %24
  br i1 %25, label %26, label %27
26:
  store i32 -1, i32* %5
  store i32 1, i32* %12
  br label %120
27:
  %28 = load i32*, i32** %6
  %29 = load i32, i32* %11
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  store i32 %32, i32* %13
  %33 = load i32, i32* %10
  store i32 %33, i32* %14
  %34 = load i32, i32* %10
  store i32 %34, i32* %15
  br label %35
35:
  %36 = load i32, i32* %15
  %37 = load i32, i32* %11
  %38 = icmp sge i32 %36, %37
  br i1 %38, label %39, label %40
39:
  br label %77
40:
  %41 = load i32*, i32** %6
  %42 = load i32, i32* %15
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %13
  %47 = icmp sgt i32 %45, %46
  br i1 %47, label %48, label %51
48:
  %49 = load i32, i32* %15
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %15
  br label %35
51:
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %14
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  store i32 %57, i32* %16
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %15
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %14
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %16
  %68 = load i32*, i32** %6
  %69 = load i32, i32* %15
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, i32* %68, i64 %70
  store i32 %67, i32* %71
  %72 = load i32, i32* %14
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %14
  %74 = load i32, i32* %15
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %15
  store i32 3, i32* %12
  br label %35
77:
  %79 = load i32*, i32** %6
  %80 = load i32, i32* %14
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  %83 = load i32, i32* %82
  store i32 %83, i32* %17
  %84 = load i32*, i32** %6
  %85 = load i32, i32* %11
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i32, i32* %84, i64 %86
  %88 = load i32, i32* %87
  %89 = load i32*, i32** %6
  %90 = load i32, i32* %14
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  store i32 %88, i32* %92
  %93 = load i32, i32* %17
  %94 = load i32*, i32** %6
  %95 = load i32, i32* %11
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, i32* %94, i64 %96
  store i32 %93, i32* %97
  %99 = load i32, i32* %14
  %100 = load i32, i32* %9
  %101 = sub nsw i32 %100, 1
  %102 = icmp eq i32 %99, %101
  br i1 %102, label %103, label %109
103:
  %104 = load i32*, i32** %6
  %105 = load i32, i32* %14
  %106 = sext i32 %105 to i64
  %107 = getelementptr inbounds i32, i32* %104, i64 %106
  %108 = load i32, i32* %107
  store i32 %108, i32* %5
  store i32 1, i32* %12
  br label %120
109:
  %110 = load i32, i32* %14
  %111 = load i32, i32* %9
  %112 = sub nsw i32 %111, 1
  %113 = icmp sgt i32 %110, %112
  br i1 %113, label %114, label %117
114:
  %115 = load i32, i32* %14
  %116 = sub nsw i32 %115, 1
  store i32 %116, i32* %11
  br label %22
117:
  %118 = load i32, i32* %14
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %10
  br label %22
120:
  %123 = load i32, i32* %5
  ret i32 %123
}
