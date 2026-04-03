define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  store i32 1, i32* %7
  br label %17
17:
  %18 = load i32, i32* %7
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %130
20:
  store i32 0, i32* %7
  %22 = load i32, i32* %5
  store i32 %22, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %70
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %35, i64 %38
  %40 = load i32, i32* %39
  %41 = icmp sgt i32 %34, %40
  br i1 %41, label %42, label %66
42:
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %8
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  store i32 %48, i32* %9
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %49, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %8
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  %59 = load i32, i32* %9
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %8
  %62 = add nsw i32 %61, 1
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %60, i64 %63
  store i32 %59, i32* %64
  store i32 1, i32* %7
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  br label %23
70:
  %71 = load i32, i32* %7
  %72 = icmp ne i32 %71, 0
  br i1 %72, label %74, label %73
73:
  br label %130
74:
  store i32 0, i32* %7
  %75 = load i32, i32* %6
  %76 = add nsw i32 %75, -1
  store i32 %76, i32* %6
  %78 = load i32, i32* %6
  %79 = sub nsw i32 %78, 1
  store i32 %79, i32* %10
  br label %80
80:
  %81 = load i32, i32* %10
  %82 = load i32, i32* %5
  %83 = icmp sge i32 %81, %82
  br i1 %83, label %86, label %84
84:
  br label %127
86:
  %87 = load i32*, i32** %3
  %88 = load i32, i32* %10
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i32, i32* %87, i64 %89
  %91 = load i32, i32* %90
  %92 = load i32*, i32** %3
  %93 = load i32, i32* %10
  %94 = add nsw i32 %93, 1
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i32, i32* %92, i64 %95
  %97 = load i32, i32* %96
  %98 = icmp sgt i32 %91, %97
  br i1 %98, label %99, label %123
99:
  %101 = load i32*, i32** %3
  %102 = load i32, i32* %10
  %103 = sext i32 %102 to i64
  %104 = getelementptr inbounds i32, i32* %101, i64 %103
  %105 = load i32, i32* %104
  store i32 %105, i32* %11
  %106 = load i32*, i32** %3
  %107 = load i32, i32* %10
  %108 = add nsw i32 %107, 1
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i32, i32* %106, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32*, i32** %3
  %113 = load i32, i32* %10
  %114 = sext i32 %113 to i64
  %115 = getelementptr inbounds i32, i32* %112, i64 %114
  store i32 %111, i32* %115
  %116 = load i32, i32* %11
  %117 = load i32*, i32** %3
  %118 = load i32, i32* %10
  %119 = add nsw i32 %118, 1
  %120 = sext i32 %119 to i64
  %121 = getelementptr inbounds i32, i32* %117, i64 %120
  store i32 %116, i32* %121
  store i32 1, i32* %7
  br label %123
123:
  br label %124
124:
  %125 = load i32, i32* %10
  %126 = add nsw i32 %125, -1
  store i32 %126, i32* %10
  br label %80
127:
  %128 = load i32, i32* %5
  %129 = add nsw i32 %128, 1
  store i32 %129, i32* %5
  br label %17
130:
  ret void
}
