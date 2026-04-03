define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %3
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %3
  br label %10
20:
  store i32 0, i32* %4
  br label %21
21:
  %22 = load i32, i32* %4
  %23 = load i32, i32* %3
  %24 = sdiv i32 %23, 2
  %25 = icmp slt i32 %22, %24
  br i1 %25, label %26, label %54
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  store i8 %31, i8* %5
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %3
  %34 = sub nsw i32 %33, 1
  %35 = load i32, i32* %4
  %36 = sub nsw i32 %34, %35
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %32, i64 %37
  %39 = load i8, i8* %38
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %4
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  store i8 %39, i8* %43
  %44 = load i8, i8* %5
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %3
  %47 = sub nsw i32 %46, 1
  %48 = load i32, i32* %4
  %49 = sub nsw i32 %47, %48
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %45, i64 %50
  store i8 %44, i8* %51
  %52 = load i32, i32* %4
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %4
  br label %21
54:
  store i32 0, i32* %6
  store i32 0, i32* %4
  br label %55
55:
  %56 = load i32, i32* %4
  %57 = load i32, i32* %3
  %58 = icmp sle i32 %56, %57
  br i1 %58, label %59, label %123
59:
  %60 = load i8*, i8** %2
  %61 = load i32, i32* %4
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = icmp eq i32 %65, 32
  br i1 %66, label %75, label %67
67:
  %68 = load i8*, i8** %2
  %69 = load i32, i32* %4
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  %72 = load i8, i8* %71
  %73 = sext i8 %72 to i32
  %74 = icmp eq i32 %73, 0
  br i1 %74, label %75, label %120
75:
  store i32 0, i32* %7
  br label %77
77:
  %78 = load i32, i32* %7
  %79 = load i32, i32* %4
  %80 = load i32, i32* %6
  %81 = sub nsw i32 %79, %80
  %82 = sdiv i32 %81, 2
  %83 = icmp slt i32 %78, %82
  br i1 %83, label %84, label %116
84:
  %85 = load i8*, i8** %2
  %86 = load i32, i32* %6
  %87 = load i32, i32* %7
  %88 = add nsw i32 %86, %87
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %85, i64 %89
  %91 = load i8, i8* %90
  store i8 %91, i8* %8
  %92 = load i8*, i8** %2
  %93 = load i32, i32* %4
  %94 = sub nsw i32 %93, 1
  %95 = load i32, i32* %7
  %96 = sub nsw i32 %94, %95
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i8, i8* %92, i64 %97
  %99 = load i8, i8* %98
  %100 = load i8*, i8** %2
  %101 = load i32, i32* %6
  %102 = load i32, i32* %7
  %103 = add nsw i32 %101, %102
  %104 = sext i32 %103 to i64
  %105 = getelementptr inbounds i8, i8* %100, i64 %104
  store i8 %99, i8* %105
  %106 = load i8, i8* %8
  %107 = load i8*, i8** %2
  %108 = load i32, i32* %4
  %109 = sub nsw i32 %108, 1
  %110 = load i32, i32* %7
  %111 = sub nsw i32 %109, %110
  %112 = sext i32 %111 to i64
  %113 = getelementptr inbounds i8, i8* %107, i64 %112
  store i8 %106, i8* %113
  %114 = load i32, i32* %7
  %115 = add nsw i32 %114, 1
  store i32 %115, i32* %7
  br label %77
116:
  %117 = load i32, i32* %4
  %118 = add nsw i32 %117, 1
  store i32 %118, i32* %6
  br label %120
120:
  %121 = load i32, i32* %4
  %122 = add nsw i32 %121, 1
  store i32 %122, i32* %4
  br label %55
123:
  ret void
}
