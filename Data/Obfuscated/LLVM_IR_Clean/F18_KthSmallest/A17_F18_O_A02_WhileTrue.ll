define dso_local i32 @JG(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  store i32* %0, i32** %6
  store i32 %1, i32* %7
  store i32 %2, i32* %8
  store i32 %3, i32* %9
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %8
  %19 = icmp sgt i32 %17, %18
  br i1 %19, label %20, label %21
20:
  br label %123
21:
  %23 = load i32*, i32** %6
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %10
  %29 = load i32, i32* %7
  store i32 %29, i32* %11
  %31 = load i32, i32* %7
  store i32 %31, i32* %12
  br label %32
32:
  %33 = load i32, i32* %12
  %34 = load i32, i32* %8
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  br label %74
38:
  %39 = load i32*, i32** %6
  %40 = load i32, i32* %12
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32, i32* %10
  %45 = icmp sle i32 %43, %44
  br i1 %45, label %46, label %70
46:
  %48 = load i32*, i32** %6
  %49 = load i32, i32* %11
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  store i32 %52, i32* %13
  %53 = load i32*, i32** %6
  %54 = load i32, i32* %12
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %11
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  store i32 %57, i32* %61
  %62 = load i32, i32* %13
  %63 = load i32*, i32** %6
  %64 = load i32, i32* %12
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %11
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %11
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %12
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %12
  br label %32
74:
  %76 = load i32*, i32** %6
  %77 = load i32, i32* %11
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  %80 = load i32, i32* %79
  store i32 %80, i32* %14
  %81 = load i32*, i32** %6
  %82 = load i32, i32* %8
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  %85 = load i32, i32* %84
  %86 = load i32*, i32** %6
  %87 = load i32, i32* %11
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i32, i32* %86, i64 %88
  store i32 %85, i32* %89
  %90 = load i32, i32* %14
  %91 = load i32*, i32** %6
  %92 = load i32, i32* %8
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i32, i32* %91, i64 %93
  store i32 %90, i32* %94
  %95 = load i32, i32* %11
  %96 = load i32, i32* %9
  %97 = sub nsw i32 %96, 1
  %98 = icmp eq i32 %95, %97
  br i1 %98, label %99, label %105
99:
  %100 = load i32*, i32** %6
  %101 = load i32, i32* %11
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i32, i32* %100, i64 %102
  %104 = load i32, i32* %103
  store i32 %104, i32* %5
  store i32 1, i32* %15
  br label %117
105:
  %106 = load i32, i32* %11
  %107 = load i32, i32* %9
  %108 = sub nsw i32 %107, 1
  %109 = icmp sgt i32 %106, %108
  br i1 %109, label %110, label %113
110:
  %111 = load i32, i32* %11
  %112 = sub nsw i32 %111, 1
  store i32 %112, i32* %8
  br label %116
113:
  %114 = load i32, i32* %11
  %115 = add nsw i32 %114, 1
  store i32 %115, i32* %7
  br label %116
116:
  store i32 0, i32* %15
  br label %117
117:
  %121 = load i32, i32* %15
  switch i32 %121, label %126 [
    i32 0, label %122
    i32 1, label %124
  ]
122:
  br label %16
123:
  store i32 -1, i32* %5
  br label %124
124:
  %125 = load i32, i32* %5
  ret i32 %125
126:
  unreachable
}
