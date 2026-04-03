define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %2
  %11 = load i8*, i8** %2
  %12 = call i64 @strlen(i8* %11)
  %13 = trunc i64 %12 to i32
  store i32 %13, i32* %3
  %15 = load i32, i32* %3
  %16 = add nsw i32 %15, 1
  %17 = sext i32 %16 to i64
  %18 = call noalias i8* @malloc(i64 %17)
  store i8* %18, i8** %4
  store i32 0, i32* %5
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 1
  store i32 %22, i32* %6
  br label %23
23:
  %24 = load i32, i32* %6
  %25 = icmp sge i32 %24, 0
  br i1 %25, label %28, label %26
26:
  store i32 2, i32* %7
  br label %84
28:
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %34, 32
  br i1 %35, label %36, label %80
36:
  %38 = load i32, i32* %6
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %8
  br label %40
40:
  %41 = load i8*, i8** %2
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp ne i32 %46, 32
  br i1 %47, label %48, label %56
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %8
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = icmp ne i32 %54, 0
  br label %56
56:
  %57 = phi i1 [ false, %40 ], [ %55, %48 ]
  br i1 %57, label %60, label %58
58:
  store i32 5, i32* %7
  br label %74
60:
  %61 = load i8*, i8** %2
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  %65 = load i8, i8* %64
  %66 = load i8*, i8** %4
  %67 = load i32, i32* %5
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %5
  %69 = sext i32 %67 to i64
  %70 = getelementptr inbounds i8, i8* %66, i64 %69
  store i8 %65, i8* %70
  br label %71
71:
  %72 = load i32, i32* %8
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %8
  br label %40
74:
  %75 = load i8*, i8** %4
  %76 = load i32, i32* %5
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %5
  %78 = sext i32 %76 to i64
  %79 = getelementptr inbounds i8, i8* %75, i64 %78
  store i8 32, i8* %79
  br label %80
80:
  br label %81
81:
  %82 = load i32, i32* %6
  %83 = add nsw i32 %82, -1
  store i32 %83, i32* %6
  br label %23
84:
  store i32 0, i32* %9
  br label %86
86:
  %87 = load i8*, i8** %2
  %88 = load i32, i32* %9
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %87, i64 %89
  %91 = load i8, i8* %90
  %92 = sext i8 %91 to i32
  %93 = icmp ne i32 %92, 32
  br i1 %93, label %94, label %102
94:
  %95 = load i8*, i8** %2
  %96 = load i32, i32* %9
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i8, i8* %95, i64 %97
  %99 = load i8, i8* %98
  %100 = sext i8 %99 to i32
  %101 = icmp ne i32 %100, 0
  br label %102
102:
  %103 = phi i1 [ false, %86 ], [ %101, %94 ]
  br i1 %103, label %106, label %104
104:
  store i32 8, i32* %7
  br label %120
106:
  %107 = load i8*, i8** %2
  %108 = load i32, i32* %9
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %107, i64 %109
  %111 = load i8, i8* %110
  %112 = load i8*, i8** %4
  %113 = load i32, i32* %5
  %114 = add nsw i32 %113, 1
  store i32 %114, i32* %5
  %115 = sext i32 %113 to i64
  %116 = getelementptr inbounds i8, i8* %112, i64 %115
  store i8 %111, i8* %116
  br label %117
117:
  %118 = load i32, i32* %9
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %9
  br label %86
120:
  %121 = load i8*, i8** %4
  %122 = load i32, i32* %5
  %123 = sext i32 %122 to i64
  %124 = getelementptr inbounds i8, i8* %121, i64 %123
  store i8 0, i8* %124
  %125 = load i8*, i8** %2
  %126 = load i8*, i8** %4
  %127 = call i8* @strcpy(i8* %125, i8* %126)
  %128 = load i8*, i8** %4
  call void @free(i8* %128)
  ret void
}
declare i64 @strlen(i8*)
declare noalias i8* @malloc(i64)
declare i8* @strcpy(i8*, i8*)
declare void @free(i8*)
