define dso_local void @QuickSort(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %16
15:
  br label %116
16:
  %18 = load i32, i32* %5
  store i32 %18, i32* %7
  %20 = load i32, i32* %6
  store i32 %20, i32* %8
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %5
  %24 = load i32, i32* %6
  %25 = add nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %22, i64 %27
  %29 = load i32, i32* %28
  store i32 %29, i32* %9
  br label %30
30:
  %31 = load i32, i32* %7
  %32 = load i32, i32* %8
  %33 = icmp sle i32 %31, %32
  br i1 %33, label %34, label %92
34:
  br label %35
35:
  %36 = load i32*, i32** %4
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32, i32* %9
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %46
43:
  %44 = load i32, i32* %7
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %7
  br label %35
46:
  br label %47
47:
  %48 = load i32*, i32** %4
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %9
  %54 = icmp sgt i32 %52, %53
  br i1 %54, label %55, label %58
55:
  %56 = load i32, i32* %8
  %57 = add nsw i32 %56, -1
  store i32 %57, i32* %8
  br label %47
58:
  %59 = load i32, i32* %7
  %60 = load i32, i32* %8
  %61 = icmp sle i32 %59, %60
  br i1 %61, label %62, label %89
62:
  %64 = load i32*, i32** %4
  %65 = load i32, i32* %7
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i32, i32* %64, i64 %66
  %68 = load i32, i32* %67
  store i32 %68, i32* %10
  %69 = load i32*, i32** %4
  %70 = load i32, i32* %8
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %69, i64 %71
  %73 = load i32, i32* %72
  %74 = load i32*, i32** %4
  %75 = load i32, i32* %7
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  %78 = load i32, i32* %10
  %79 = load i32*, i32** %4
  %80 = load i32, i32* %8
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %79, i64 %81
  store i32 %78, i32* %82
  %83 = load i32, i32* %7
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %7
  %85 = load i32, i32* %8
  %86 = add nsw i32 %85, -1
  store i32 %86, i32* %8
  store i32 0, i32* %11
  %88 = load i32, i32* %11
  br label %90
89:
  br label %90
90:
  %91 = phi i32 [ %88, %62 ], [ 0, %89 ]
  br label %30
92:
  %93 = load i32, i32* %5
  %94 = load i32, i32* %8
  %95 = icmp slt i32 %93, %94
  br i1 %95, label %96, label %100
96:
  %97 = load i32*, i32** %4
  %98 = load i32, i32* %5
  %99 = load i32, i32* %8
  call void @QuickSort(i32* %97, i32 %98, i32 %99)
  br label %101
100:
  br label %101
101:
  %102 = phi i32 [ 0, %96 ], [ 0, %100 ]
  %103 = load i32, i32* %7
  %104 = load i32, i32* %6
  %105 = icmp slt i32 %103, %104
  br i1 %105, label %106, label %110
106:
  %107 = load i32*, i32** %4
  %108 = load i32, i32* %7
  %109 = load i32, i32* %6
  call void @QuickSort(i32* %107, i32 %108, i32 %109)
  br label %111
110:
  br label %111
111:
  %112 = phi i32 [ 0, %106 ], [ 0, %110 ]
  br label %116
116:
  ret void
}
