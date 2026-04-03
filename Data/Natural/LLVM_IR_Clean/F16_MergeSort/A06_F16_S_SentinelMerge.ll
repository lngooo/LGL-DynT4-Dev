define dso_local void @MergeSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca [128 x i32]
  %11 = alloca [128 x i32]
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i32
  %15 = alloca i32
  %16 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %17 = load i32, i32* %5
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %20, label %146
20:
  %22 = load i32, i32* %5
  %23 = load i32, i32* %6
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = add nsw i32 %22, %26
  store i32 %27, i32* %7
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = load i32, i32* %7
  call void @MergeSort(i32* %28, i32 %29, i32 %30)
  %31 = load i32*, i32** %4
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, 1
  %34 = load i32, i32* %6
  call void @MergeSort(i32* %31, i32 %33, i32 %34)
  %36 = load i32, i32* %7
  %37 = load i32, i32* %5
  %38 = sub nsw i32 %36, %37
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %8
  %41 = load i32, i32* %6
  %42 = load i32, i32* %7
  %43 = sub nsw i32 %41, %42
  store i32 %43, i32* %9
  store i32 0, i32* %12
  br label %47
47:
  %48 = load i32, i32* %12
  %49 = load i32, i32* %8
  %50 = icmp slt i32 %48, %49
  br i1 %50, label %53, label %51
51:
  br label %67
53:
  %54 = load i32*, i32** %4
  %55 = load i32, i32* %5
  %56 = load i32, i32* %12
  %57 = add nsw i32 %55, %56
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %54, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %12
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds [128 x i32], [128 x i32]* %10, i64 0, i64 %62
  store i32 %60, i32* %63
  br label %64
64:
  %65 = load i32, i32* %12
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %12
  br label %47
67:
  store i32 0, i32* %13
  br label %69
69:
  %70 = load i32, i32* %13
  %71 = load i32, i32* %9
  %72 = icmp slt i32 %70, %71
  br i1 %72, label %75, label %73
73:
  br label %90
75:
  %76 = load i32*, i32** %4
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  %79 = load i32, i32* %13
  %80 = add nsw i32 %78, %79
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %76, i64 %81
  %83 = load i32, i32* %82
  %84 = load i32, i32* %13
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds [128 x i32], [128 x i32]* %11, i64 0, i64 %85
  store i32 %83, i32* %86
  br label %87
87:
  %88 = load i32, i32* %13
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %13
  br label %69
90:
  %91 = load i32, i32* %8
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds [128 x i32], [128 x i32]* %10, i64 0, i64 %92
  store i32 2147483647, i32* %93
  %94 = load i32, i32* %9
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds [128 x i32], [128 x i32]* %11, i64 0, i64 %95
  store i32 2147483647, i32* %96
  store i32 0, i32* %14
  store i32 0, i32* %15
  %100 = load i32, i32* %5
  store i32 %100, i32* %16
  br label %101
101:
  %102 = load i32, i32* %16
  %103 = load i32, i32* %6
  %104 = icmp sle i32 %102, %103
  br i1 %104, label %107, label %105
105:
  br label %138
107:
  %108 = load i32, i32* %14
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds [128 x i32], [128 x i32]* %10, i64 0, i64 %109
  %111 = load i32, i32* %110
  %112 = load i32, i32* %15
  %113 = sext i32 %112 to i64
  %114 = getelementptr inbounds [128 x i32], [128 x i32]* %11, i64 0, i64 %113
  %115 = load i32, i32* %114
  %116 = icmp sle i32 %111, %115
  br i1 %116, label %117, label %123
117:
  %118 = load i32, i32* %14
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %14
  %120 = sext i32 %118 to i64
  %121 = getelementptr inbounds [128 x i32], [128 x i32]* %10, i64 0, i64 %120
  %122 = load i32, i32* %121
  br label %129
123:
  %124 = load i32, i32* %15
  %125 = add nsw i32 %124, 1
  store i32 %125, i32* %15
  %126 = sext i32 %124 to i64
  %127 = getelementptr inbounds [128 x i32], [128 x i32]* %11, i64 0, i64 %126
  %128 = load i32, i32* %127
  br label %129
129:
  %130 = phi i32 [ %122, %117 ], [ %128, %123 ]
  %131 = load i32*, i32** %4
  %132 = load i32, i32* %16
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds i32, i32* %131, i64 %133
  store i32 %130, i32* %134
  br label %135
135:
  %136 = load i32, i32* %16
  %137 = add nsw i32 %136, 1
  store i32 %137, i32* %16
  br label %101
138:
  br label %146
146:
  ret void
}
