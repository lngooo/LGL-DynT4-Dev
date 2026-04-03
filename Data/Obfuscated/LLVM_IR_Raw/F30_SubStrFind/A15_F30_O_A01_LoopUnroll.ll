@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @E2(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %13 = load i8*, i8** %4
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %6
  %17 = load i8*, i8** %5
  %18 = call i64 @strlen(i8* %17)
  %19 = trunc i64 %18 to i32
  store i32 %19, i32* %7
  %20 = load i32, i32* %7
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %122
23:
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %6
  %28 = load i32, i32* %7
  %29 = sub nsw i32 %27, %28
  %30 = icmp sle i32 %26, %29
  br i1 %30, label %32, label %31
31:
  store i32 2, i32* %8
  br label %118
32:
  store i32 1, i32* %10
  store i32 0, i32* %11
  br label %35
35:
  %36 = load i32, i32* %11
  %37 = load i32, i32* %7
  %38 = sub nsw i32 %37, 1
  %39 = icmp slt i32 %36, %38
  br i1 %39, label %40, label %78
40:
  %41 = load i8*, i8** %4
  %42 = load i32, i32* %9
  %43 = load i32, i32* %11
  %44 = add nsw i32 %42, %43
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %41, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = load i8*, i8** %5
  %50 = load i32, i32* %11
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = icmp ne i32 %48, %54
  br i1 %55, label %74, label %56
56:
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %9
  %59 = load i32, i32* %11
  %60 = add nsw i32 %58, %59
  %61 = add nsw i32 %60, 1
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %57, i64 %62
  %64 = load i8, i8* %63
  %65 = sext i8 %64 to i32
  %66 = load i8*, i8** %5
  %67 = load i32, i32* %11
  %68 = add nsw i32 %67, 1
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %66, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = icmp ne i32 %65, %72
  br i1 %73, label %74, label %75
74:
  store i32 0, i32* %10
  br label %78
75:
  %76 = load i32, i32* %11
  %77 = add nsw i32 %76, 2
  store i32 %77, i32* %11
  br label %35
78:
  %79 = load i32, i32* %10
  %80 = icmp ne i32 %79, 0
  br i1 %80, label %81, label %104
81:
  %82 = load i32, i32* %11
  %83 = load i32, i32* %7
  %84 = sub nsw i32 %83, 1
  %85 = icmp eq i32 %82, %84
  br i1 %85, label %86, label %104
86:
  %87 = load i8*, i8** %4
  %88 = load i32, i32* %9
  %89 = load i32, i32* %11
  %90 = add nsw i32 %88, %89
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i8, i8* %87, i64 %91
  %93 = load i8, i8* %92
  %94 = sext i8 %93 to i32
  %95 = load i8*, i8** %5
  %96 = load i32, i32* %11
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i8, i8* %95, i64 %97
  %99 = load i8, i8* %98
  %100 = sext i8 %99 to i32
  %101 = icmp ne i32 %94, %100
  br i1 %101, label %102, label %103
102:
  store i32 0, i32* %10
  br label %103
103:
  br label %104
104:
  %105 = load i32, i32* %10
  %106 = icmp ne i32 %105, 0
  br i1 %106, label %107, label %109
107:
  %108 = load i32, i32* %9
  store i32 %108, i32* %3
  store i32 1, i32* %8
  br label %110
109:
  store i32 0, i32* %8
  br label %110
110:
  %113 = load i32, i32* %8
  switch i32 %113, label %118 [
    i32 0, label %114
  ]
114:
  br label %115
115:
  %116 = load i32, i32* %9
  %117 = add nsw i32 %116, 1
  store i32 %117, i32* %9
  br label %25
118:
  %120 = load i32, i32* %8
  switch i32 %120, label %122 [
    i32 2, label %121
  ]
121:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %122
122:
  %125 = load i32, i32* %3
  ret i32 %125
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @E2(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
