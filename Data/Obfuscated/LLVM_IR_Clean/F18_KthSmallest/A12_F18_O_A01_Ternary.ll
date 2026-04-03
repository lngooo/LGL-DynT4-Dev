define dso_local i32 @zz(i32* %0, i32 %1, i32 %2, i32 %3) {
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
  %16 = load i32, i32* %7
  %17 = load i32, i32* %8
  %18 = icmp sge i32 %16, %17
  br i1 %18, label %19, label %40
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %8
  %22 = icmp eq i32 %20, %21
  br i1 %22, label %23, label %32
23:
  %24 = load i32, i32* %9
  %25 = icmp eq i32 %24, 1
  br i1 %25, label %26, label %32
26:
  %27 = load i32*, i32** %6
  %28 = load i32, i32* %7
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  br label %38
32:
  %33 = load i32*, i32** %6
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  br label %38
38:
  %39 = phi i32 [ %31, %26 ], [ %37, %32 ]
  store i32 %39, i32* %5
  br label %153
40:
  %42 = load i32*, i32** %6
  %43 = load i32, i32* %8
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i32, i32* %42, i64 %44
  %46 = load i32, i32* %45
  store i32 %46, i32* %10
  %48 = load i32, i32* %7
  store i32 %48, i32* %11
  %50 = load i32, i32* %7
  store i32 %50, i32* %12
  br label %51
51:
  %52 = load i32, i32* %12
  %53 = load i32, i32* %8
  %54 = icmp slt i32 %52, %53
  br i1 %54, label %57, label %55
55:
  br label %96
57:
  %58 = load i32*, i32** %6
  %59 = load i32, i32* %12
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32, i32* %10
  %64 = icmp sle i32 %62, %63
  br i1 %64, label %65, label %90
65:
  %67 = load i32*, i32** %6
  %68 = load i32, i32* %11
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  store i32 %71, i32* %13
  %72 = load i32*, i32** %6
  %73 = load i32, i32* %12
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  %76 = load i32, i32* %75
  %77 = load i32*, i32** %6
  %78 = load i32, i32* %11
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  %81 = load i32, i32* %13
  %82 = load i32*, i32** %6
  %83 = load i32, i32* %12
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i32, i32* %82, i64 %84
  store i32 %81, i32* %85
  %86 = load i32, i32* %11
  %87 = add nsw i32 %86, 1
  store i32 %87, i32* %11
  store i32 0, i32* %14
  %89 = load i32, i32* %14
  br label %91
90:
  br label %91
91:
  %92 = phi i32 [ %89, %65 ], [ 0, %90 ]
  br label %93
93:
  %94 = load i32, i32* %12
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %12
  br label %51
96:
  %98 = load i32*, i32** %6
  %99 = load i32, i32* %11
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i32, i32* %98, i64 %100
  %102 = load i32, i32* %101
  store i32 %102, i32* %15
  %103 = load i32*, i32** %6
  %104 = load i32, i32* %8
  %105 = sext i32 %104 to i64
  %106 = getelementptr inbounds i32, i32* %103, i64 %105
  %107 = load i32, i32* %106
  %108 = load i32*, i32** %6
  %109 = load i32, i32* %11
  %110 = sext i32 %109 to i64
  %111 = getelementptr inbounds i32, i32* %108, i64 %110
  store i32 %107, i32* %111
  %112 = load i32, i32* %15
  %113 = load i32*, i32** %6
  %114 = load i32, i32* %8
  %115 = sext i32 %114 to i64
  %116 = getelementptr inbounds i32, i32* %113, i64 %115
  store i32 %112, i32* %116
  %117 = load i32, i32* %11
  %118 = load i32, i32* %9
  %119 = sub nsw i32 %118, 1
  %120 = icmp eq i32 %117, %119
  br i1 %120, label %121, label %127
121:
  %122 = load i32*, i32** %6
  %123 = load i32, i32* %11
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds i32, i32* %122, i64 %124
  %126 = load i32, i32* %125
  br label %148
127:
  %128 = load i32, i32* %11
  %129 = load i32, i32* %9
  %130 = sub nsw i32 %129, 1
  %131 = icmp sgt i32 %128, %130
  br i1 %131, label %132, label %139
132:
  %133 = load i32*, i32** %6
  %134 = load i32, i32* %7
  %135 = load i32, i32* %11
  %136 = sub nsw i32 %135, 1
  %137 = load i32, i32* %9
  %138 = call i32 @zz(i32* %133, i32 %134, i32 %136, i32 %137)
  br label %146
139:
  %140 = load i32*, i32** %6
  %141 = load i32, i32* %11
  %142 = add nsw i32 %141, 1
  %143 = load i32, i32* %8
  %144 = load i32, i32* %9
  %145 = call i32 @zz(i32* %140, i32 %142, i32 %143, i32 %144)
  br label %146
146:
  %147 = phi i32 [ %138, %132 ], [ %145, %139 ]
  br label %148
148:
  %149 = phi i32 [ %126, %121 ], [ %147, %146 ]
  store i32 %149, i32* %5
  br label %153
153:
  %154 = load i32, i32* %5
  ret i32 %154
}
