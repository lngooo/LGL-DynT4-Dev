define dso_local void @Ls(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca [64 x i32]
  %11 = alloca [64 x i32]
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  %17 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %21, label %150
21:
  %23 = load i32, i32* %5
  %24 = load i32, i32* %6
  %25 = add nsw i32 %23, %24
  %26 = ashr i32 %25, 1
  store i32 %26, i32* %7
  %27 = load i32*, i32** %4
  %28 = load i32, i32* %5
  %29 = load i32, i32* %7
  call void @Ls(i32* %27, i32 %28, i32 %29)
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  %33 = load i32, i32* %6
  call void @Ls(i32* %30, i32 %32, i32 %33)
  %35 = load i32, i32* %7
  %36 = load i32, i32* %5
  %37 = sub nsw i32 %35, %36
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %8
  %40 = load i32, i32* %6
  %41 = load i32, i32* %7
  %42 = sub nsw i32 %40, %41
  store i32 %42, i32* %9
  store i32 0, i32* %12
  br label %46
46:
  %47 = load i32, i32* %12
  %48 = load i32, i32* %8
  %49 = icmp slt i32 %47, %48
  br i1 %49, label %52, label %50
50:
  br label %66
52:
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %5
  %55 = load i32, i32* %12
  %56 = add nsw i32 %54, %55
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %53, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32, i32* %12
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds [64 x i32], [64 x i32]* %10, i64 0, i64 %61
  store i32 %59, i32* %62
  br label %63
63:
  %64 = load i32, i32* %12
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %12
  br label %46
66:
  store i32 0, i32* %13
  br label %68
68:
  %69 = load i32, i32* %13
  %70 = load i32, i32* %9
  %71 = icmp slt i32 %69, %70
  br i1 %71, label %74, label %72
72:
  br label %89
74:
  %75 = load i32*, i32** %4
  %76 = load i32, i32* %7
  %77 = add nsw i32 %76, 1
  %78 = load i32, i32* %13
  %79 = add nsw i32 %77, %78
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %75, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32, i32* %13
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds [64 x i32], [64 x i32]* %11, i64 0, i64 %84
  store i32 %82, i32* %85
  br label %86
86:
  %87 = load i32, i32* %13
  %88 = add nsw i32 %87, 1
  store i32 %88, i32* %13
  br label %68
89:
  %90 = load i32, i32* %8
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds [64 x i32], [64 x i32]* %10, i64 0, i64 %91
  store i32 2147483647, i32* %92
  %93 = load i32, i32* %9
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds [64 x i32], [64 x i32]* %11, i64 0, i64 %94
  store i32 2147483647, i32* %95
  store i32 0, i32* %14
  store i32 0, i32* %15
  %99 = load i32, i32* %5
  store i32 %99, i32* %16
  br label %100
100:
  %101 = load i32, i32* %16
  %102 = load i32, i32* %6
  %103 = icmp sle i32 %101, %102
  br i1 %103, label %106, label %104
104:
  br label %142
106:
  %108 = load i32, i32* %14
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds [64 x i32], [64 x i32]* %10, i64 0, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32, i32* %15
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds [64 x i32], [64 x i32]* %11, i64 0, i64 %113
  %115 = load i32, i32* %114
  %116 = icmp sle i32 %111, %115
  %117 = zext i1 %116 to i32
  store i32 %117, i32* %17
  %118 = load i32, i32* %17
  %119 = icmp ne i32 %118, 0
  br i1 %119, label %120, label %126
120:
  %121 = load i32, i32* %14
  %122 = add nsw i32 %121, 1
  store i32 %122, i32* %14
  %123 = sext i32 %121 to i64
  %124 = getelementptr inbounds [64 x i32], [64 x i32]* %10, i64 0, i64 %123
  %125 = load i32, i32* %124
  br label %132
126:
  %127 = load i32, i32* %15
  %128 = add nsw i32 %127, 1
  store i32 %128, i32* %15
  %129 = sext i32 %127 to i64
  %130 = getelementptr inbounds [64 x i32], [64 x i32]* %11, i64 0, i64 %129
  %131 = load i32, i32* %130
  br label %132
132:
  %133 = phi i32 [ %125, %120 ], [ %131, %126 ]
  %134 = load i32*, i32** %4
  %135 = load i32, i32* %16
  %136 = sext i32 %135 to i64
  %137 = getelementptr inbounds i32, i32* %134, i64 %136
  store i32 %133, i32* %137
  br label %139
139:
  %140 = load i32, i32* %16
  %141 = add nsw i32 %140, 1
  store i32 %141, i32* %16
  br label %100
142:
  br label %150
150:
  ret void
}
